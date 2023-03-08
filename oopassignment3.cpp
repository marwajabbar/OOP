#include<iostream>
using namespace std;
class student
{
public:
	int SAPID;
	int Semester;
	string Name;
	float GPA;
	bool isfemale;
	student ()
	{
		SAPID = 1;
		Semester = 1;
		Name = "   ";
		GPA = 0.0;
		isfemale = true;	
	}
	student (int SAPID,string Name,int Semester,float GPA,bool isfemale)
	{
		this-> SAPID = SAPID;
		this-> Name = Name;
		this-> Semester = Semester;
		this-> GPA = GPA;
		this-> isfemale = isfemale;
	}
	student (int SAPID,string Name)
	{
		this-> SAPID = SAPID;
		this-> Name = Name;
	}
	student (int SAPID,string Name,float GPA)
	{
		this-> SAPID = SAPID;
		this-> Name = Name;
		this-> GPA = GPA;
	}
	student (int SAPID,string Name,bool ismale)
	{
		this-> SAPID = SAPID;
		this-> Name = Name;
		this-> isfemale =isfemale;
	}
	student ( student & std )
	{
		SAPID = std.SAPID;
		Name = std.Name;
		Semester = std.Semester;
		GPA = std.GPA;
		isfemale = std.isfemale;
	}
	~student ()
	{
		cout<<"Distructer block is running"<<endl;
	}
};

int main()
{
	student s1;
	s1.SAPID = 47129;
	s1.Name = "MARWA JABBAR";
	s1.Semester = 2;
	s1.GPA = 2.0;
	s1.isfemale = true;
	cout<<s1.SAPID<<endl;
	cout<<s1.Name<<endl;
	cout<<s1.Semester<<endl;
	cout<<s1.GPA<<endl;
	cout<<s1.isfemale;
	return 0;	
}