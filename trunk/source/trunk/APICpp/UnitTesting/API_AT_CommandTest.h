/*
 * This class purpose is to provide UnitTesting support for the API_AT_Command class using the CppUnit framework.
 */

/*
 * $Author: cvicente $
 * $Id: API_AT_CommandTest.h 20 2012-03-15 15:47:47Z cvicente $
 * $Date: 2012-03-15 22:47:47 +0700 (Thu, 15 Mar 2012) $
 * $Revision: 20 $
 * */

#ifndef API_AT_COMMANDTEST_H
#define API_AT_COMMANDTEST_H

#include "cppunit/extensions/HelperMacros.h"

#include "API_AT_Command.h"


class API_AT_CommandTest: public CppUnit::TestFixture
{
    public:

        /** Default constructor */
        API_AT_CommandTest();
        /** Default destructor */
        ~API_AT_CommandTest();

        void setUp();
        void tearDown();

        void testConstructor();
        void testGetSet();
        void testGetFrame();

    private:

        CPPUNIT_TEST_SUITE(API_AT_CommandTest);
        CPPUNIT_TEST(testConstructor);
        CPPUNIT_TEST(testGetSet);
        CPPUNIT_TEST(testGetFrame);
        CPPUNIT_TEST_SUITE_END();
};

#endif // API_AT_COMMANDTEST_H
