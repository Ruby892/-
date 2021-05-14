#include "stdafx.h"
#include "Bullet.h"
#include "block.h"

Bullet::Bullet(Vec2 pos, float Speed, float Angle)
{
	m_Bullet = Sprite::Create(L"Painting/bullet.png");
	m_Bullet->SetParent(this);
	
	m_Position = pos;
	m_Rotation = D3DXToRadian(Angle - 90);
	m_Speed = Speed;

	m_StartPos = m_Position;
	m_ArrivePos = Vec2(cos(m_Rotation), sin(m_Rotation));
}

Bullet::~Bullet()
{
}

void Bullet::Update(float deltaTime, float time)
{
	m_Dire = m_ArrivePos - m_StartPos;

	D3DXVec2Normalize(&m_Dire, &m_ArrivePos);

	Translate(m_Dire.x * m_Speed * dt, m_Dire.y * m_Speed * dt);

	if (m_Position.y <= -100 || m_Position.y >= 1180 || m_Position.x >= 2020 || m_Position.x <= -100)
	{
		SetDestroy(true);
	}

	if (m_Position.y >= -10000 && GameMgr::GetInst()->m_blockHp < 1)
	{
		SetDestroy(true);
	}
}

void Bullet::Render()
{
	m_Bullet->Render();
}

void Bullet::Move()
{
	
}


