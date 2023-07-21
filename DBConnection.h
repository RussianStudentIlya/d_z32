#pragma once
#include "gtest/gtest.h"
#include "gmock/gmock.h"

// ���������� ��������� �������, ������� ����� ����� ������������ � ���������
class DBConnection
{
public:
    DBConnection()
    {}

    //����������� ����������
    virtual ~DBConnection()
    {}


    // ��������� ����������� �������, �������� ����� ������������
    virtual void open() = 0;
    virtual void close() = 0;
    virtual void execQuery() = 0;
};

// ���������� ����� ���-������� �� ������ ������� ��� ����������
class MockConnection : public DBConnection
{
public:
    // ���������� ��������� GTest ��� ����������� ���-������� � �������
    MOCK_METHOD(void, open, (), (override));
    MOCK_METHOD(void, close, (), (override));
    MOCK_METHOD(void, execQuery, (), (override));
};