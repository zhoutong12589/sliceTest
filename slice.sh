#!/bin/bash
#�ýű��������ɽӿ��ļ�

slice2cpp --checksum -I/home/dev/software/ice-3.7.0/slice head.ice
slice2js -I/home/dev/software/ice-3.7.0/slice head.ice

mv head.js web/


