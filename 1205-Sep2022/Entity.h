#pragma once

class Entity
{
public:
	// a Pure virtual method which makes the class an abstract class
	// an abstract class cannot be instantiated
	virtual void Update() = 0;
};