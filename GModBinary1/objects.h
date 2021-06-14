#pragma once

#include "types.h"

class Sphere : public BaseObject
{
	float rad;

public:
	Sphere(glm::vec3 position, glm::vec3 angle, glm::vec3 colour, float radius);
	bool intersect(const Ray& ray, HitResult& hitOut) const;
};

class Plane : public BaseObject
{
public:
	Plane(glm::vec3 position, glm::vec3 angle, glm::vec3 colour);
	bool intersect(const Ray& ray, HitResult& hitOut) const;
};