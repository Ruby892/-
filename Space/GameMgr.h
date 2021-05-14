#pragma once
class GameMgr : public Singleton<GameMgr>
{

public:
	GameMgr();
	~GameMgr();
	
	void Update(float deltaTime, float time);

	int m_blockHp;
	float m_Delay;
};

