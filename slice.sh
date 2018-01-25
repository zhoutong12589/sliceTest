#!/bin/bash
#该脚本用于生成接口文件

slice2cpp --checksum -I/home/dev/software/ice-3.7.0/slice head.ice
slice2js -I/home/dev/software/ice-3.7.0/slice head.ice

mv head.js web/


