

#include "pch.h"
#include "trigger_central.h"
#include "spark_logic.h"

TEST(trigger, map_cam_by_magic_point) {

	EngineTestHelper eth(TEST_CRANK_ENGINE);
	engineConfiguration->isFasterEngineSpinUpEnabled = false;

	engineConfiguration->camInputs[0] = GPIOA_0;
	engineConfiguration->vvtMode[0] = VVT_MAP_V_TWIN_ANOTHER;

	engine->outputChannels.instantMAPValue = 100;

	engineConfiguration->mapCamDetectionAnglePosition = 90;

	eth.smartFireTriggerEvents2(/*count*/10, /*delayMs*/200);
	ASSERT_EQ(150,  Sensor::getOrZero(SensorType::Rpm)) << "RPM";

	ASSERT_EQ(1, engine->outputChannels.TEMPLOG_map_peak);
	ASSERT_EQ(0, engine->outputChannels.vvtSyncCounter);

	// Nothing should have been scheduled yet
	ASSERT_EQ(0, engine->executor.size());

	engine->outputChannels.instantMAPValue = 120;
	eth.smartFireTriggerEvents2(/*count*/4, /*delayMs*/200);

	ASSERT_EQ(2, engine->outputChannels.TEMPLOG_map_peak);
	ASSERT_EQ(1, engine->outputChannels.vvtSyncCounter);
	ASSERT_EQ(10, engine->outputChannels.TEMPLOG_MAP_AT_CYCLE_COUNT);

	// We have "VVT" sync, things should be scheduled!
	ASSERT_EQ(2, engine->executor.size());
	eth.assertEvent5("spark down#0", 0, (void*)turnSparkPinHigh, 185333);
	eth.assertEvent5("spark down#1", 1, (void*)fireSparkAndPrepareNextSchedule, 188333);
}
