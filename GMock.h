#pragma once
#include "DBConnection.h"
#include "ClassThatUsesDB.h"

TEST(ConnectionTest, test1)
{
    MockConnection connect;
    ClassThatUsesDB thatUsesDB;

    // ��������� ���������� �� ������������� � ������ ����� ������� ���� �� N ���
    EXPECT_CALL(connect, open).Times(::testing::AtLeast(1));
    EXPECT_CALL(connect, close).Times(::testing::AtLeast(1));
    EXPECT_CALL(connect, execQuery).Times(::testing::AtLeast(1));


    // ��������� �������� �� ����������
    thatUsesDB.openConnection(&connect);
    thatUsesDB.closeConnection(&connect);
    thatUsesDB.useConnection(&connect);
}
