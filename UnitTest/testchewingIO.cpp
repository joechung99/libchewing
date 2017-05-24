#include <gtest/gtest.h>
#include "ChewingIO.cpp"
using namespace std;
TEST(chewingtest,c0test){
	string line;
	line="su3cl3";
	EXPECT_STREQ("你好",chewing_io( line));
	//EXPECT_EQ(1,selKeys[0]);
}
int main( int argc, char** argv){
	testing::InitGoogleTest( &argc, argv);
	return RUN_ALL_TESTS();
}
