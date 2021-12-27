
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Person
{
    public:
        string name;
        int age ;
        string cur_id ;
        Person(){
        	age = 0;
        	cur_id = "1";
        }
		virtual ~Person()
		{

		}
        virtual void getdata() = 0;       //zero refers to that fun.is pure virtual function
        virtual void putdata() = 0;
};
class Professor : public Person
{
    public:
		Professor()
		{
			static int  i = 1;
			cur_id = to_string(i);
			i ++;
		}
       string publications;
       void getdata()
       {
    		std::cin >> name >> age >> publications;

       }
       void putdata()
       {
    	   std::cout << name << " " << age << " " << publications << " " << cur_id << endl;
       }
       ~Professor()
		{

		}

};
class Student : public Person
{
    public:
		Student()
			{
				static int  j = 1;
				cur_id = to_string(j);
				j ++;
			}
		~Student()
		{

		}
        int marks[6];
    	  int sum = 0;

        void getdata()
        {
        	std::cin >> name >> age;
        	  for (int i = 0; i < 6; i++)
        	  {
        		  std::cin >> marks[i];
        	  		sum += marks[i];
        	  }
        }
        void putdata()
        {

        	std::cout << name << " " << age << " " << sum << " " << cur_id << endl;

        }
};
int main()
{
	 int n, val;
	 std::cin >> n; //The number of objects that is going to be created.
	    Person *per[n];

	    for(int i = 0;i < n;i++){
	        cin>>val;
	        if(val == 1){
	            // If val is 1 current object is of type Professor
	            per[i] = new Professor;

	        }
	        else per[i] = new Student; // Else the current object is of type Student

	        per[i]-> getdata(); // Get the data from the user.

	    }

	    for(int i=0;i<n;i++)
	        per[i]->putdata(); // Print the required output for each object.

	    return 0;

}

