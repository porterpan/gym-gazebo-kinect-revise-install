
"use strict";

let DigitalInputEvent = require('./DigitalInputEvent.js');
let RobotStateEvent = require('./RobotStateEvent.js');
let Sound = require('./Sound.js');
let ExternalPower = require('./ExternalPower.js');
let KeyboardInput = require('./KeyboardInput.js');
let CliffEvent = require('./CliffEvent.js');
let WheelDropEvent = require('./WheelDropEvent.js');
let VersionInfo = require('./VersionInfo.js');
let ControllerInfo = require('./ControllerInfo.js');
let ScanAngle = require('./ScanAngle.js');
let Led = require('./Led.js');
let SensorState = require('./SensorState.js');
let ButtonEvent = require('./ButtonEvent.js');
let DockInfraRed = require('./DockInfraRed.js');
let PowerSystemEvent = require('./PowerSystemEvent.js');
let MotorPower = require('./MotorPower.js');
let BumperEvent = require('./BumperEvent.js');
let DigitalOutput = require('./DigitalOutput.js');
let AutoDockingResult = require('./AutoDockingResult.js');
let AutoDockingGoal = require('./AutoDockingGoal.js');
let AutoDockingActionGoal = require('./AutoDockingActionGoal.js');
let AutoDockingFeedback = require('./AutoDockingFeedback.js');
let AutoDockingActionResult = require('./AutoDockingActionResult.js');
let AutoDockingAction = require('./AutoDockingAction.js');
let AutoDockingActionFeedback = require('./AutoDockingActionFeedback.js');

module.exports = {
  DigitalInputEvent: DigitalInputEvent,
  RobotStateEvent: RobotStateEvent,
  Sound: Sound,
  ExternalPower: ExternalPower,
  KeyboardInput: KeyboardInput,
  CliffEvent: CliffEvent,
  WheelDropEvent: WheelDropEvent,
  VersionInfo: VersionInfo,
  ControllerInfo: ControllerInfo,
  ScanAngle: ScanAngle,
  Led: Led,
  SensorState: SensorState,
  ButtonEvent: ButtonEvent,
  DockInfraRed: DockInfraRed,
  PowerSystemEvent: PowerSystemEvent,
  MotorPower: MotorPower,
  BumperEvent: BumperEvent,
  DigitalOutput: DigitalOutput,
  AutoDockingResult: AutoDockingResult,
  AutoDockingGoal: AutoDockingGoal,
  AutoDockingActionGoal: AutoDockingActionGoal,
  AutoDockingFeedback: AutoDockingFeedback,
  AutoDockingActionResult: AutoDockingActionResult,
  AutoDockingAction: AutoDockingAction,
  AutoDockingActionFeedback: AutoDockingActionFeedback,
};
