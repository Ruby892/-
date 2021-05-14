#pragma once
class block : public Object
{
	Sprite* m_block;

public:
	block(float posx, float posy);
	~block();

	void Update(float deltaTime, float time);
	void Render();
	
	void OnCollision(Object* other, std::string tag);
	void Move();

	float m_Speed;
	float m_mSpeed;

	Vec2 m_t;

	float shot;

};

