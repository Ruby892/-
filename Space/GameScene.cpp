#include "stdafx.h"
#include "GameScene.h"
#include "block.h"
#include "wall.h"
#include "Bullet.h"
#include "Shot.h"
#include "Bullet1.h"

GameScene::GameScene()
{
	m_bg = Sprite::Create(L"Painting/bg.png");
	m_bg->SetPosition(1920 / 2, 1080 / 2);

	ObjMgr->AddObject(new block(200, 200), "block");
	ObjMgr->AddObject(new Shot(1920/5, 100), "Shot");
	ObjMgr->AddObject(new Shot(1920/5*2, 100), "Shot");
	ObjMgr->AddObject(new Shot(1920/5*3, 100), "Shot");
	ObjMgr->AddObject(new Shot(1920/5*4, 100), "Shot");
	//ObjMgr->AddObject(new wall(1920 / 2, 500), "wall");

}

GameScene::~GameScene()
{
}

void GameScene::Init()
{
}

void GameScene::Release()
{
}

void GameScene::Update(float deltaTime, float time)
{

}

void GameScene::Render()
{
	m_bg->Render();

}
