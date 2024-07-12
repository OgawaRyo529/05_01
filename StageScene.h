#pragma once
#include "IScene.h"
#include "Vector2.h"
#include "Player.h"
#include "Enemy.h"

class StageScene:public IScene
{
public:
	~StageScene();
	void Init()override;
	virtual void Update(char* keys, char* preKeys)override;
	virtual void Draw()override;

public:
	Player* player_;
	Enemy* enemy_;
};