# Install script for directory: /home/michele/catkinect/src/intera_common/intera_core_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/michele/catkinect/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/intera_core_msgs/msg" TYPE FILE FILES
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/AnalogIOState.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/AnalogIOStates.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/AnalogOutputCommand.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/RobotAssemblyState.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/CameraControl.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/CameraSettings.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/CollisionAvoidanceState.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/CollisionDetectionState.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/DigitalIOState.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/DigitalIOStates.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/DigitalOutputCommand.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/EndpointNamesArray.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/EndpointState.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/EndpointStates.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/HeadPanCommand.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/HeadState.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/HomingCommand.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/HomingState.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/InteractionControlCommand.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/InteractionControlState.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/IOComponentCommand.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/IOComponentConfiguration.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/IOComponentStatus.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/IODataStatus.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/IODeviceConfiguration.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/IODeviceStatus.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/IONodeConfiguration.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/IONodeStatus.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/IOStatus.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/JointCommand.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/JointLimits.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/NavigatorState.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/NavigatorStates.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/SEAJointState.msg"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/msg/URDFConfiguration.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/intera_core_msgs/srv" TYPE FILE FILES
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/srv/IOComponentCommandSrv.srv"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/srv/SolvePositionFK.srv"
    "/home/michele/catkinect/src/intera_common/intera_core_msgs/srv/SolvePositionIK.srv"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/intera_core_msgs/action" TYPE FILE FILES "/home/michele/catkinect/src/intera_common/intera_core_msgs/action/CalibrationCommand.action")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/intera_core_msgs/msg" TYPE FILE FILES
    "/home/michele/catkinect/devel/share/intera_core_msgs/msg/CalibrationCommandAction.msg"
    "/home/michele/catkinect/devel/share/intera_core_msgs/msg/CalibrationCommandActionGoal.msg"
    "/home/michele/catkinect/devel/share/intera_core_msgs/msg/CalibrationCommandActionResult.msg"
    "/home/michele/catkinect/devel/share/intera_core_msgs/msg/CalibrationCommandActionFeedback.msg"
    "/home/michele/catkinect/devel/share/intera_core_msgs/msg/CalibrationCommandGoal.msg"
    "/home/michele/catkinect/devel/share/intera_core_msgs/msg/CalibrationCommandResult.msg"
    "/home/michele/catkinect/devel/share/intera_core_msgs/msg/CalibrationCommandFeedback.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/intera_core_msgs/cmake" TYPE FILE FILES "/home/michele/catkinect/build/intera_common/intera_core_msgs/catkin_generated/installspace/intera_core_msgs-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/michele/catkinect/devel/include/intera_core_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/michele/catkinect/devel/share/roseus/ros/intera_core_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/michele/catkinect/devel/share/common-lisp/ros/intera_core_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/michele/catkinect/devel/share/gennodejs/ros/intera_core_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/michele/catkinect/devel/lib/python2.7/dist-packages/intera_core_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/michele/catkinect/devel/lib/python2.7/dist-packages/intera_core_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/michele/catkinect/build/intera_common/intera_core_msgs/catkin_generated/installspace/intera_core_msgs.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/intera_core_msgs/cmake" TYPE FILE FILES "/home/michele/catkinect/build/intera_common/intera_core_msgs/catkin_generated/installspace/intera_core_msgs-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/intera_core_msgs/cmake" TYPE FILE FILES
    "/home/michele/catkinect/build/intera_common/intera_core_msgs/catkin_generated/installspace/intera_core_msgsConfig.cmake"
    "/home/michele/catkinect/build/intera_common/intera_core_msgs/catkin_generated/installspace/intera_core_msgsConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/intera_core_msgs" TYPE FILE FILES "/home/michele/catkinect/src/intera_common/intera_core_msgs/package.xml")
endif()

