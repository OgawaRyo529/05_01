#pragma once
#include "IScene.h"

class ClearScene:public IScene 
{
public:
	void Init()override;
	virtual void Update(char* keys, char* preKeys)override;
	virtual void Draw()override;
};
