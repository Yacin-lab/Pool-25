#!/bin/sh
groups $FT_USER | cut -d: -f2 | xargs | tr ' ' ',' | tr -d '\n'
