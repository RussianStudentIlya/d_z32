#pragma once
#include "gtest/gtest.h"
#include "gmock/gmock.h"

// определяем интерфейс объекта, который далее будем использовать в алгоритме
class DBConnection
{
public:
    DBConnection()
    {}

    //виртуальный деструктор
    virtual ~DBConnection()
    {}


    // несколько виртуальных методов, которыми будем пользоваться
    virtual void open() = 0;
    virtual void close() = 0;
    virtual void execQuery() = 0;
};

// определяем класс мок-объекта на основе нужного нам интерфейса
class MockConnection : public DBConnection
{
public:
    // пользуемся макросами GTest для определения мок-методов в объекте
    MOCK_METHOD(void, open, (), (override));
    MOCK_METHOD(void, close, (), (override));
    MOCK_METHOD(void, execQuery, (), (override));
};