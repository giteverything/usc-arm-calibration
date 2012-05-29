# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build

# Utility rule file for ROSBUILD_genmsg_py.

# Include the progress variables for this target.
include CMakeFiles/ROSBUILD_genmsg_py.dir/progress.make

CMakeFiles/ROSBUILD_genmsg_py: ../src/arm_msgs/msg/__init__.py

../src/arm_msgs/msg/__init__.py: ../src/arm_msgs/msg/_InertialParameters.py
../src/arm_msgs/msg/__init__.py: ../src/arm_msgs/msg/_StatusReport.py
../src/arm_msgs/msg/__init__.py: ../src/arm_msgs/msg/_Task.py
../src/arm_msgs/msg/__init__.py: ../src/arm_msgs/msg/_Object.py
../src/arm_msgs/msg/__init__.py: ../src/arm_msgs/msg/_Tasks.py
../src/arm_msgs/msg/__init__.py: ../src/arm_msgs/msg/_Objects.py
../src/arm_msgs/msg/__init__.py: ../src/arm_msgs/msg/_BoundingBox.py
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/arm_msgs/msg/__init__.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py --initpy /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/msg/InertialParameters.msg /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/msg/StatusReport.msg /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/msg/Task.msg /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/msg/Object.msg /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/msg/Tasks.msg /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/msg/Objects.msg /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/msg/BoundingBox.msg

../src/arm_msgs/msg/_InertialParameters.py: ../msg/InertialParameters.msg
../src/arm_msgs/msg/_InertialParameters.py: /opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py
../src/arm_msgs/msg/_InertialParameters.py: /opt/ros/fuerte/share/roslib/bin/gendeps
../src/arm_msgs/msg/_InertialParameters.py: /opt/ros/fuerte/share/geometry_msgs/msg/Vector3.msg
../src/arm_msgs/msg/_InertialParameters.py: ../manifest.xml
../src/arm_msgs/msg/_InertialParameters.py: /opt/ros/fuerte/share/roslang/manifest.xml
../src/arm_msgs/msg/_InertialParameters.py: /opt/ros/fuerte/share/roscpp/manifest.xml
../src/arm_msgs/msg/_InertialParameters.py: /opt/ros/fuerte/share/geometry_msgs/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/arm_msgs/msg/_InertialParameters.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py --noinitpy /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/msg/InertialParameters.msg

../src/arm_msgs/msg/_StatusReport.py: ../msg/StatusReport.msg
../src/arm_msgs/msg/_StatusReport.py: /opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py
../src/arm_msgs/msg/_StatusReport.py: /opt/ros/fuerte/share/roslib/bin/gendeps
../src/arm_msgs/msg/_StatusReport.py: ../manifest.xml
../src/arm_msgs/msg/_StatusReport.py: /opt/ros/fuerte/share/roslang/manifest.xml
../src/arm_msgs/msg/_StatusReport.py: /opt/ros/fuerte/share/roscpp/manifest.xml
../src/arm_msgs/msg/_StatusReport.py: /opt/ros/fuerte/share/geometry_msgs/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/arm_msgs/msg/_StatusReport.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py --noinitpy /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/msg/StatusReport.msg

../src/arm_msgs/msg/_Task.py: ../msg/Task.msg
../src/arm_msgs/msg/_Task.py: /opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py
../src/arm_msgs/msg/_Task.py: /opt/ros/fuerte/share/roslib/bin/gendeps
../src/arm_msgs/msg/_Task.py: ../manifest.xml
../src/arm_msgs/msg/_Task.py: /opt/ros/fuerte/share/roslang/manifest.xml
../src/arm_msgs/msg/_Task.py: /opt/ros/fuerte/share/roscpp/manifest.xml
../src/arm_msgs/msg/_Task.py: /opt/ros/fuerte/share/geometry_msgs/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/arm_msgs/msg/_Task.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py --noinitpy /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/msg/Task.msg

../src/arm_msgs/msg/_Object.py: ../msg/Object.msg
../src/arm_msgs/msg/_Object.py: /opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py
../src/arm_msgs/msg/_Object.py: /opt/ros/fuerte/share/roslib/bin/gendeps
../src/arm_msgs/msg/_Object.py: /opt/ros/fuerte/share/geometry_msgs/msg/PoseWithCovariance.msg
../src/arm_msgs/msg/_Object.py: /opt/ros/fuerte/share/geometry_msgs/msg/Quaternion.msg
../src/arm_msgs/msg/_Object.py: /opt/ros/fuerte/share/geometry_msgs/msg/PoseWithCovarianceStamped.msg
../src/arm_msgs/msg/_Object.py: /opt/ros/fuerte/share/std_msgs/msg/Header.msg
../src/arm_msgs/msg/_Object.py: /opt/ros/fuerte/share/geometry_msgs/msg/Pose.msg
../src/arm_msgs/msg/_Object.py: /opt/ros/fuerte/share/geometry_msgs/msg/Point.msg
../src/arm_msgs/msg/_Object.py: ../manifest.xml
../src/arm_msgs/msg/_Object.py: /opt/ros/fuerte/share/roslang/manifest.xml
../src/arm_msgs/msg/_Object.py: /opt/ros/fuerte/share/roscpp/manifest.xml
../src/arm_msgs/msg/_Object.py: /opt/ros/fuerte/share/geometry_msgs/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/arm_msgs/msg/_Object.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py --noinitpy /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/msg/Object.msg

