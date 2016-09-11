#include "Circle.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

Circle::Circle(Vector2 tempPosition)
{
	SetValues(Vector2 tempPosition);
	srand(time(NULL));
}

//STEP RIGHT UP FOLKS, SET YA VALUES HERE
void Circle::SetValues(Vector2 tempPosition)
{
	position = tempPosition;

	centerColor.R = 256;
	centerColor.G = 256;
	centerColor.B = 256;
	centerColor.A = 1;

	radius = 2.5;

	minLifetime = 1;
	maxLifetime = 6;
	lifetime = rand() % (maxLifetime - minLifetime) + minLifetime + 1;

	minPulseSpeed = 1;
	maxPulseSpeed = 3;
	pulseSpeed = rand() % (maxPulseSpeed - minPulseSpeed) + minPulseSpeed + 1;

	minSpeed = -2;
	maxSpeed = 2;
	speed.x = rand() % (maxSpeed - minSpeed) + minSpeed + 1;
	speed.y = rand() % (maxSpeed - minSpeed) + minSpeed + 1;

	outsideColor.R = rand() % 257;
	outsideColor.G = rand() % 257;
	outsideColor.B = rand() % 257;
	outsideColor.A = 0.4;
}

void Circle::Update()
{
	position.x += speed.x / 60;
	position.y += speed.y / 60;
}

void Circle::Draw()
{
}

Circle::~Circle()
{
}
