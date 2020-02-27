#pragma once

#include "Framework/GameObject.h"
#include "Bullet.h"

class Player : public GameObject
{
public:
	Player();
	~Player();

	void handleInput(float dt);
	Bullet* getBullet() {
		return &bullet;
	};

	bool fire = false;

private:
	Bullet bullet;
};