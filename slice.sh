#!/bin/bash

slice2cpp --checksum head.ice
slice2js head.ice

mv head.js web/


