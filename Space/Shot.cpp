#include "stdafx.h"
#include "Shot.h"
#include "Bullet.h"
#include "Bullet1.h"

Shot::Shot(float posx, float posy)
{
	m_Shot = Sprite::Create(L"Painting/block.png");
	m_Shot->SetParent(this);
	SetPosition(posx, posy);

	m_Speed = 300;
	n = 36;
}

Shot::~Shot()
{
}

void Shot::Update(float deltaTime, float time)
{
	m_So += deltaTime;
	m_So1 += deltaTime;
	s_Delay += deltaTime;

	if (GameMgr::GetInst()->m_blockHp < 1)
	{
		s_Delay = 0;
	}
	

	if (m_So >= 1 && a == 0 && s_Delay >= 3 && GameMgr::GetInst()->m_blockHp > 0)
	{
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -5), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -35), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -65), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -95), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -125), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -155), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -185), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -215), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -245), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -275), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -305), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -335), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -20), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -50), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -80), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -110), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -140), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -170), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -200), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -230), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -260), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -290), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -320), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -350), "Bullet");

		m_So = 0;
		a = 1;

	}

	if (m_So >= 1 && a == 1 && s_Delay >= 3 && GameMgr::GetInst()->m_blockHp > 0)
	{
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -15), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -45), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -75), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -105), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -135), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -165), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -195), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -225), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -255), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -285), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -315), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -345), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -30), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -60), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -90), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -120), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -150), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -180), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -210), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -240), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -270), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -300), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -330), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -360), "Bullet");

		m_So = 0;
		a = 2;

	}

	if (m_So >= 1 && a == 2 && s_Delay >= 3 && GameMgr::GetInst()->m_blockHp > 0)
	{
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -25), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -55), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -85), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -115), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -145), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -175), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -205), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -235), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -265), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -295), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -325), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -355), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -10), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -40), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -70), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -100), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -130), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -160), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -190), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -220), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -250), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -280), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -310), "Bullet");
		ObjMgr->AddObject(new Bullet(Vec2(m_Position.x, m_Position.y), m_Speed, -340), "Bullet");

		m_So = 0;
		a = 0;

	}

	if (m_So1 >= 0.7 && s_Delay >= 3 && GameMgr::GetInst()->m_blockHp > 0)
	{
		ObjMgr->AddObject(new Bullet1(m_Position), "Bullet1");
		m_So1 = 0;
	}

	if (GameMgr::GetInst()->m_blockHp < 1)
	{
		SetDestroy(true);
	}

	if (s_Delay >= 3)
	{
		Move();
	}
	
}

void Shot::Redner()
{
}

void Shot::OnCollision(Object* other, std::string tag)
{
}

void Shot::Move()
{
	if (h == 0)
	{
		m_Position.x -= 200 * dt;

		if (m_Position.x <= 100)
		{
			h = 1;
		}
	}

	else if(h == 1)
	{
		m_Position.x += 200 * dt;

		if (m_Position.x >= 1820)
		{
			h = 0;
		}
	}
}
