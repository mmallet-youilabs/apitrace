# Install script for directory: /Users/mathieumallet/Documents/youidev/apitrace/scripts

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/scripts" TYPE PROGRAM FILES
    "/Users/mathieumallet/Documents/youidev/apitrace/scripts/convert.py"
    "/Users/mathieumallet/Documents/youidev/apitrace/scripts/highlight.py"
    "/Users/mathieumallet/Documents/youidev/apitrace/scripts/jsondiff.py"
    "/Users/mathieumallet/Documents/youidev/apitrace/scripts/jsonextractimages.py"
    "/Users/mathieumallet/Documents/youidev/apitrace/scripts/leaks.py"
    "/Users/mathieumallet/Documents/youidev/apitrace/scripts/profileshader.py"
    "/Users/mathieumallet/Documents/youidev/apitrace/scripts/retracediff.py"
    "/Users/mathieumallet/Documents/youidev/apitrace/scripts/snapdiff.py"
    "/Users/mathieumallet/Documents/youidev/apitrace/scripts/tracecheck.py"
    "/Users/mathieumallet/Documents/youidev/apitrace/scripts/tracediff.py"
    "/Users/mathieumallet/Documents/youidev/apitrace/scripts/unpickle.py"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/scripts" TYPE FILE FILES "/Users/mathieumallet/Documents/youidev/apitrace/scripts/apitrace.PIXExp")
endif()

