cmake_minimum_required(VERSION 3.28)
project(Question_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Question_2 socialmedia_test.cpp
        User.cpp
        User.h
        Post.cpp
        Post.h
        SocialMediaPlatform.cpp
        SocialMediaPlatform.h)
