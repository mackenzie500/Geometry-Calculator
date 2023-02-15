#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

int main() 
{
  cout << "Geometry Calculator\n";
  
  int choice, radius,length, width, base, height;
  const float PI = 3.14159;
  float area;
  
  cout << "1. Calculate the Area of a Circle\n" 
       << "2. Calculate the Area of a Rectangle\n" 
       << "3. Calculate the Area of a Triangle\n" 
       << "4. Quit\n";
  
  cout << "Enter your choice (1 - 4 ): \n";
   cin >> choice;



if ((choice >= 1) && (choice <= 3))
{
  switch (choice)
    {
      case 1: cout << "What is the radius?\n";
              cin >> radius;
        
        if (radius < 0)
          cout << "The radius must be greater than 0\n" 
               << "Run the program again\n";
          
        else
        {
          area = PI * pow(radius, 2.0);
          cout << "The area is " << fixed << showpoint 
               << setprecision(5)<< area << endl;
        }
        
          break;
      
      case 2: cout << "What is the length\n";
              cin >> length;
        
        if (length > 0) 
            {
                cout << "What is the width?\n";
                cin >> width;

                if (width > 0) 
                {
                    area = length * width;
                    cout << "The area of rectangle is " 
                         << area << endl; 
                }
                else 
                  cout << "Width must be an integer greater than 0\n" 
                       << "Run the program again\n"; 
            }
          else 
          cout << "Length must be an integer greater than 0\n" 
               << "Run the program again\n";     
        
          break;
      
      case 3: cout << "What is the length of the triangle's base?\n";
              cin >> base;

        if (base > 0)
        {
          cout << "What is the height\n";
          cin >> height;

            if (height > 0)
            {
              area = base * height * .5;
                cout << "The area is the triangle is " << area << endl;
            }
            else 
            cout << "Height must be an integer greater than 0\n" 
                 << "Run the program again\n";
        }
         
        else 
        cout << "The base must be an integer greater than 0\n" 
             << "Run the program again\n";
        
        break;
      
      }
  }
  
  else if (choice != 4)
	{	
    cout << "The valid choices are 1 through 4.\n";
		cout << "Run the program again and select one of these.\n";
	}
  
return 0;
}