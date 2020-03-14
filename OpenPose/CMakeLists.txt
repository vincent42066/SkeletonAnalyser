cmake_minimum_required(VERSION 3.13)
project(easyopenpose)
set(CMAKE_CXX_STANDARD 14)
set(INC_DIR /usr/include
        /usr/local/cuda/include #cuda include location Modify the correct place for your own machine
                 /home/litchi/project/openpose/3rdparty/caffe/include #The correct caffe position in the machine
                 /home/litchi/project/openpose/3rdparty/caffe/src #The correct caffe position in the machine
        )
set(LINK_DIR /usr/lib
        /usr/lib/x86_64-linux-gnu/
                 /usr/local/cuda/lib64 #cuda's lib location modified to the correct place
                 /home/litchi/project/openpose/3rdparty/caffe/build/lib #caffe's lib location modified to the correct place
        )
 Set(OpenCV_DIR /usr/local/share/OpenCV) #opencv's location
find_package(OpenCV REQUIRED)
find_package(OpenPose REQUIRED)
include_directories(${INC_DIR}${OpenCV_INCLUDE_DIRS}${OpenPose_INCLUDE_DIRS}${EIGEN3_INCLUDE_DIR})
link_directories(${LINK_DIR}${OpenCV_LIBS}${OpenPose_LIBS})
add_executable(easyopenpose main.cpp op.h)
target_link_libraries(easyopenpose
        caffe
        boost_system
        glog
        jsoncpp
        ${OpenPose_LIBS}
        ${OpenCV_LIBS}
        )