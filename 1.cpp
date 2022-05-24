#include <string> 
#include <vector> 
#include <iostream>
#include <fstream>
using namespace std;

class Man {
public:
	string country, name;
	int age;

	void print_information() {
		cout << "Your Name: " << name << '\n';
		cout << "Your Age: " << age << '\n';
		cout << "Your Country: " << country << '\n';
	}
};
class footbaler {
public:
	string team;
	double skill_value;

	bool good_footbolist() {
		if (skill_value > 20) {
			return true;
		}
		else {
			return false;
		}
	}
};
class justfot : public Man, public footbaler{
public:
	justfot(string country, string name, string type_of_bow, int age, double skill_value) {
		this->country = country;
		this->name = name;//
		this->team = type_of_bow;//
		this->age = age;//
		this->skill_value = skill_value;
	}

	void to_file() {
		ofstream out("info.txt");
		out << get_info();
	}
	void to_console() {
		cout << get_info();
	}

private:
	string get_info() {
		string s1 = "Your name: " + name + "\n Your tean is: " + team + "\n Your age is: " + to_string(age)
			+ "\n Your skill value is: " + to_string(skill_value) + "\n Your country: " + country;

		if (good_footbolist()) {
			s1 += "\n\n\n You are cool footbolist";
		}
		return s1;
	}
};

int main() {
	justfot ball("Russia", "ARSHAWIN", "Arsenal", 20, 21);
	ball.to_console();
	ball.to_file();
	cout << endl;
	int arr[5] = { 1,123,3,3,5 };
	
	

}