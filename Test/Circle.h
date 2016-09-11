#pragma once
class Circle : private ofApp
{
public:
	int pulseSpeed, minPulseSpeed, maxPulseSpeed, lifetime, minLifetime, maxLifetime, lifetimeCounter, minSpeed, maxSpeed;
	//The time in seconds a circle stays active before expiring.
	//The minimum and maximum lifetime of a circle.
	//The speed at which the circle expands and retracts in seconds/full cycle.
	//The minimum and maximum values for both x and y speeds
	
	float  radius;
	//The base radius of the circle.

	struct Vector2 {
		float x;
		float y;
	}position, speed;
	//Current position of the circle.
	//The distance the circle travels every frame in px/second. This also indicates the direction the circle is moving.

	struct color {
		int R;
		int G;
		int B;
		float A;
	}centerColor, outsideColor;
	//Colors for the inside and outside of the circle in RGB and Alpha values.
	
	Circle(Vector2);
	//Calls SetValues to set the base values. See SetValues.

	void SetValues(Vector2);
	//Sets position to tempPosition, received from Spawner.
	//Sets centerColor to white (0,0,0,1).
	//Sets radius.
	//Sets lifetime, pulseSpeed, speed and outsideColor to appropriate random values.

	void Update();
	//Changes position according to speed.
	//Makes radius go from 1 to 0 and back repeatedly, according to pulseSpeed.
	//Adds 1 to lifetimeCounter.
	//If lifetimeCounter >= lifetime calls the destructor.

	void Draw();
	//Draws outer circle.
	//Draws inner circle.

	~Circle();
	//Deletes circle and cleans up the mess.
};

