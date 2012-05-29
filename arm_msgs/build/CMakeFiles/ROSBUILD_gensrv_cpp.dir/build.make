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

# Utility rule file for ROSBUILD_gensrv_cpp.

# Include the progress variables for this target.
include CMakeFiles/ROSBUILD_gensrv_cpp.dir/progress.make

CMakeFiles/ROSBUILD_gensrv_cpp: ../srv_gen/cpp/include/arm_msgs/GetTableCoeffs.h
CMakeFiles/ROSBUILD_gensrv_cpp: ../srv_gen/cpp/include/arm_msgs/FindObjectMulti.h
CMakeFiles/ROSBUILD_gensrv_cpp: ../srv_gen/cpp/include/arm_msgs/FindObject.h

../srv_gen/cpp/include/arm_msgs/GetTableCoeffs.h: ../srv/GetTableCoeffs.srv
../srv_gen/cpp/include/arm_msgs/GetTableCoeffs.h: /opt/ros/fuerte/share/roscpp/rosbuild/scripts/gensrv_cpp.py
../srv_gen/cpp/include/arm_msgs/GetTableCoeffs.h: /opt/ros/fuerte/share/roscpp/rosbuild/scripts/genmsg_cpp.py
../srv_gen/cpp/include/arm_msgs/GetTableCoeffs.h: /opt/ros/fuerte/share/roslib/bin/gendeps
../srv_gen/cpp/include/arm_msgs/GetTableCoeffs.h: ../manifest.xml
../srv_gen/cpp/include/arm_msgs/GetTableCoeffs.h: /opt/ros/fuerte/share/roslang/manifest.xml
../srv_gen/cpp/include/arm_msgs/GetTableCoeffs.h: /opt/ros/fuerte/share/roscpp/manifest.xml
../srv_gen/cpp/include/arm_msgs/GetTableCoeffs.h: /opt/ros/fuerte/share/geometry_msgs/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../srv_gen/cpp/include/arm_msgs/GetTableCoeffs.h"
	/opt/ros/fuerte/share/roscpp/rosbuild/scripts/gensrv_cpp.py /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/srv/GetTableCoeffs.srv

../srv_gen/cpp/include/arm_msgs/FindObjectMulti.h: ../srv/FindObjectMulti.srv
../srv_gen/cpp/include/arm_msgs/FindObjectMulti.h: /opt/ros/fuerte/share/roscpp/rosbuild/scripts/gensrv_cpp.py
../srv_gen/cpp/include/arm_msgs/FindObjectMulti.h: /opt/ros/fuerte/share/roscpp/rosbuild/scripts/genmsg_cpp.py
../srv_gen/cpp/include/arm_msgs/FindObjectMulti.h: /opt/ros/fuerte/share/roslib/bin/gendeps
../srv_gen/cpp/include/arm_msgs/FindObjectMulti.h: /opt/ros/fuerte/share/geometry_msgs/msg/PoseWithCovariance.msg
../srv_gen/cpp/include/arm_msgs/FindObjectMulti.h: ../msg/Object.msg
../srv_gen/cpp/include/arm_msgs/FindObjectMulti.h: /opt/ros/fuerte/share/geometry_msgs/msg/PoseWithCovarianceStamped.msg
../srv_gen/cpp/include/arm_msgs/FindObjectMulti.h: /opt/ros/fuerte/share/std_msgs/msg/Header.msg
../srv_gen/cpp/include/arm_msgs/FindObjectMulti.h: /opt/ros/fuerte/share/geometry_msgs/msg/Pose.msg
../srv_gen/cpp/include/arm_msgs/FindObjectMulti.h: /opt/ros/fuerte/share/geometry_msgs/msg/Point.msg
../srv_gen/cpp/include/arm_msgs/FindObjectMulti.h: /opt/ros/fuerte/share/geometry_msgs/msg/Quaternion.msg
../srv_gen/cpp/include/arm_msgs/FindObjectMulti.h: ../manifest.xml
../srv_gen/cpp/include/arm_msgs/FindObjectMulti.h: /opt/ros/fuerte/share/roslang/manifest.xml
../srv_gen/cpp/include/arm_msgs/FindObjectMulti.h: /opt/ros/fuerte/share/roscpp/manifest.xml
../srv_gen/cpp/include/arm_msgs/FindObjectMulti.h: /opt/ros/fuerte/share/geometry_msgs/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../srv_gen/cpp/include/arm_msgs/FindObjectMulti.h"
	/opt/ros/fuerte/share/roscpp/rosbuild/scripts/gensrv_cpp.py /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/srv/FindObjectMulti.srv

