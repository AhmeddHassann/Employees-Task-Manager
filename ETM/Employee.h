#pragma once
#include <iostream>
#include "SqlInterface.h"

using namespace std;

class Employee : public SqlInterface
{
private:
	string m_firstName, m_lastName, m_username, m_email, m_password;
	void retrieve() override;

public:

	Employee(string, string, string, string, string);
	Employee(string, string);
	~Employee();
	void add() override;
	void update() override;
	void remove() override;
	string getUsername() const;
};

