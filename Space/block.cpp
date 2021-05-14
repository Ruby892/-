#include "stdafx.h"
#include "block.h"
#include "wall.h"
#include "Bullet1.h"
#include "MainScene.h"

block::block(float posx, float posy)
{
	m_block = Sprite::Create(L"Painting/block.png");
	m_block->SetParent(this);
	SetPosition(posx, posy);

	m_Speed = 500;
	m_mSpeed = 750;

}

block::~block()
{
}

void block::Render()
{
	m_block->Render();
}

void block::Update(float deltaTime, float time)
{
	shot += deltaTime;

	ObjMgr->CollisionCheak(this, "Bullet");
	ObjMgr->CollisionCheak(this, "Bullet1");

	Move();

	if (GameMgr::GetInst()->m_blockHp <= 0)
	{
		SetDestroy(true);
		SceneDirector::GetInst()->ChangeScene(new MainScene());
	}
}

void block::OnCollision(Object* other, std::string tag)
{

	if (tag == "Bullet" || tag == "Bullet1")
	{
		GameMgr::GetInst()->m_blockHp -= 1;
		other->SetDestroy(true);
	}
}

void block::Move()
{
	
	if (INPUT->GetKey('W') == KeyState::PRESS && m_Position.y >= 60)
	{
		m_Position.y -= m_Speed * dt;

		if (INPUT->GetKey('W') == KeyState::PRESS && INPUT->GetKey(VK_SHIFT) == KeyState::PRESS)
		{
			m_Position.y -= (m_Speed - m_mSpeed) * dt;
		}
	}

	if (INPUT->GetKey('A') == KeyState::PRESS && m_Position.x >= 60)
	{
		m_Position.x -= m_Speed * dt;

		if (INPUT->GetKey('A') == KeyState::PRESS && INPUT->GetKey(VK_SHIFT) == KeyState::PRESS)
		{
			m_Position.x -= (m_Speed - m_mSpeed) * dt;
		}	
	}

	if (INPUT->GetKey('S') == KeyState::PRESS && m_Position.y <= 1020)
	{
		m_Position.y += m_Speed * dt;

		if (INPUT->GetKey('S') == KeyState::PRESS && INPUT->GetKey(VK_SHIFT) == KeyState::PRESS)
		{
			m_Position.y += (m_Speed - m_mSpeed) * dt;
		}
	}

	if (INPUT->GetKey('D') == KeyState::PRESS && m_Position.x <= 1860)
	{
		m_Position.x += m_Speed * dt;

		if (INPUT->GetKey('D') == KeyState::PRESS && INPUT->GetKey(VK_SHIFT) == KeyState::PRESS)
		{
			m_Position.x += (m_Speed - m_mSpeed) * dt;
		}
	}
}
