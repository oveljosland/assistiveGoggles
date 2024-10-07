cmake_minimum_required(VERSION 3.29)
project(AssistiveGoggles)

set(CMAKE_CXX_STANDARD 20)

add_executable(AssistiveGoggles main.cpp
        src/Navigation.cpp
        include/Navigation.h
        src/Communication.cpp
        include/Communication.h
        src/SensorManager.cpp
        include/SensorManager.h
        src/InputListener.cpp
        include/InputListener.h
        src/CameraManager.cpp
        include/CameraManager.h)
