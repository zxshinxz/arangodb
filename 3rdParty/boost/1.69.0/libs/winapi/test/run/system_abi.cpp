/*
 *             Copyright Andrey Semashev 2018.
 * Distributed under the Boost Software License, Version 1.0.
 *    (See accompanying file LICENSE_1_0.txt or copy at
 *          http://www.boost.org/LICENSE_1_0.txt)
 */
/*!
 * \file   system_abi.cpp
 * \author Andrey Semashev
 * \date   10.03.2018
 *
 * \brief  This file contains ABI test for system.hpp
 */

#include <boost/winapi/system.hpp>
#include <windows.h>
#include "abi_test_tools.hpp"

int main()
{
    BOOST_WINAPI_TEST_STRUCT(SYSTEM_INFO, (dwOemId)(wProcessorArchitecture)(dwPageSize)(lpMinimumApplicationAddress)(lpMaximumApplicationAddress)(dwActiveProcessorMask)(dwNumberOfProcessors)(dwProcessorType)(dwAllocationGranularity)(wProcessorLevel)(wProcessorRevision));

    return boost::report_errors();
}
