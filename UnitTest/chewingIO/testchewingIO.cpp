#include <gtest/gtest.h>
#include "ChewingIO.cpp"

TEST(chewingtest,c0path){
	string result;
	result="妳";
	EXPECT_STREQ(result.c_str(),(chewing_io("su3","2\n").c_str()));

	result="逆";
	EXPECT_STREQ(result.c_str(),(chewing_io("su4","1\n").c_str()));
	
        result="泥";
        EXPECT_STREQ(result.c_str(),(chewing_io("su6","1\n").c_str()));

        result="呢";
        EXPECT_STREQ(result.c_str(),(chewing_io("sk ","1\n").c_str()));

        result="的";
        EXPECT_STREQ(result.c_str(),(chewing_io("2k7","1\n").c_str()));

	result="";
	EXPECT_STREQ(result.c_str(),(chewing_io("si3","1\n").c_str()));

        result="[Error] select number error.";
        EXPECT_STREQ(result.c_str(),(chewing_io("su3","200\n").c_str()));

        result="[Error] select number error.";
        EXPECT_STREQ(result.c_str(),(chewing_io("su3","abc\n").c_str()));
	
	result="抳";
        EXPECT_STREQ(result.c_str(),(chewing_io("su3","12\n").c_str()));

}
int main( int argc, char** argv){
	//string line="su3";
        //string select_str="2\n";
	//cout<<chewing_io( line,select_str)<<endl;

	testing::InitGoogleTest( &argc, argv);
	return RUN_ALL_TESTS();
}
