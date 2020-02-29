
"use strict";

let HomingCommand = require('./HomingCommand.js');
let IOComponentStatus = require('./IOComponentStatus.js');
let DigitalIOState = require('./DigitalIOState.js');
let JointLimits = require('./JointLimits.js');
let RobotAssemblyState = require('./RobotAssemblyState.js');
let JointCommand = require('./JointCommand.js');
let IODeviceStatus = require('./IODeviceStatus.js');
let IONodeConfiguration = require('./IONodeConfiguration.js');
let NavigatorStates = require('./NavigatorStates.js');
let CameraSettings = require('./CameraSettings.js');
let NavigatorState = require('./NavigatorState.js');
let IONodeStatus = require('./IONodeStatus.js');
let IOStatus = require('./IOStatus.js');
let SEAJointState = require('./SEAJointState.js');
let AnalogOutputCommand = require('./AnalogOutputCommand.js');
let AnalogIOState = require('./AnalogIOState.js');
let DigitalOutputCommand = require('./DigitalOutputCommand.js');
let AnalogIOStates = require('./AnalogIOStates.js');
let URDFConfiguration = require('./URDFConfiguration.js');
let HeadState = require('./HeadState.js');
let DigitalIOStates = require('./DigitalIOStates.js');
let EndpointState = require('./EndpointState.js');
let IOComponentConfiguration = require('./IOComponentConfiguration.js');
let CameraControl = require('./CameraControl.js');
let EndpointNamesArray = require('./EndpointNamesArray.js');
let CollisionAvoidanceState = require('./CollisionAvoidanceState.js');
let HomingState = require('./HomingState.js');
let IODataStatus = require('./IODataStatus.js');
let IODeviceConfiguration = require('./IODeviceConfiguration.js');
let HeadPanCommand = require('./HeadPanCommand.js');
let CollisionDetectionState = require('./CollisionDetectionState.js');
let IOComponentCommand = require('./IOComponentCommand.js');
let EndpointStates = require('./EndpointStates.js');
let InteractionControlCommand = require('./InteractionControlCommand.js');
let InteractionControlState = require('./InteractionControlState.js');
let CalibrationCommandResult = require('./CalibrationCommandResult.js');
let CalibrationCommandActionGoal = require('./CalibrationCommandActionGoal.js');
let CalibrationCommandActionFeedback = require('./CalibrationCommandActionFeedback.js');
let CalibrationCommandActionResult = require('./CalibrationCommandActionResult.js');
let CalibrationCommandAction = require('./CalibrationCommandAction.js');
let CalibrationCommandFeedback = require('./CalibrationCommandFeedback.js');
let CalibrationCommandGoal = require('./CalibrationCommandGoal.js');

module.exports = {
  HomingCommand: HomingCommand,
  IOComponentStatus: IOComponentStatus,
  DigitalIOState: DigitalIOState,
  JointLimits: JointLimits,
  RobotAssemblyState: RobotAssemblyState,
  JointCommand: JointCommand,
  IODeviceStatus: IODeviceStatus,
  IONodeConfiguration: IONodeConfiguration,
  NavigatorStates: NavigatorStates,
  CameraSettings: CameraSettings,
  NavigatorState: NavigatorState,
  IONodeStatus: IONodeStatus,
  IOStatus: IOStatus,
  SEAJointState: SEAJointState,
  AnalogOutputCommand: AnalogOutputCommand,
  AnalogIOState: AnalogIOState,
  DigitalOutputCommand: DigitalOutputCommand,
  AnalogIOStates: AnalogIOStates,
  URDFConfiguration: URDFConfiguration,
  HeadState: HeadState,
  DigitalIOStates: DigitalIOStates,
  EndpointState: EndpointState,
  IOComponentConfiguration: IOComponentConfiguration,
  CameraControl: CameraControl,
  EndpointNamesArray: EndpointNamesArray,
  CollisionAvoidanceState: CollisionAvoidanceState,
  HomingState: HomingState,
  IODataStatus: IODataStatus,
  IODeviceConfiguration: IODeviceConfiguration,
  HeadPanCommand: HeadPanCommand,
  CollisionDetectionState: CollisionDetectionState,
  IOComponentCommand: IOComponentCommand,
  EndpointStates: EndpointStates,
  InteractionControlCommand: InteractionControlCommand,
  InteractionControlState: InteractionControlState,
  CalibrationCommandResult: CalibrationCommandResult,
  CalibrationCommandActionGoal: CalibrationCommandActionGoal,
  CalibrationCommandActionFeedback: CalibrationCommandActionFeedback,
  CalibrationCommandActionResult: CalibrationCommandActionResult,
  CalibrationCommandAction: CalibrationCommandAction,
  CalibrationCommandFeedback: CalibrationCommandFeedback,
  CalibrationCommandGoal: CalibrationCommandGoal,
};
