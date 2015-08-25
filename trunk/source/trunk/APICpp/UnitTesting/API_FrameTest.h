/*
 * This class purpose is to provide UnitTesting support for the API_Frame class using the CppUnit framework.
 */

/*
 * $Author: cvicente $
 * $Id: API_FrameTest.h 20 2012-03-15 15:47:47Z cvicente $
 * $Date: 2012-03-15 22:47:47 +0700 (Thu, 15 Mar 2012) $
 * $Revision: 20 $
 * */

#ifndef API_FRAMETEST_H
#define API_FRAMETEST_H

#include "cppunit/extensions/HelperMacros.h"

#include "API_Frame.h"

class API_FrameTest : public CppUnit::TestFixture
{
    public:

        class API_FrameChild : public API_Frame
        {
            public:

                API_FrameChild(): API_Frame() {}

                API_FrameChild(unsigned int length, API_Frame::FrameType frameType, unsigned char checksum)
                : API_Frame(length, frameType, checksum) {}

                inline bool parseFrame(std::string frame){
                    return true;
                }

                inline std::string getFrame(){
                    return "";
                }
        };


        /** Default constructor */
        API_FrameTest();
        /** Default destructor */
        virtual ~API_FrameTest();

        void setUp();
        void tearDown();

        void testConstructor();
        void testGetSet();

    private:

        CPPUNIT_TEST_SUITE(API_FrameTest);
        CPPUNIT_TEST(testConstructor);
        CPPUNIT_TEST(testGetSet);
        CPPUNIT_TEST_SUITE_END();
};

#endif // API_FRAMETEST_H
