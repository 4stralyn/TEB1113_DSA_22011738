# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Bobarista_autogen"
  "CMakeFiles\\Bobarista_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Bobarista_autogen.dir\\ParseCache.txt"
  )
endif()
