#include "ClassThatUsesDB.h"
#include <iostream>

using namespace std;

ClassThatUsesDB::ClassThatUsesDB(MockConnection* connect) : _connect(connect)
{
	cout << "����� ������������" << endl;
}

ClassThatUsesDB::~ClassThatUsesDB()
{
	cout << "����� �����������" << endl;
}

void ClassThatUsesDB::openConnection(MockConnection* connect)
{
	connect->open();
}

void ClassThatUsesDB::useConnection(MockConnection* connect)
{
	connect->execQuery();
}

void ClassThatUsesDB::closeConnection(MockConnection* connect)
{
	connect->close();
}