../srv_gen/cpp/include/arm_msgs/FindObject.h: ../srv/FindObject.srv
../srv_gen/cpp/include/arm_msgs/FindObject.h: /opt/ros/fuerte/share/roscpp/rosbuild/scripts/gensrv_cpp.py
../srv_gen/cpp/include/arm_msgs/FindObject.h: /opt/ros/fuerte/share/roscpp/rosbuild/scripts/genmsg_cpp.py
../srv_gen/cpp/include/arm_msgs/FindObject.h: /opt/ros/fuerte/share/roslib/bin/gendeps
../srv_gen/cpp/include/arm_msgs/FindObject.h: /opt/ros/fuerte/share/geometry_msgs/msg/PoseWithCovariance.msg
../srv_gen/cpp/include/arm_msgs/FindObject.h: ../msg/Object.msg
../srv_gen/cpp/include/arm_msgs/FindObject.h: /opt/ros/fuerte/share/geometry_msgs/msg/PoseWithCovarianceStamped.msg
../srv_gen/cpp/include/arm_msgs/FindObject.h: /opt/ros/fuerte/share/std_msgs/msg/Header.msg
../srv_gen/cpp/include/arm_msgs/FindObject.h: /opt/ros/fuerte/share/geometry_msgs/msg/Pose.msg
../srv_gen/cpp/include/arm_msgs/FindObject.h: /opt/ros/fuerte/share/geometry_msgs/msg/Point.msg
../srv_gen/cpp/include/arm_msgs/FindObject.h: /opt/ros/fuerte/share/geometry_msgs/msg/Quaternion.msg
../srv_gen/cpp/include/arm_msgs/FindObject.h: ../manifest.xml
../srv_gen/cpp/include/arm_msgs/FindObject.h: /opt/ros/fuerte/share/roslang/manifest.xml
../srv_gen/cpp/include/arm_msgs/FindObject.h: /opt/ros/fuerte/share/roscpp/manifest.xml
../srv_gen/cpp/include/arm_msgs/FindObject.h: /opt/ros/fuerte/share/geometry_msgs/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../srv_gen/cpp/include/arm_msgs/FindObject.h"
	/opt/ros/fuerte/share/roscpp/rosbuild/scripts/gensrv_cpp.py /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/srv/FindObject.srv

ROSBUILD_gensrv_cpp: CMakeFiles/ROSBUILD_gensrv_cpp
ROSBUILD_gensrv_cpp: ../srv_gen/cpp/include/arm_msgs/GetTableCoeffs.h
ROSBUILD_gensrv_cpp: ../srv_gen/cpp/include/arm_msgs/FindObjectMulti.h
ROSBUILD_gensrv_cpp: ../srv_gen/cpp/include/arm_msgs/FindObject.h
ROSBUILD_gensrv_cpp: CMakeFiles/ROSBUILD_gensrv_cpp.dir/build.make
.PHONY : ROSBUILD_gensrv_cpp

# Rule to build all files generated by this target.
CMakeFiles/ROSBUILD_gensrv_cpp.dir/build: ROSBUILD_gensrv_cpp
.PHONY : CMakeFiles/ROSBUILD_gensrv_cpp.dir/build

CMakeFiles/ROSBUILD_gensrv_cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ROSBUILD_gensrv_cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ROSBUILD_gensrv_cpp.dir/clean

CMakeFiles/ROSBUILD_gensrv_cpp.dir/depend:
	cd /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/build/CMakeFiles/ROSBUILD_gensrv_cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ROSBUILD_gensrv_cpp.dir/depend

