#include <iostream>
#include <string>
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
	virtual void Print()
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
	string brand;
	string model;
	string engine;
	double horsepower;
	double speed;
public:
	SportCar() { speed = 0.0; horsepower = 0; }
	SportCar(string b, string md, string e, double hp, string m, string c, double w, double p) : Car(m, c, w, p)
	{
		brand = b;
		model = md;
		engine = e;
		horsepower = hp;

	}

	void SetBrand(string b)
	{
		brand = b;
	}
	string GetBrand()
	{
		return brand;
	}

	void SetModel(string md)
	{
		model = md;
	}
	string GetModel()
	{
		return model;
	}

	void SetEngine(string e)
	{
		engine = e;
	}
	string GetEngine()
	{
		return engine;
	}

	void SetHorsePower(double hp)
	{
		horsepower = hp;
	}
	double GetHorsePower()
	{
		return horsepower;
	}
	string GetColor() const 
	{
		return color;
	}
	double GetSpeed() const 
	{
		return speed;
	}
	void Print()
	{
		Car::Print();
		cout <<"brand:" << brand << "\tmodel: " << model << "\tengine:" << engine << "\thorse power: " << horsepower << endl;
	}
};

class RetroCar : public Car {
protected:
	string year;
	string country;
	string type;
	double speed;
public:
	RetroCar() { speed = 0.0; }
	RetroCar(string y, string ct, string t, string m, string c, double w, double p) : Car(m, c, w, p)
	{
		year = y;
		country = ct;
		type = t;
	}

	void SetYear(string y)
	{
		year = y;
	}
	string GetYear()
	{
		return year;
	}

	void SetCountry(string ct)
	{
		country = ct;
	}
	string GetCountry()
	{
		return country;
	}

	void SetType(string t)
	{
		type = t;
	}
	string GetType()
	{
		return type;
	}
	virtual string GetColor() const
	{
		return color;
	}
	virtual double GetSpeed() const
	{
		return speed;
	}
	void Print()
	{
		Car::Print();
		cout << "year:" << year << "\tcountry: " << country << "\ttype:" << type << endl;
	}
};



int main()
{
	Car* car = nullptr;

	int choice = 0;

	cout << "1. Sport car" << endl;
	cout << "2. Retro car" << endl;
	cout << "Make your choice: ";

	cin >> choice;

	switch (choice)
	{
	case 1:
		car = new SportCar("Ferrari", "488 Spider", "V8", 660, "Aluminum", "Red", 1475, 280000);
		break;
	case 2:
		car = new RetroCar("1967", "USA", "Muscle Car", "Steel", "Blue", 1600, 35000, "120");
		break;
	}

	car->Print();
	cout << "Color: " << car->GetColor() << ", Speed: " << car->GetSpeed() << endl;

}