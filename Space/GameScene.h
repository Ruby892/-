#pragma once
class GameScene : public Scene
{
	Sprite* m_bg;

public:
	GameScene();
	~GameScene();

	void Init();
	void Release();

	void Update(float deltaTime, float time);
	void Render();


};

