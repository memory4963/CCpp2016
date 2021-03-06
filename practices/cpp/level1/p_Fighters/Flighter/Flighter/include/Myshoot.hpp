#pragma once

#include"Flying.hpp"
#include"Enemy.hpp"

class Myshoot:public Flying
{
public:
	Myshoot(float x,float y, int times);
	~Myshoot();
	template<typename T>
	void collision(T *t[],int i);
	template<typename T>
	bool ifcollide(T *t);
	int times;
	sf::Time gettimeNow();

private:

};

template<typename T>
inline void Myshoot::collision(T * t[], int i)
{
	for (size_t j = 0; j < i; j++)
	{
		if (t[j] != NULL && (t[j]->getIfboom() == 0))
		{
			if (ifcollide<T>(t[j]))
			{
				t[j]->setColor(sf::Color(255, 255, 255, 80));
				t[j]->times -= times;
				this->times = 0;
			}
		}
	}
}

template<typename T>
bool Myshoot::ifcollide(T *t)
{
	return sqrt((t->getX() - this->getX())*(t->getX() - this->getX()) + (t->getY() - this->getY())*(t->getY() - this->getY())) <= t->getRadius() + this->getRadius();
}
