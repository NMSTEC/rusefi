#define LE_COMMAND_LENGTH 200
#define TS_FILE_VERSION 20160122
#define WARMUP_TARGET_AFR_SIZE 4
#define MAP_ANGLE_SIZE 8
#define MAP_WINDOW_SIZE 8
#define CLT_CURVE_SIZE 16
#define ENGINE_NOISE_CURVE_SIZE 8
#define IAT_CURVE_SIZE 16
#define VBAT_INJECTOR_CURVE_SIZE 8
#define DWELL_CURVE_SIZE 8
#define CRANKING_CURVE_SIZE 8
#define IGN_LOAD_COUNT 16
#define IGN_RPM_COUNT 16
#define INJECTION_PIN_COUNT 12
#define IGNITION_PIN_COUNT 12
#define EGT_CHANNEL_COUNT 8
#define JOYSTICK_PIN_COUNT 5
#define DIGIPOT_COUNT 4
#define HW_MAX_ADC_INDEX 16
#define TRIGGER_SIMULATOR_PIN_COUNT 3
#define LOGIC_ANALYZER_CHANNEL_COUNT 4
#define LE_COMMAND_COUNT 16
#define FUEL_RPM_COUNT 16
#define FUEL_LOAD_COUNT 16
#define BARO_CORR_SIZE 4
#define MAF_DECODING_COUNT 256
#define engineConfiguration_offset 0
#define engineConfiguration_offset_hex 0
#define engineType_offset 0
#define engineType_offset_hex 0
#define engineSnifferRpmThreshold_offset 4
#define engineSnifferRpmThreshold_offset_hex 4
#define injector_offset 8
#define injector_offset_hex 8
#define injector_flow_offset 8
#define injector_flow_offset_hex 8
#define injector_lag_offset 12
#define injector_battLagCorrBins_offset 16
#define injector_battLagCorrBins_offset_hex 10
#define injector_battLagCorr_offset 48
#define injector_battLagCorr_offset_hex 30
#define directSelfStimulation_offset 80
#define directSelfStimulation_offset_hex 50
#define tpsMin_offset 84
#define tpsMin_offset_hex 54
#define tpsMax_offset 86
#define tpsMax_offset_hex 56
#define tpsErrorDetectionTooLow_offset 88
#define tpsErrorDetectionTooLow_offset_hex 58
#define tpsErrorDetectionTooHigh_offset 90
#define cranking_offset 92
#define cranking_baseFuel_offset 92
#define cranking_rpm_offset 96
#define cranking_rpm_offset_hex 60
#define cranking_alignmentFill_offset 98
#define cranking_alignmentFill_offset_hex 62
#define primingSquirtDurationMs_offset 100
#define primingSquirtDurationMs_offset_hex 64
#define ignitionDwellForCrankingMs_offset 104
#define ignitionDwellForCrankingMs_offset_hex 68
#define crankingChargeAngle_offset 108
#define map_offset 112
#define map_offset_hex 70
#define map_samplingAngleBins_offset 112
#define map_samplingAngleBins_offset_hex 70
#define map_samplingAngle_offset 144
#define map_samplingAngle_offset_hex 90
#define map_samplingWindowBins_offset 176
#define map_samplingWindow_offset 208
#define map_sensor_offset 240
#define map_sensor_valueAt0_offset 240
#define map_sensor_valueAt5_offset 244
#define map_sensor_type_offset 248
#define map_sensor_hwChannel_offset 252
#define clt_offset 256
#define clt_offset_hex 100
#define clt_config_offset 256
#define clt_config_offset_hex 100
#define clt_tempC_1_offset 256
#define clt_tempC_1_offset_hex 100
#define clt_tempC_2_offset 260
#define clt_tempC_2_offset_hex 104
#define clt_tempC_3_offset 264
#define clt_tempC_3_offset_hex 108
#define clt_resistance_1_offset 268
#define clt_resistance_2_offset 272
#define clt_resistance_2_offset_hex 110
#define clt_resistance_3_offset 276
#define clt_resistance_3_offset_hex 114
#define clt_bias_resistor_offset 280
#define clt_bias_resistor_offset_hex 118
#define clt_adcChannel_offset 284
#define iat_offset 288
#define iat_offset_hex 120
#define iat_config_offset 288
#define iat_config_offset_hex 120
#define iat_tempC_1_offset 288
#define iat_tempC_1_offset_hex 120
#define iat_tempC_2_offset 292
#define iat_tempC_2_offset_hex 124
#define iat_tempC_3_offset 296
#define iat_tempC_3_offset_hex 128
#define iat_resistance_1_offset 300
#define iat_resistance_2_offset 304
#define iat_resistance_2_offset_hex 130
#define iat_resistance_3_offset 308
#define iat_resistance_3_offset_hex 134
#define iat_bias_resistor_offset 312
#define iat_bias_resistor_offset_hex 138
#define iat_adcChannel_offset 316
#define step1rpm_offset 320
#define step1rpm_offset_hex 140
#define step1timing_offset 324
#define step1timing_offset_hex 144
#define hip9011PrescalerAndSDO_offset 328
#define hip9011PrescalerAndSDO_offset_hex 148
#define knockBandCustom_offset 332
#define sparkDwellBins_offset 336
#define sparkDwellBins_offset_hex 150
#define sparkDwell_offset 368
#define sparkDwell_offset_hex 170
#define specs_offset 400
#define specs_offset_hex 190
#define displacement_offset 400
#define displacement_offset_hex 190
#define cylindersCount_offset 404
#define cylindersCount_offset_hex 194
#define firingOrder_offset 408
#define firingOrder_offset_hex 198
#define cylinderBore_offset 412
#define sensorSnifferRpmThreshold_offset 416
#define rpmHardLimit_offset 420
#define algorithm_offset 424
#define crankingInjectionMode_offset 428
#define injectionMode_offset 432
#define injectionOffset_offset 436
#define crankingTimingAngle_offset 440
#define ignitionMode_offset 444
#define ignitionOffset_offset 448
#define timingMode_offset 452
#define fixedModeTiming_offset 456
#define globalTriggerAngleOffset_offset 460
#define analogInputDividerCoefficient_offset 464
#define vbattDividerCoeff_offset 468
#define vbattAdcChannel_offset 472
#define fanOnTemperature_offset 476
#define fanOffTemperature_offset 480
#define fuelLevelSensor_offset 484
#define vehicleSpeedCoef_offset 488
#define canNbcType_offset 492
#define canSleepPeriod_offset 496
#define operationMode_offset 500
#define displayMode_offset 504
#define logFormat_offset 508
#define firmwareVersion_offset 512
#define firmwareVersion_offset_hex 200
#define HD44780width_offset 516
#define HD44780width_offset_hex 204
#define HD44780height_offset 520
#define HD44780height_offset_hex 208
#define tpsAdcChannel_offset 524
#define overrideCrankingIgnition_offset 528
#define overrideCrankingIgnition_offset_hex 210
#define sensorChartFrequency_offset 532
#define sensorChartFrequency_offset_hex 214
#define trigger_offset 536
#define trigger_offset_hex 218
#define trigger_type_offset 536
#define trigger_type_offset_hex 218
#define trigger_customIsSynchronizationNeeded_offset 540
#define trigger_customNeedSecondTriggerInput_offset 540
#define trigger_useOnlyFirstChannel_offset 540
#define trigger_customTotalToothCount_offset 544
#define trigger_customTotalToothCount_offset_hex 220
#define trigger_customSkippedToothCount_offset 548
#define trigger_customSkippedToothCount_offset_hex 224
#define trigger_customSyncRatioFrom_offset 552
#define trigger_customSyncRatioFrom_offset_hex 228
#define trigger_customSyncRatioTo_offset 556
#define trigger_customUseRiseEdge_offset 560
#define trigger_customUseRiseEdge_offset_hex 230
#define hip9011SpiDevice_offset 564
#define hip9011SpiDevice_offset_hex 234
#define globalFuelCorrection_offset 568
#define globalFuelCorrection_offset_hex 238
#define pedalPositionMin_offset 572
#define pedalPositionMax_offset 574
#define maxKnockSubDeg_offset 576
#define maxKnockSubDeg_offset_hex 240
#define mafAdcChannel_offset 580
#define mafAdcChannel_offset_hex 244
#define afr_offset 584
#define afr_offset_hex 248
#define afr_hwChannel_offset 584
#define afr_hwChannel_offset_hex 248
#define afr_v1_offset 588
#define afr_value1_offset 592
#define afr_value1_offset_hex 250
#define afr_v2_offset 596
#define afr_v2_offset_hex 254
#define afr_value2_offset 600
#define afr_value2_offset_hex 258
#define pedalPositionChannel_offset 604
#define baroSensor_offset 608
#define baroSensor_offset_hex 260
#define baroSensor_valueAt0_offset 608
#define baroSensor_valueAt0_offset_hex 260
#define baroSensor_valueAt5_offset 612
#define baroSensor_valueAt5_offset_hex 264
#define baroSensor_type_offset 616
#define baroSensor_type_offset_hex 268
#define baroSensor_hwChannel_offset 620
#define bc_offset 624
#define bc_offset_hex 270
#define idle_offset 624
#define idle_offset_hex 270
#define idle_solenoidPin_offset 624
#define idle_solenoidPin_offset_hex 270
#define idle_solenoidPinMode_offset 628
#define idle_solenoidPinMode_offset_hex 274
#define idle_solenoidFrequency_offset 632
#define idle_solenoidFrequency_offset_hex 278
#define idle_stepperDirectionPin_offset 636
#define idle_stepperStepPin_offset 640
#define idle_stepperStepPin_offset_hex 280
#define manIdlePosition_offset 644
#define manIdlePosition_offset_hex 284
#define fuelPumpPin_offset 648
#define fuelPumpPin_offset_hex 288
#define fuelPumpPinMode_offset 652
#define injectionPins1_offset 656
#define injectionPins1_offset_hex 290
#define injectionPins2_offset 660
#define injectionPins2_offset_hex 294
#define injectionPins3_offset 664
#define injectionPins3_offset_hex 298
#define injectionPins4_offset 668
#define injectionPins5_offset 672
#define injectionPins6_offset 676
#define injectionPins7_offset 680
#define injectionPins8_offset 684
#define injectionPins9_offset 688
#define injectionPins10_offset 692
#define injectionPins11_offset 696
#define injectionPins12_offset 700
#define injectionPinMode_offset 704
#define ignitionPins1_offset 708
#define ignitionPins2_offset 712
#define ignitionPins3_offset 716
#define ignitionPins4_offset 720
#define ignitionPins5_offset 724
#define ignitionPins6_offset 728
#define ignitionPins7_offset 732
#define ignitionPins8_offset 736
#define ignitionPins9_offset 740
#define ignitionPins10_offset 744
#define ignitionPins11_offset 748
#define ignitionPins12_offset 752
#define ignitionPinMode_offset 756
#define malfunctionIndicatorPin_offset 760
#define malfunctionIndicatorPinMode_offset 764
#define fanPin_offset 768
#define fanPin_offset_hex 300
#define fanPinMode_offset 772
#define fanPinMode_offset_hex 304
#define mapFrequency0Kpa_offset 776
#define mapFrequency0Kpa_offset_hex 308
#define mapFrequency100Kpa_offset 780
#define clutchDownPin_offset 784
#define clutchDownPin_offset_hex 310
#define clutchDownPinMode_offset 788
#define clutchDownPinMode_offset_hex 314
#define alternatorControlPin_offset 792
#define alternatorControlPin_offset_hex 318
#define alternatorControlPinMode_offset 796
#define HD44780_rs_offset 800
#define HD44780_rs_offset_hex 320
#define HD44780_e_offset 804
#define HD44780_e_offset_hex 324
#define HD44780_db4_offset 808
#define HD44780_db4_offset_hex 328
#define HD44780_db5_offset 812
#define HD44780_db6_offset 816
#define HD44780_db6_offset_hex 330
#define HD44780_db7_offset 820
#define HD44780_db7_offset_hex 334
#define gps_rx_pin_offset 824
#define gps_rx_pin_offset_hex 338
#define gps_tx_pin_offset 828
#define triggerSimulatorFrequency_offset 832
#define triggerSimulatorFrequency_offset_hex 340
#define digitalPotentiometerSpiDevice_offset 836
#define digitalPotentiometerSpiDevice_offset_hex 344
#define digitalPotentiometerChipSelect1_offset 840
#define digitalPotentiometerChipSelect1_offset_hex 348
#define digitalPotentiometerChipSelect2_offset 844
#define digitalPotentiometerChipSelect3_offset 848
#define digitalPotentiometerChipSelect3_offset_hex 350
#define digitalPotentiometerChipSelect4_offset 852
#define digitalPotentiometerChipSelect4_offset_hex 354
#define etbDirectionPin1_offset 856
#define etbDirectionPin1_offset_hex 358
#define etbDirectionPin2_offset 860
#define etbControlPin1_offset 864
#define etbControlPin1_offset_hex 360
#define etbControlPin2_offset 868
#define etbControlPin2_offset_hex 364
#define electronicThrottlePin1Mode_offset 872
#define electronicThrottlePin1Mode_offset_hex 368
#define wboHeaterPin_offset 876
#define wboPumpPin_offset 880
#define wboPumpPin_offset_hex 370
#define fuelLevelEmptyTankVoltage_offset 884
#define fuelLevelEmptyTankVoltage_offset_hex 374
#define fuelLevelFullTankVoltage_offset 888
#define fuelLevelFullTankVoltage_offset_hex 378
#define afr_type_offset 892
#define etbDT_offset 896
#define etbDT_offset_hex 380
#define hip9011CsPinMode_offset 900
#define hip9011CsPinMode_offset_hex 384
#define tachOutputPin_offset 904
#define tachOutputPin_offset_hex 388
#define tachOutputPinMode_offset 908
#define triggerInputPins1_offset 912
#define triggerInputPins1_offset_hex 390
#define triggerInputPins2_offset 916
#define triggerInputPins2_offset_hex 394
#define triggerInputPins3_offset 920
#define triggerInputPins3_offset_hex 398
#define mainRelayPin_offset 924
#define idleThreadPeriod_offset 928
#define consoleLoopPeriod_offset 932
#define lcdThreadPeriod_offset 936
#define sdCardCsPin_offset 940
#define generalPeriodicThreadPeriod_offset 944
#define tunerStudioSerialSpeed_offset 948
#define boardTestModeJumperPin_offset 952
#define canDeviceMode_offset 956
#define canTxPin_offset 960
#define canRxPin_offset 964
#define triggerSimulatorPins1_offset 968
#define triggerSimulatorPins2_offset 972
#define triggerSimulatorPins3_offset 976
#define triggerSimulatorPinModes1_offset 980
#define triggerSimulatorPinModes2_offset 984
#define triggerSimulatorPinModes3_offset 988
#define o2heaterPin_offset 992
#define o2heaterPinModeTodO_offset 996
#define is_enabled_spi_1_offset 1000
#define is_enabled_spi_2_offset 1000
#define is_enabled_spi_3_offset 1000
#define isSdCardEnabled_offset 1000
#define isFastAdcEnabled_offset 1000
#define isEngineControlEnabled_offset 1000
#define isHip9011Enabled_offset 1000
#define isVerboseAlternator_offset 1000
#define useSerialPort_offset 1000
#define useStepperIdle_offset 1000
#define enabledStep1Limiter_offset 1000
#define useTpicAdvancedMode_offset 1000
#define useLcdScreen_offset 1000
#define startConsoleInBinaryMode_offset 1000
#define useWarmupPidAfr_offset 1000
#define onOffAlternatorLogic_offset 1000
#define logicAnalyzerPins1_offset 1004
#define logicAnalyzerPins2_offset 1008
#define logicAnalyzerPins3_offset 1012
#define logicAnalyzerPins4_offset 1016
#define logicAnalyzerMode_offset 1020
#define unrealisticRpmThreashold_offset 1024
#define unrealisticRpmThreashold_offset_hex 400
#define mainRelayPinMode_offset 1028
#define mainRelayPinMode_offset_hex 404
#define max31855_cs1_offset 1032
#define max31855_cs1_offset_hex 408
#define max31855_cs2_offset 1036
#define max31855_cs3_offset 1040
#define max31855_cs3_offset_hex 410
#define max31855_cs4_offset 1044
#define max31855_cs4_offset_hex 414
#define max31855_cs5_offset 1048
#define max31855_cs5_offset_hex 418
#define max31855_cs6_offset 1052
#define max31855_cs7_offset 1056
#define max31855_cs7_offset_hex 420
#define max31855_cs8_offset 1060
#define max31855_cs8_offset_hex 424
#define max31855spiDevice_offset 1064
#define max31855spiDevice_offset_hex 428
#define fsioPins1_offset 1068
#define fsioPins2_offset 1072
#define fsioPins2_offset_hex 430
#define fsioPins3_offset 1076
#define fsioPins3_offset_hex 434
#define fsioPins4_offset 1080
#define fsioPins4_offset_hex 438
#define fsioPins5_offset 1084
#define fsioPins6_offset 1088
#define fsioPins6_offset_hex 440
#define fsioPins7_offset 1092
#define fsioPins7_offset_hex 444
#define fsioPins8_offset 1096
#define fsioPins8_offset_hex 448
#define fsioPins9_offset 1100
#define fsioPins10_offset 1104
#define fsioPins10_offset_hex 450
#define fsioPins11_offset 1108
#define fsioPins11_offset_hex 454
#define fsioPins12_offset 1112
#define fsioPins12_offset_hex 458
#define fsioPins13_offset 1116
#define fsioPins14_offset 1120
#define fsioPins14_offset_hex 460
#define fsioPins15_offset 1124
#define fsioPins15_offset_hex 464
#define fsioPins16_offset 1128
#define fsioPins16_offset_hex 468
#define gpioPinModes1_offset 1132
#define gpioPinModes2_offset 1136
#define gpioPinModes2_offset_hex 470
#define gpioPinModes3_offset 1140
#define gpioPinModes3_offset_hex 474
#define gpioPinModes4_offset 1144
#define gpioPinModes4_offset_hex 478
#define gpioPinModes5_offset 1148
#define gpioPinModes6_offset 1152
#define gpioPinModes6_offset_hex 480
#define gpioPinModes7_offset 1156
#define gpioPinModes7_offset_hex 484
#define gpioPinModes8_offset 1160
#define gpioPinModes8_offset_hex 488
#define gpioPinModes9_offset 1164
#define gpioPinModes10_offset 1168
#define gpioPinModes10_offset_hex 490
#define gpioPinModes11_offset 1172
#define gpioPinModes11_offset_hex 494
#define gpioPinModes12_offset 1176
#define gpioPinModes12_offset_hex 498
#define gpioPinModes13_offset 1180
#define gpioPinModes14_offset 1184
#define gpioPinModes15_offset 1188
#define gpioPinModes16_offset 1192
#define joystickPins1_offset 1196
#define joystickPins2_offset 1200
#define joystickPins3_offset 1204
#define joystickPins4_offset 1208
#define joystickPins5_offset 1212
#define triggerErrorPin_offset 1216
#define triggerErrorPinMode_offset 1220
#define acRelayPin_offset 1224
#define acRelayPinMode_offset 1228
#define fsioFrequency1_offset 1232
#define fsioFrequency2_offset 1234
#define fsioFrequency3_offset 1236
#define fsioFrequency4_offset 1238
#define fsioFrequency5_offset 1240
#define fsioFrequency6_offset 1242
#define fsioFrequency7_offset 1244
#define fsioFrequency8_offset 1246
#define fsioFrequency9_offset 1248
#define fsioFrequency10_offset 1250
#define fsioFrequency11_offset 1252
#define fsioFrequency12_offset 1254
#define fsioFrequency13_offset 1256
#define fsioFrequency14_offset 1258
#define fsioFrequency15_offset 1260
#define fsioFrequency16_offset 1262
#define hip9011CsPin_offset 1264
#define hip9011IntHoldPin_offset 1268
#define hip9011IntHoldPinMode_offset 1272
#define fsio_setting1_offset 1276
#define fsio_setting2_offset 1280
#define fsio_setting2_offset_hex 500
#define fsio_setting3_offset 1284
#define fsio_setting3_offset_hex 504
#define fsio_setting4_offset 1288
#define fsio_setting4_offset_hex 508
#define fsio_setting5_offset 1292
#define fsio_setting6_offset 1296
#define fsio_setting6_offset_hex 510
#define fsio_setting7_offset 1300
#define fsio_setting7_offset_hex 514
#define fsio_setting8_offset 1304
#define fsio_setting8_offset_hex 518
#define fsio_setting9_offset 1308
#define fsio_setting10_offset 1312
#define fsio_setting10_offset_hex 520
#define fsio_setting11_offset 1316
#define fsio_setting11_offset_hex 524
#define fsio_setting12_offset 1320
#define fsio_setting12_offset_hex 528
#define fsio_setting13_offset 1324
#define fsio_setting14_offset 1328
#define fsio_setting14_offset_hex 530
#define fsio_setting15_offset 1332
#define fsio_setting15_offset_hex 534
#define fsio_setting16_offset 1336
#define fsio_setting16_offset_hex 538
#define spi1mosiPin_offset 1340
#define spi1misoPin_offset 1344
#define spi1misoPin_offset_hex 540
#define spi1sckPin_offset 1348
#define spi1sckPin_offset_hex 544
#define spi2mosiPin_offset 1352
#define spi2mosiPin_offset_hex 548
#define spi2misoPin_offset 1356
#define spi2sckPin_offset 1360
#define spi2sckPin_offset_hex 550
#define spi3mosiPin_offset 1364
#define spi3mosiPin_offset_hex 554
#define spi3misoPin_offset 1368
#define spi3misoPin_offset_hex 558
#define spi3sckPin_offset 1372
#define hip9011Gain_offset 1376
#define hip9011Gain_offset_hex 560
#define joystickCenterPin_offset 1380
#define joystickCenterPin_offset_hex 564
#define joystickAPin_offset 1384
#define joystickAPin_offset_hex 568
#define joystickBPin_offset 1388
#define joystickCPin_offset 1392
#define joystickCPin_offset_hex 570
#define joystickDPin_offset 1396
#define joystickDPin_offset_hex 574
#define sensorChartMode_offset 1400
#define sensorChartMode_offset_hex 578
#define mafSensorType_offset 1404
#define vehicleSpeedSensorInputPin_offset 1408
#define vehicleSpeedSensorInputPin_offset_hex 580
#define clutchUpPin_offset 1412
#define clutchUpPin_offset_hex 584
#define clutchUpPinMode_offset 1416
#define clutchUpPinMode_offset_hex 588
#define fsioDigitalInputs1_offset 1420
#define fsioDigitalInputs2_offset 1424
#define fsioDigitalInputs2_offset_hex 590
#define fsioDigitalInputs3_offset 1428
#define fsioDigitalInputs3_offset_hex 594
#define fsioDigitalInputs4_offset 1432
#define fsioDigitalInputs4_offset_hex 598
#define fsioDigitalInputs5_offset 1436
#define fsioDigitalInputs6_offset 1440
#define fsioDigitalInputs7_offset 1444
#define fsioDigitalInputs8_offset 1448
#define fsioDigitalInputs9_offset 1452
#define fsioDigitalInputs10_offset 1456
#define fsioDigitalInputs11_offset 1460
#define fsioDigitalInputs12_offset 1464
#define fsioDigitalInputs13_offset 1468
#define fsioDigitalInputs14_offset 1472
#define fsioDigitalInputs15_offset 1476
#define fsioDigitalInputs16_offset 1480
#define frequencyReportingMapInputPin_offset 1484
#define hasMapSensor_offset 1488
#define hasIatSensor_offset 1488
#define hasBaroSensor_offset 1488
#define hasAfrSensor_offset 1488
#define useConstantDwellDuringCranking_offset 1488
#define isEngineChartEnabled_offset 1488
#define isCanEnabled_offset 1488
#define hasCltSensor_offset 1488
#define canReadEnabled_offset 1488
#define canWriteEnabled_offset 1488
#define hasVehicleSpeedSensor_offset 1488
#define isJoystickEnabled_offset 1488
#define isGpsEnabled_offset 1488
#define isAlternatorControlEnabled_offset 1488
#define hasMafSensor_offset 1488
#define hasTpsSensor_offset 1488
#define cutFuelOnHardLimit_offset 1488
#define cutSparkOnHardLimit_offset 1488
#define step1fuelCutEnable_offset 1488
#define step1SparkCutEnable_offset 1488
#define hasFrequencyReportingMapSensor_offset 1488
#define hipOutputChannel_offset 1492
#define idleMode_offset 1496
#define isInjectionEnabled_offset 1500
#define isIgnitionEnabled_offset 1500
#define isCylinderCleanupEnabled_offset 1500
#define secondTriggerChannelEnabled_offset 1500
#define needSecondTriggerInputDeprecated_offset 1500
#define isMapAveragingEnabled_offset 1500
#define isMilEnabled_offset 1500
#define isFuelPumpEnabled_offset 1500
#define isTunerStudioEnabled_offset 1500
#define isWaveAnalyzerEnabled_offset 1500
#define isIdleThreadEnabled_offset 1500
#define isPrintTriggerSynchDetails_offset 1500
#define isManualSpinningMode_offset 1500
#define twoWireBatchInjection_offset 1500
#define useOnlyRisingEdgeForTrigger_offset 1500
#define twoWireBatchIgnition_offset 1500
#define engineChartSize_offset 1504
#define targetIdleRpm_offset 1508
#define acSwitchAdc_offset 1512
#define ignMathCalculateAtIndex_offset 1516
#define acCutoffLowRpm_offset 1520
#define acCutoffHighRpm_offset 1522
#define acIdleRpmBump_offset 1524
#define unusedShort_offset 1526
#define vRefAdcChannel_offset 1528
#define knockDetectionWindowStart_offset 1532
#define knockDetectionWindowEnd_offset 1536
#define knockDetectionWindowEnd_offset_hex 600
#define idleStepperReactionTime_offset 1540
#define idleStepperReactionTime_offset_hex 604
#define knockVThreshold_offset 1544
#define knockVThreshold_offset_hex 608
#define fsioInputModes1_offset 1548
#define fsioInputModes2_offset 1552
#define fsioInputModes2_offset_hex 610
#define fsioInputModes3_offset 1556
#define fsioInputModes3_offset_hex 614
#define fsioInputModes4_offset 1560
#define fsioInputModes4_offset_hex 618
#define fsioInputModes5_offset 1564
#define fsioInputModes6_offset 1568
#define fsioInputModes6_offset_hex 620
#define fsioInputModes7_offset 1572
#define fsioInputModes7_offset_hex 624
#define fsioInputModes8_offset 1576
#define fsioInputModes8_offset_hex 628
#define fsioInputModes9_offset 1580
#define fsioInputModes10_offset 1584
#define fsioInputModes10_offset_hex 630
#define fsioInputModes11_offset 1588
#define fsioInputModes11_offset_hex 634
#define fsioInputModes12_offset 1592
#define fsioInputModes12_offset_hex 638
#define fsioInputModes13_offset 1596
#define fsioInputModes14_offset 1600
#define fsioInputModes14_offset_hex 640
#define fsioInputModes15_offset 1604
#define fsioInputModes15_offset_hex 644
#define fsioInputModes16_offset 1608
#define fsioInputModes16_offset_hex 648
#define externalKnockSenseAdc_offset 1612
#define unsed2342342_offset 1616
#define unsed2342342_offset_hex 650
#define idleStepperTotalSteps_offset 1628
#define stepperEnablePin_offset 1632
#define stepperEnablePin_offset_hex 660
#define noAccelAfterHardLimitPeriodSecs_offset 1636
#define noAccelAfterHardLimitPeriodSecs_offset_hex 664
#define mapAveragingSchedulingAtIndex_offset 1640
#define mapAveragingSchedulingAtIndex_offset_hex 668
#define baroCorrPressureBins_offset 1644
#define baroCorrRpmBins_offset 1660
#define baroCorrTable_offset 1676
#define spi2SckMode_offset 1740
#define spi2MosiMode_offset 1744
#define spi2MisoMode_offset 1748
#define crankingTpsCoef_offset 1752
#define crankingTpsBins_offset 1784
#define tachPulseDuractionMs_offset 1816
#define tachPulseDuractionMs_offset_hex 718
#define tachPulseTriggerIndex_offset 1820
#define suckedOffCoef_offset 1824
#define suckedOffCoef_offset_hex 720
#define unused71_offset 1828
#define unused71_offset_hex 724
#define addedToWallCoef_offset 1856
#define addedToWallCoef_offset_hex 740
#define unused72_offset 1860
#define unused72_offset_hex 744
#define mapErrorDetectionTooLow_offset 1888
#define mapErrorDetectionTooLow_offset_hex 760
#define mapErrorDetectionTooHigh_offset 1892
#define mapErrorDetectionTooHigh_offset_hex 764
#define step1RpmWindow_offset 1896
#define step1RpmWindow_offset_hex 768
#define idleRpmPid_offset 1900
#define idleRpmPid_pFactor_offset 1900
#define idleRpmPid_iFactor_offset 1904
#define idleRpmPid_iFactor_offset_hex 770
#define idleRpmPid_dFactor_offset 1908
#define idleRpmPid_dFactor_offset_hex 774
#define idleRpmPid_offset_offset 1912
#define idleRpmPid_offset_offset_hex 778
#define idleDT_offset 1916
#define idleControl_offset 1920
#define idleControl_offset_hex 780
#define communicationPin_offset 1924
#define communicationPin_offset_hex 784
#define runningPin_offset 1928
#define runningPin_offset_hex 788
#define binarySerialTxPin_offset 1932
#define binarySerialRxPin_offset 1936
#define binarySerialRxPin_offset_hex 790
#define consoleSerialTxPin_offset 1940
#define consoleSerialTxPin_offset_hex 794
#define consoleSerialRxPin_offset 1944
#define consoleSerialRxPin_offset_hex 798
#define knockNoise_offset 1948
#define knockNoiseRpmBins_offset 1980
#define etb_offset 2012
#define etb_pFactor_offset 2012
#define etb_iFactor_offset 2016
#define etb_dFactor_offset 2020
#define etb_offset_offset 2024
#define cltIdleRpmBins_offset 2028
#define cltIdleRpm_offset 2092
#define targetVBatt_offset 2156
#define alternatorOffAboveTps_offset 2160
#define alternatorOffAboveTps_offset_hex 870
#define alternatorDT_offset 2164
#define alternatorDT_offset_hex 874
#define alternatorControl_offset 2168
#define alternatorControl_offset_hex 878
#define alternatorControl_pFactor_offset 2168
#define alternatorControl_pFactor_offset_hex 878
#define alternatorControl_iFactor_offset 2172
#define alternatorControl_dFactor_offset 2176
#define alternatorControl_dFactor_offset_hex 880
#define alternatorControl_offset_offset 2180
#define alternatorControl_offset_offset_hex 884
#define tpsAccelLength_offset 2184
#define tpsAccelLength_offset_hex 888
#define tpsAccelEnrichmentThreshold_offset 2188
#define tpsAccelEnrichmentMultiplier_offset 2192
#define tpsAccelEnrichmentMultiplier_offset_hex 890
#define engineLoadAccelLength_offset 2196
#define engineLoadAccelLength_offset_hex 894
#define engineLoadDecelEnleanmentThreshold_offset 2200
#define engineLoadDecelEnleanmentThreshold_offset_hex 898
#define engineLoadDecelEnleanmentMultiplier_offset 2204
#define engineLoadAccelEnrichmentThreshold_offset 2208
#define engineLoadAccelEnrichmentMultiplier_offset 2212
#define fatalErrorPin_offset 2216
#define warninigPin_offset 2220
#define configResetPin_offset 2224
#define uartConsoleSerialSpeed_offset 2228
#define tpsDecelEnleanmentThreshold_offset 2232
#define tpsDecelEnleanmentMultiplier_offset 2236
#define slowAdcAlpha_offset 2240
#define debugMode_offset 2244
#define warmupAfrPid_offset 2248
#define warmupAfrPid_pFactor_offset 2248
#define warmupAfrPid_iFactor_offset 2252
#define warmupAfrPid_dFactor_offset 2256
#define warmupAfrPid_offset_offset 2260
#define warmupTargetAfrBins_offset 2264
#define warmupTargetAfr_offset 2280
#define warmupAfrThreshold_offset 2296
#define unused_offset 2300
#define le_formulas1_offset 3016
#define le_formulas2_offset 3216
#define le_formulas3_offset 3416
#define le_formulas4_offset 3616
#define le_formulas5_offset 3816
#define le_formulas6_offset 4016
#define le_formulas7_offset 4216
#define le_formulas7_offset_hex 1078
#define le_formulas8_offset 4416
#define le_formulas8_offset_hex 1140
#define le_formulas9_offset 4616
#define le_formulas9_offset_hex 1208
#define le_formulas10_offset 4816
#define le_formulas11_offset 5016
#define le_formulas11_offset_hex 1398
#define le_formulas12_offset 5216
#define le_formulas12_offset_hex 1460
#define le_formulas13_offset 5416
#define le_formulas13_offset_hex 1528
#define le_formulas14_offset 5616
#define le_formulas15_offset 5816
#define le_formulas16_offset 6016
#define le_formulas16_offset_hex 1780
#define timingMultiplier_offset 6216
#define timingMultiplier_offset_hex 1848
#define timingAdditive_offset 6416
#define timingAdditive_offset_hex 1910
#define cltFuelCorrBins_offset 6616
#define cltFuelCorr_offset 6680
#define iatFuelCorrBins_offset 6744
#define iatFuelCorr_offset 6808
#define crankingFuelCoef_offset 6872
#define crankingFuelBins_offset 6904
#define crankingCycleCoef_offset 6936
#define crankingCycleBins_offset 6968
#define cltIdleCorrBins_offset 7000
#define cltIdleCorr_offset 7064
#define mafDecoding_offset 7128
#define mafDecodingBins_offset 8152
#define ignitionIatCorrTable_offset 9176
#define ignitionIatCorrLoadBins_offset 10200
#define ignitionIatCorrRpmBins_offset 10264
#define ignitionIatCorrRpmBins_offset_hex 2818
#define injectionPhase_offset 10328
#define injectionPhase_offset_hex 2858
#define injPhaseLoadBins_offset 11352
#define injPhaseRpmBins_offset 11416
#define fuelTable_offset 11480
#define fuelLoadBins_offset 12504
#define fuelRpmBins_offset 12568
#define fuelRpmBins_offset_hex 3118
#define ignitionTable_offset 12632
#define ignitionTable_offset_hex 3158
#define ignitionLoadBins_offset 13656
#define ignitionLoadBins_offset_hex 3558
#define ignitionRpmBins_offset 13720
#define ignitionRpmBins_offset_hex 3598
#define veTable_offset 13784
#define veLoadBins_offset 14808
#define veRpmBins_offset 14872
#define afrTable_offset 14936
#define afrLoadBins_offset 15960
#define afrRpmBins_offset 16024
#define TOTAL_CONFIG_SIZE 16088
