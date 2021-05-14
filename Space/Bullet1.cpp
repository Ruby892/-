#include "stdafx.h"
#include "Bullet1.h"
#include "block.h"

Bullet1::Bullet1(Vec2 pos)
{
	m_Bullet1 = Sprite::Create(L"Painting/bullet.png");
	m_Bullet1->SetParent(this);
	m_Position = pos;
	SetPosition(pos.x, pos.y);
	
	m_Speed1 = 1000;

	Object* pPlayer = nullptr;
	for (const auto& iter : ObjectMgr::GetInst()->m_Objects)
	{
		if ((iter)->m_Tag == "block")
		{
			pPlayer = iter;
		}
	}

	Vec2 vPlayerPos = pPlayer->m_Position;
	Vec2 A;
	A = m_Position;
	A -= vPlayerPos;
	D3DXVec2Normalize(&m_Dire, &A);
}

Bullet1::~Bullet1()
{
}

void Bullet1::Render()
{
	m_Bullet1->Render();
}

void Bullet1::Update(float deltaTime, float time)
{

	Translate(-m_Dire.x * m_Speed1 * dt, -m_Dire.y * m_Speed1 * dt);

	if (m_Position.y <= -100 || m_Position.y >= 1180 || m_Position.x >= 2020 || m_Position.x <= -100)
	{
		SetDestroy(true);
	}

	if (m_Position.y >= -10000 && GameMgr::GetInst()->m_blockHp < 1)
	{
		SetDestroy(true);
	}

}