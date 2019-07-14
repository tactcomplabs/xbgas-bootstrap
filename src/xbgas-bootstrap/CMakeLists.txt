# src/xbgas-bootstrap CMakeLists.txt driver
#
# Copyright (C) 2017-2018 Tactical Computing Laboratories, LLC
# All Rights Reserved
# contact@tactcomplabs.com
#
# This file is a part of the XBGAS-RUNTIME package.  For license
# information, see the LICENSE file in the top level directory of
# this distribution.
#

#-- ensure we're using C11
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11")

set(XBGASSrcs
xbgas-bootstrap.c
)

include_directories( . )
add_library( xbgas-bootstrap STATIC ${XBGASSrcs} )

install(TARGETS xbgas-bootstrap DESTINATION lib )
install(DIRECTORY ./ DESTINATION include
        FILES_MATCHING PATTERN "*.h*")

# EOF
