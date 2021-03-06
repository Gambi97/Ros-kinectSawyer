# Install script for directory: /home/michele/catkinect/src/intera_common/intera_motion_msgs

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/intera_motion_msgs/msg" TYPE FILE FILES
    "/home/michele/catkinect/src/intera_common/intera_motion_msgs/msg/EndpointTrackingError.msg"
    "/home/michele/catkinect/src/intera_common/intera_motion_msgs/msg/InterpolatedPath.msg"
    "/home/michele/catkinect/src/intera_common/intera_motion_msgs/msg/JointTrackingError.msg"
    "/home/michele/catkinect/src/intera_common/intera_motion_msgs/msg/MotionStatus.msg"
    "/home/michele/catkinect/src/intera_common/intera_motion_msgs/msg/TrackingOptions.msg"
    "/home/michele/catkinect/src/intera_common/intera_motion_msgs/msg/Trajectory.msg"
    "/home/michele/catkinect/src/intera_common/intera_motion_msgs/msg/TrajectoryAnalysis.msg"
    "/home/michele/catkinect/src/intera_common/intera_motion_msgs/msg/TrajectoryOptions.msg"
    "/home/michele/catkinect/src/intera_common/intera_motion_msgs/msg/Waypoint.msg"
    "/home/michele/catkinect/src/intera_common/intera_motion_msgs/msg/WaypointOptions.msg"
    "/home/michele/catkinect/src/intera_common/intera_motion_msgs/msg/WaypointSimple.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/intera_motion_msgs/action" TYPE FILE FILES "/home/michele/catkinect/src/intera_common/intera_motion_msgs/action/MotionCommand.action")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/intera_motion_msgs/msg" TYPE FILE FILES
    "/home/michele/catkinect/devel/share/intera_motion_msgs/msg/MotionCommandAction.msg"
    "/home/michele/catkinect/devel/share/intera_motion_msgs/msg/MotionCommandActionGoal.msg"
    "/home/michele/catkinect/devel/share/intera_motion_msgs/msg/MotionCommandActionResult.msg"
    "/home/michele/catkinect/devel/share/intera_motion_msgs/msg/MotionCommandActionFeedback.msg"
    "/home/michele/catkinect/devel/share/intera_motion_msgs/msg/MotionCommandGoal.msg"
    "/home/michele/catkinect/devel/share/intera_motion_msgs/msg/MotionCommandResult.msg"
    "/home/michele/catkinect/devel/share/intera_motion_msgs/msg/MotionCommandFeedback.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/intera_motion_msgs/cmake" TYPE FILE FILES "/home/michele/catkinect/build/intera_common/intera_motion_msgs/catkin_generated/installspace/intera_motion_msgs-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/michele/catkinect/devel/include/intera_motion_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/michele/catkinect/devel/share/roseus/ros/intera_motion_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/michele/catkinect/devel/share/common-lisp/ros/intera_motion_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/michele/catkinect/devel/share/gennodejs/ros/intera_motion_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/michele/catkinect/devel/lib/python2.7/dist-packages/intera_motion_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/michele/catkinect/devel/lib/python2.7/dist-packages/intera_motion_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/michele/catkinect/build/intera_common/intera_motion_msgs/catkin_generated/installspace/intera_motion_msgs.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/intera_motion_msgs/cmake" TYPE FILE FILES "/home/michele/catkinect/build/intera_common/intera_motion_msgs/catkin_generated/installspace/intera_motion_msgs-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/intera_motion_msgs/cmake" TYPE FILE FILES
    "/home/michele/catkinect/build/intera_common/intera_motion_msgs/catkin_generated/installspace/intera_motion_msgsConfig.cmake"
    "/home/michele/catkinect/build/intera_common/intera_motion_msgs/catkin_generated/installspace/intera_motion_msgsConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/intera_motion_msgs" TYPE FILE FILES "/home/michele/catkinect/src/intera_common/intera_motion_msgs/package.xml")
endif()

