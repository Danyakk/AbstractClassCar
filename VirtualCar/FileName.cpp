#include <iostream>
#include <string>;
using namespace std;

class Car {
protected:
	string material;
	string color;
	double weight;
	double price;
public:
	Car() { weight = 0; price = 0; }
	Car(string m, string c, double w, double p)
	{
		material = m;
		color = c;
		weight = w;
		price = p;

	}
	void Print()
	{
		cout << "Material: " << material << "Color:" << color << "Weight: " << weight << "Price:" << price << endl;
	}
	void SetMaterial(string m)
	{
		material = m;
	}
	string GetMaterial()
	{
		return material;
	}

	void SetColor(string c)
	{
		color = c;
	}
	string GetColor()
	{
		return color;
	}

	void SetWeight(double w)
	{
		weight = w;
	}
	double GetWeight()
	{
		return weight;
	}

	void SetPrice(double p)
	{
		price = p;
	}
	double GetPrice()
	{
		return price;
	}

	virtual string GetColor() const = 0;
	virtual double GetSpeed() const = 0;

};

class SportCar : public Car {
protected:
	double speed;
	string brand;
	string model;
	string engine;
	double horsepower;
public:
	SportCar() { weight = 0; price = 0; }
	SportCar(double s, string b, string md, double e, double hp, string m, string c, double w, double p) : Car(m, c, w, p)
	{
		speed = s;
		brand = b;
		model = md;
		horsepower = hp;

	}
	void Print()
	{
		cout << "speed: " << speed << "brand:" << brand << "model: " << model << "engine:" << engine << "horse power: " << horsepower << endl;
	}


};




int main()
{

}