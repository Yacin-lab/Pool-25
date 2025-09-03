#!/bin/sh

count_files=$(find . -type f | wc -l)
count_directories=$(find . -type d | wc -l)
total=$((count_files + count_directories))


echo "$total"
