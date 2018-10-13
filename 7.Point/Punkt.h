#pragma once

class Punkt
{
public:
	Punkt(const int x, const int y):p_x(x), p_y(y){}
	
	template <int T>
	int wsp() const 
	{
		return T ? p_y : p_x;
	} 

	template <typename T> 
	static T min(T first, T second)
	{
		return first < second ? first : second;
	}

	template <typename T> 
	static T max(T first, T second) 
	{
		return first < second ? second : first;
	}

	bool operator < (const Punkt &toCompare) const
	{
		return p_x == toCompare.p_x ? p_x > toCompare.p_x : p_y > toCompare.p_y;
	}

private:
	int p_x, p_y;		
};