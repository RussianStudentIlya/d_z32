#pragma once
#include "DBConnection.h"

// ��������, ������� � ���������� ����� �����������
// ��� ������ ���-��������
class ClassThatUsesDB
{
private:
	MockConnection* _connect;

public:
	ClassThatUsesDB() = default;
	ClassThatUsesDB(MockConnection* connect);
	~ClassThatUsesDB();

	void openConnection(MockConnection* connect);
	void useConnection(MockConnection* connect);
	void closeConnection(MockConnection* connect);
};


