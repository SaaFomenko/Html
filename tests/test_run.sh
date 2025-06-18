#!/bin/bash

g++ main.cpp ../Html.cpp ../../my_file/my_file.cpp -o test -lgtest -pthread && ./test