# Install script for directory: /Users/mathieumallet/Documents/youidev/apitrace

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/doc" TYPE FILE FILES
    "/Users/mathieumallet/Documents/youidev/apitrace/README.markdown"
    "/Users/mathieumallet/Documents/youidev/apitrace/docs/BUGS.markdown"
    "/Users/mathieumallet/Documents/youidev/apitrace/docs/NEWS.markdown"
    "/Users/mathieumallet/Documents/youidev/apitrace/docs/USAGE.markdown"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/doc" TYPE FILE RENAME "LICENSE.txt" FILES "/Users/mathieumallet/Documents/youidev/apitrace/LICENSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/mathieumallet/Documents/youidev/apitrace/build/thirdparty/snappy/cmake_install.cmake")
  include("/Users/mathieumallet/Documents/youidev/apitrace/build/thirdparty/brotli/cmake_install.cmake")
  include("/Users/mathieumallet/Documents/youidev/apitrace/build/thirdparty/libpng/cmake_install.cmake")
  include("/Users/mathieumallet/Documents/youidev/apitrace/build/thirdparty/crc32c/cmake_install.cmake")
  include("/Users/mathieumallet/Documents/youidev/apitrace/build/thirdparty/md5/cmake_install.cmake")
  include("/Users/mathieumallet/Documents/youidev/apitrace/build/lib/cmake_install.cmake")
  include("/Users/mathieumallet/Documents/youidev/apitrace/build/dispatch/cmake_install.cmake")
  include("/Users/mathieumallet/Documents/youidev/apitrace/build/helpers/cmake_install.cmake")
  include("/Users/mathieumallet/Documents/youidev/apitrace/build/wrappers/cmake_install.cmake")
  include("/Users/mathieumallet/Documents/youidev/apitrace/build/retrace/cmake_install.cmake")
  include("/Users/mathieumallet/Documents/youidev/apitrace/build/cli/cmake_install.cmake")
  include("/Users/mathieumallet/Documents/youidev/apitrace/build/scripts/cmake_install.cmake")
  include("/Users/mathieumallet/Documents/youidev/apitrace/build/gui/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/mathieumallet/Documents/youidev/apitrace/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
