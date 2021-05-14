#pragma once
class Bullet1 : public Object
{
	Sprite* m_Bullet1;

public:
	Bullet1(Vec2 pos);
	~Bullet1();

	void Render();
	void Update(float deltaTime, float time);

	float m_Speed1;

	Vec2 m_Dire;
};

