#pragma once
class Shot : public Object
{
	Sprite* m_Shot;

public:
	Shot(float posx, float posy);
	~Shot();

	void Update(float deltaTime, float time);
	void Redner();

	void OnCollision(Object* other, std::string tag);
	void Move();
	
	float m_So;
	float m_So1;

	int a = 0;
	int n;
	int h = 0;

	float m_Speed;
	float s_Delay;



};

