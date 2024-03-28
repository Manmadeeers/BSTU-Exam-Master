# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "BSTU-Exam-Master_autogen"
  "CMakeFiles\\BSTU-Exam-Master_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\BSTU-Exam-Master_autogen.dir\\ParseCache.txt"
  )
endif()
