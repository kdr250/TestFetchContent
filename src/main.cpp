#include <iostream>
#include <Vec2.hpp>

int main()
{
	Vec2 vec1(100.0f, 200.0f);
	Vec2 vec2(300.0f, 400.0f);

	Vec2 vec3 = vec1 + vec2;

	std::cout << "vec3.x = " << vec3.x << std::endl;
	std::cout << "vec3.y = " << vec3.y << std::endl;
	std::cout << "vec3.length() = " << vec3.length() << std::endl;

	return 0;
}
