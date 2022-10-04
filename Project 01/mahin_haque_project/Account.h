#pragma once
#include <iostream>

// Account is an abstract class, so all of its functions will be virtual
class Account {
public:
	virtual float getBalance() const = 0;
	virtual void deposit(float amount) = 0;

protected:
	float balance;

 };