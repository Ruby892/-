#pragma once
class wall : public Object
{
	Sprite* m_wall;

public:

	wall(float posx, float posy);
	~wall();

	void Render();
	void Update(float dateTime, float time);

	void Oncollision(Object* other, std::string tag);
};

