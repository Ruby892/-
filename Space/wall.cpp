#include "stdafx.h"
#include "wall.h"

wall::wall(float posx, float posy)
{
	m_wall = Sprite::Create(L"Painting/wall.png");
	m_wall->SetParent(this);
	SetPosition(posx, posy);
}

wall::~wall()
{
}

void wall::Render()
{
	m_wall->Render();
}

void wall::Update(float dateTime, float time)
{
	
}

void wall::Oncollision(Object* other, std::string tag)
{

}