../src/arm_msgs/msg/_Tasks.py: ../msg/Tasks.msg
../src/arm_msgs/msg/_Tasks.py: /opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py
../src/arm_msgs/msg/_Tasks.py: /opt/ros/fuerte/share/roslib/bin/gendeps
../src/arm_msgs/msg/_Tasks.py: ../msg/Task.msg
../src/arm_msgs/msg/_Tasks.py: ../manifest.xml
../src/arm_msgs/msg/_Tasks.py: /opt/ros/fuerte/share/roslang/manifest.xml
../src/arm_msgs/msg/_Tasks.py: /opt/ros/fuerte/share/roscpp/manifest.xml
../src/arm_msgs/msg/_Tasks.py: /opt/ros/fuerte/share/geometry_msgs/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/arm_msgs/msg/_Tasks.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py --noinitpy /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/msg/Tasks.msg

../src/arm_msgs/msg/_Objects.py: ../msg/Objects.msg
../src/arm_msgs/msg/_Objects.py: /opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py
../src/arm_msgs/msg/_Objects.py: /opt/ros/fuerte/share/roslib/bin/gendeps
../src/arm_msgs/msg/_Objects.py: /opt/ros/fuerte/share/geometry_msgs/msg/PoseWithCovariance.msg
../src/arm_msgs/msg/_Objects.py: ../msg/Object.msg
../src/arm_msgs/msg/_Objects.py: /opt/ros/fuerte/share/geometry_msgs/msg/PoseWithCovarianceStamped.msg
../src/arm_msgs/msg/_Objects.py: /opt/ros/fuerte/share/std_msgs/msg/Header.msg
../src/arm_msgs/msg/_Objects.py: /opt/ros/fuerte/share/geometry_msgs/msg/Pose.msg
../src/arm_msgs/msg/_Objects.py: /opt/ros/fuerte/share/geometry_msgs/msg/Point.msg
../src/arm_msgs/msg/_Objects.py: /opt/ros/fuerte/share/geometry_msgs/msg/Quaternion.msg
../src/arm_msgs/msg/_Objects.py: ../manifest.xml
../src/arm_msgs/msg/_Objects.py: /opt/ros/fuerte/share/roslang/manifest.xml
../src/arm_msgs/msg/_Objects.py: /opt/ros/fuerte/share/roscpp/manifest.xml
../src/arm_msgs/msg/_Objects.py: /opt/ros/fuerte/share/geometry_msgs/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/arm_msgs/msg/_Objects.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py --noinitpy /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/msg/Objects.msg

../src/arm_msgs/msg/_BoundingBox.py: ../msg/BoundingBox.msg
../src/arm_msgs/msg/_BoundingBox.py: /opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py
../src/arm_msgs/msg/_BoundingBox.py: /opt/ros/fuerte/share/roslib/bin/gendeps
../src/arm_msgs/msg/_BoundingBox.py: /opt/ros/fuerte/share/geometry_msgs/msg/Point.msg
../src/arm_msgs/msg/_BoundingBox.py: ../manifest.xml
../src/arm_msgs/msg/_BoundingBox.py: /opt/ros/fuerte/share/roslang/manifest.xml
../src/arm_msgs/msg/_BoundingBox.py: /opt/ros/fuerte/share/roscpp/manifest.xml
../src/arm_msgs/msg/_BoundingBox.py: /opt/ros/fuerte/share/geometry_msgs/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/arm_msgs/msg/_BoundingBox.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py --noinitpy /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/msg/BoundingBox.msg

ROSBUILD_genmsg_py: CMakeFiles/ROSBUILD_genmsg_py
ROSBUILD_genmsg_py: ../src/arm_msgs/msg/__init__.py
ROSBUILD_genmsg_py: ../src/arm_msgs/msg/_InertialParameters.py
ROSBUILD_genmsg_py: ../src/arm_msgs/msg/_StatusReport.py
ROSBUILD_genmsg_py: ../src/arm_msgs/msg/_Task.py
ROSBUILD_genmsg_py: ../src/arm_msgs/msg/_Object.py
ROSBUILD_genmsg_py: ../src/arm_msgs/msg/_Tasks.py
ROSBUILD_genmsg_py: ../src/arm_msgs/msg/_Objects.py
ROSBUILD_genmsg_py: ../src/arm_msgs/msg/_BoundingBox.py
ROSBUILD_genmsg_py: CMakeFiles/ROSBUILD_genmsg_py.dir/build.make
.PHONY : ROSBUILD_genmsg_py

# Rule to build all files generated by this target.
CMakeFiles/ROSBUILD_genmsg_py.dir/build: ROSBUILD_genmsg_py
.PHONY : CMakeFiles/ROSBUILD_genmsg_py.dir/build

CMakeFiles/ROSBUILD_genmsg_py.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ROSBUILD_genmsg_py.dir/clean

CMakeFiles/ROSBUILD_genmsg_py.dir/depend:
	cd /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build/CMakeFiles/ROSBUILD_genmsg_py.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ROSBUILD_genmsg_py.dir/depend

