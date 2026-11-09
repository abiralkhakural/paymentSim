cmake_minimum_required(VERSION 4.3)
project(PaymentSim)

set(CMAKE_CXX_STANDARD 20)

add_executable(PaymentSim main.cpp
        PaymentMethod.cpp
        PaymentMethod.h)
