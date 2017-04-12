#include <gtest/gtest.h>
//#include "BoundaryValueTest.cpp"
#define SEARCH_PATH_SEP ";"

/*#ifdef __cplusplus
extern "C" {
#endif*/

#include <chewing.h>
//#include <testhelper.h>

/*#ifdef __cplusplus
}
#endif*/

#include <iostream>
using namespace std;
TEST(chewingtest,combinationtest){
	ChewingContext* ctx = chewing_new();
	chewing_handle_Default(ctx, 'n');
	chewing_handle_Default(ctx, 'u');
	chewing_handle_Space(ctx);
	chewing_handle_Enter(ctx);
	EXPECT_STREQ("",chewing_commit_String(ctx));
}
TEST(chewingtest,combinationtest2){
        ChewingContext* ctx = chewing_new();
        chewing_handle_Default(ctx, '[');
        //chewing_handle_Default(ctx, '');
        //chewing_handle_Space(ctx);
	chewing_handle_Enter(ctx);
        EXPECT_STRNE("「",chewing_commit_String(ctx));
}



int main( int argc, char** argv){
	testing::InitGoogleTest( &argc, argv);
	return RUN_ALL_TESTS();
	ChewingContext* ctx = chewing_new();
	//type_keystroke_by_string( ctx, "su3cl3");
	chewing_handle_Default(ctx, '[');
	//cout << chewing_handle_Default(ctx, 'x');
	chewing_handle_Default(ctx, ']');
	//cout << chewing_handle_Default(ctx, 'm');
	//chewing_handle_Default(ctx, '4');
	//chewing_handle_Default(ctx, 't');
	//chewing_handle_Default(ctx, '8');
	//chewing_handle_Default(ctx, '6');
	chewing_handle_Enter(ctx);
  	cout<<chewing_commit_Check(ctx)<<endl;
	cout << chewing_commit_String(ctx);
	if( chewing_commit_Check(ctx)){
		cout << chewing_commit_String(ctx);
	}
	cout << "finish" << endl;
	return 0;}
