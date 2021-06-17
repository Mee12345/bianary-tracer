#pragma once

#include "glm/glm.hpp"

class BaseObject; // might not need this forward declaration for the hit result struct, but pretty sure you do

struct HitResult
{
	bool hit;
	float t;
	glm::vec3 normal; 
	glm::vec3 pos;
	glm::vec3 color;
};

struct Trace //rename this because bvh conflicts with it
{
	glm::vec3 pos;
	glm::vec3 dir;
};

class BaseObject
{
public:
	glm::vec3 pos;
	glm::vec3 dir;
	glm::vec3 col;

	BaseObject(glm::vec3 position, glm::vec3 direction, glm::vec3 color) : pos(position), dir(direction), col(color) {}
	virtual bool intersect(const Trace& trace, HitResult& hitOut) const = 0;
};