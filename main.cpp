#include <iostream>

using namespace std;

enum TheClass {
	elite,
	sport,
	comfort,
	family,
	offRoad,
};

enum Color {
	black,
	white,
	yellow,
	gray,
	blue,
};

enum Position {
	rightHanded,
	leftHanded,
};

enum Mark {
	mercedes,
	nissan,
	toyota,
	bmw,
	jeep,
	mazda,
};

enum  Drive{
	fwd,
	rwd,
	awd,
};

string getTheClass(TheClass theClass) {
	switch (theClass) {
		case TheClass ::elite:
			return "elite";
		case TheClass ::sport:
			return "sport";
		case TheClass ::comfort:
			return "comfort";
		case TheClass ::family:
			return "family";
		case TheClass ::offRoad:
			return "off-road";
	}
}

string getPosition(Position position) {
	switch (position) {
		case Position::rightHanded:
			return "rightHanded";
		case Position::leftHanded:
			return "leftHanded";
	}
}

string getMark(Mark mark) {
	switch (mark) {
		case Mark::mercedes:
			return "mercedes";
		case Mark::nissan:
			return "nissan";
		case Mark::toyota:
			return "toyota";
		case Mark::bmw:
			return "bmw";
		case Mark::jeep:
			return "jeep";
		case Mark::mazda:
			return "mazda";
	}
}

string getDrive(Drive drive) {
	switch (drive) {
		case Drive::fwd:
			return "fwd";
		case Drive::rwd:
			return "rwd";
		case Drive::awd:
			return "awd";
	}
}

string getColor(Color color) {
	switch (color) {
		case Color::black:
			return "black";
		case Color::white:
			return "white";
		case Color::yellow:
			return "yellow";
		case Color::gray:
			return "gray";
		case Color::blue:
			return "blue";
	}
}

class Car {
private:
	Mark mark;
	string name;
	TheClass theClass;
	Position position;
	Drive drive;
	unsigned int hp;
	Color color;
public:
	Car(Mark mark, const string &name, TheClass theClass, Position position, Drive drive, unsigned int hp, Color color)
			: mark(mark), name(name), theClass(theClass), position(position), drive(drive), hp(hp), color(color) {}
	
	void showMeCar() {
		cout << "Mark: " << getMark(mark) << endl;
		cout << "Name: " << name << endl;
		cout << "Class: " << getTheClass(theClass) << endl;
		cout << "Position: " << getPosition(position) << endl;
		cout << "Drive: " << getDrive(drive) << endl;
		cout << "hp: " << hp << endl;
		cout << "Color: " << getColor(color) << endl;
	}
};

class CarBuilder {
private:
	Mark mark;
	string name;
	TheClass theClass;
	Position position;
	Drive drive;
	unsigned int hp;
	Color color;
public:
	void setMark(Mark mark) {
		CarBuilder::mark = mark;
	}
	
	void setName(const string &name) {
		CarBuilder::name = name;
	}
	
	void setTheClass(TheClass theClass) {
		CarBuilder::theClass = theClass;
	}
	
	void setPosition(Position position) {
		CarBuilder::position = position;
	}
	
	void setDrive(Drive drive) {
		CarBuilder::drive = drive;
	}
	
	void setHp(unsigned int hp) {
		CarBuilder::hp = hp;
	}
	
	void setColor(Color color) {
		CarBuilder::color = color;
	}
	
	Car *createCar() {
		return new Car(mark, name, theClass, position, drive, hp, color);
	}
};

int main () {
	Car *car;
	CarBuilder carBuilder;
	
	carBuilder.setMark(Mark::nissan);
	carBuilder.setName("Avenir Salut");
	carBuilder.setTheClass(TheClass::family);
	carBuilder.setPosition(Position::rightHanded);
	carBuilder.setDrive(Drive::rwd);
	carBuilder.setHp(125);
	carBuilder.setColor(Color::white);
	
	car = carBuilder.createCar();
	car->showMeCar();
}