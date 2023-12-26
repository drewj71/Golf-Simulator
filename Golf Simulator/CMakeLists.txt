# CMakeLists.txt

cmake_minimum_required(VERSION 3.21)
project(GolfSimulator)

add_subdirectory(bullet3)

add_executable(GolfSimulator Main.cpp)

target_link_libraries(GolfSimulator PRIVATE BulletDynamics BulletCollision LinearMath)
