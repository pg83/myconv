#!/bin/sh

# we are on musl based repo, without glibc
musl-clang -static -o myconv -liconv main.cpp
