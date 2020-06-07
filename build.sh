#!/bin/bash

g++ -std=c++17 -Wall -Wextra -pedantic -o main.exe MyFrame.cpp MyApp.cpp -I/c/wxWidgets-3.1.3/lib/gcc_dll/mswu -I/c/wxWidgets-3.1.3/include -I/c/wxWidgets-3.1.3/include/msvc -L/c/wxWidgets-3.1.3/lib/gcc_dll -lwxbase31u -lwxmsw31u_core


