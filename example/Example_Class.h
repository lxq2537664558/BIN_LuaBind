#pragma once

#include "Example.h"

class CExample_Class : public CExample
{
public:
	virtual std::string GetName() const
	{
		return "class";
	}

	virtual void Do();
};