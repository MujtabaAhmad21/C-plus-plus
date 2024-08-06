//#include <iostream>
//using namespace std; 
//
//class myFather
//{
//protected:
//	string name, eye_color, hair_color;
//public:
//	myFather()
//	{
//		name = eye_color = hair_color = "";
//	}
//	void setName(string n)
//	{
//		name = n;
//	}
//	void setEyeColor(string eye)
//	{
//		eye_color = eye;
//	}
//	void setHairColor(string h)
//	{
//		hair_color = h;
//	}
//	string getName()
//	{
//		return name;
//	}
//	string getEyeColor()
//	{
//		return eye_color;
//	}
//	string getHair()
//	{
//		return hair_color;
//	}
//	void print()
//	{
//		cout << "Name = " << name << endl;
//		cout << "Eye color = " << eye_color << endl;
//		cout << "Hair color = " << hair_color << endl;
//	}
//};
//
//class myMother
//{
//protected:
//	string name, eye_color, hair_color;
//public:
//	myMother()
//	{
//		name = eye_color = hair_color = "";
//	}
//	void setName(string n)
//	{
//		name = n;
//	}
//	void setEyeColor(string eye)
//	{
//		eye_color = eye;
//	}
//	void setHairColor(string h)
//	{
//		hair_color = h;
//	}
//	string getName()
//	{
//		return name;
//	}
//	string getEyeColor()
//	{
//		return eye_color;
//	}
//	string getHair()
//	{
//		return hair_color;
//	}
//	void print()
//	{
//		cout << "Name = " << name << endl;
//		cout << "Eye color = " << eye_color << endl;
//		cout << "Hair color = " << hair_color << endl;
//	}
//};
//
//class mySelf : public myFather
//{
//	string Education;
//	int age;
//public:
//	mySelf()
//	{
//		Education = "";
//		age = 0;
//	}
//	void setEducation(string e)
//	{
//		Education = e;
//	}
//	void setAge(int a)
//	{
//		age = a;
//	}
//	string getEducation()
//	{
//		return Education;
//	}
//	int getAge()
//	{
//		return age;
//	}
//	void print()
//	{
//		myFather::print();
//		cout << "Education = " << Education << endl;
//		cout << "Age = " << age << endl;
//	}
//};
//
//class mySister : public myFather , public myMother
//{
//	string Education;
//	int age;
//public:
//	mySister()
//	{
//		Education = "";
//		age = 0;
//	}
//	void setEducation(string e)
//	{
//		Education = e;
//	}
//	void setAge(int a)
//	{
//		age = a;
//	}
//	string getEducation()
//	{
//		return Education;
//	}
//	int getAge()
//	{
//		return age;
//	}
//	void print()
//	{
//		myMother::print();
//		cout << "Education = " << Education << endl;
//		cout << "Age = " << age << endl;
//	}
//};
//
//int main()
//{
//	mySelf obj1;
//	obj1.setName("Mujtaba");
//	obj1.setEyeColor("Brown");
//	obj1.setHairColor("Black");
//	obj1.setAge(19);
//	obj1.setEducation("BSCS");
//	cout << "-------- MYSELF DETAILS --------" << endl;
//	obj1.print();
//
//	mySister obj2;
//	obj2.myMother::setName("Numra");
//	obj2.myMother::setEyeColor("Black");
//	obj2.myMother::setHairColor("Brown");
//	obj2.setEducation("Medical");
//	obj2.setAge(18);
//	cout << "-------- MYSISTER DETAILS --------" << endl;
//	obj2.print();
//
//	system("pause");
//	return 0;
//}