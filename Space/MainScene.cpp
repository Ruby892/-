#include "stdafx.h"
#include "MainScene.h"
#include "GameScene.h"


MainScene::MainScene()
{
	m_bg = Sprite::Create(L"Painting/game.png");
	m_bg->SetPosition(1920 / 2, 1080 / 2);

	m_GameStart = Sprite::Create(L"Painting/gamestart.png");
	m_GameStart->SetPosition(1600, 800);
}

MainScene::~MainScene()
{
}

void MainScene::Init()
{																		  
}

void MainScene::Release()
{
}

void MainScene::Update(float deltaTime, float time)
{
	if (CollisionMgr::GetInst()->MouseWithBoxSize(m_GameStart) && INPUT->GetButtonDown())
	{
		GameMgr::GetInst()->m_blockHp = 5;
		SceneDirector::GetInst()->ChangeScene(new GameScene());
		INPUT->ButtonDown(false);
	}
}

void MainScene::Render()
{
	m_bg->Render();
	m_GameStart->Render();
}
