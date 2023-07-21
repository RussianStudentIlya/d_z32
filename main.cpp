#include <iostream>
#include <gtest/gtest.h>
#include "ClassThatUsesDB.h"
#include "DBConnection.h"
#include "GMock.h"
using namespace std;

int main()
{
	::testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}