#pragma once
class Bullet : public Object
{
	Sprite* m_Bullet;

public:
	Bullet(Vec2 pos, float Speed, float Angle);
	~Bullet();

	void Update(float deltaTime, float time);
	void Render();

	void Move();

	float m_Shot;
	float m_Speed;
	float m_Rotation;

	Vec2 m_StartPos, m_ArrivePos, m_Dire;

};

