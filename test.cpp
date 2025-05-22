#include <iostream>
#include <string>
#include <cmath>
using namespace std ;

// enum level
// {
//   low ,
//   mid ,
//   high,
// };

// struct students
// {
//   string name ;
//   int age ;
//   char grade ;
// };
// void myfunction()
// {
//   int row = 5;
//   int space ;
//   for( int i = 0 ; i<=row  ; i++)
//   {
//     for(space = 1 ; space <= row - i ; space++)
//     {
//       cout << " " ;
//     }
//    for(int j = 1 ; j<=2*i-1 ; j++)
//    {
//     cout << "*";
//  }
//   cout << "\n";
//   }

 
//   for(int i = row ; i>= 0 ; i --)
//    {
//      for( space = 1 ; space <= row-i ; space ++)
//     {
//     cout << " ";
//     }
//     for( int j = 1 ; j<=2*i - 1 ; j++)
//    {
//          cout << "*";
//     }
//     cout << "\n" ;
//   }

//   return ;

// }

// void swapping(string &str)
// {
//   str += "world";
// }

// void arrayofnum(int num[5])
// {
//   for(int i = 0; i <5; i++)
//   {
//     cout << num[i] ;
//   }
//   cout << "\n";
// }
// struct car {
//   string brand ;
//   int num;
//   char color_code;
// };

// void myfunc(car c){
//   cout << "brand :" << c.brand << "\n" <<"num : " << c.num << "\n" << "color_code :" << c.color_code ; 
// }

// int sum(int k )
// {
//   if(k >= 0)
//   {
//     return k + sum(k-1);
//   }
//   else
//   {
//    return -1; 
//   }
//   return 0 ;
// }

// class my{
//   public :
//   int x ;
//   int y ;
// };

// class book
// {
//   public :
//   string title ; 
//   string author;
//   int year;
// };

int main()
{ 
  //  book s1;
  //  s1.title = "matilda";
  //  s1.author = "ronald dahl";
  //  s1.year = 1988;

  //  book s2;
  //  s2.title = "the giving tree";
  //  s2.author = "ronald dahl";
  //  s2.year = 1988;

  //  cout << s1.title << "," << s1.author << ","<< s1.year << "\n" ;
  //  cout << s2.title << "," << s2.author << ","<< s2.year << "\n" ;

  // my obj;
  // obj.x = 10;
  // obj.y = 20 ;

  // my obj1;
  // obj1.x = 20;
  // obj1.y = 30;
  // cout << obj.x << "" << " " << obj.y << "\n";
  // cout << obj1.x << "" << " " << obj1.y ;
  // int result = sum(10);
  // cout << result;  

  // car mycar = {" tim" , 2020 , 'r'};
  // myfunc(mycar);
  

  //  int num2[] ={10,20,50,30,60};
   
  //  int num3[] ={10,20,50,30};
   
  //  int num4[] ={10,20,50,30,60,40};
   

  //  arrayofnum(num2);
  //   arrayofnum(num3);
  //    arrayofnum(num4);
    
 
  //  string ptr = " hello ";
  //  string ptr1 = " hiii ";
  //  string ptr2 = " hey ";
  //  swapping(ptr);
  //  swapping(ptr1);
  //  swapping(ptr2);   

  //  cout << ptr << "\n" ;
  //  cout << ptr1 << "\n" ;
  //  cout << ptr2 << "\n" ;
  //  int first_num = 10;
  //  int sec_num = 20 ;

  //  cout << " phle " << first_num << sec_num << "\n";

  //  swapping(first_num , sec_num);
  //  cout<< "abb "<<first_num << sec_num << " \n";


  // string food = "apple ";
  // string *ptr = &food;

  //cout << *ptr <<" " << ptr;

  // string color[] = { "red" , "blue " , "black"} ;

  // cout << &color[1];

  
//  enum level level1 = low ;
//    cout << level1;

//   students student1;
//   student1.name = "Liam";
//   student1.age = 35;
//   student1.grade = 'A';

//   cout << "Name: " << student1.name << "\n";
//   cout << "Age: " << student1.age  << "\n";
//   cout << "Grade: " << student1.grade  << "\n";

  // int x ; 
  // int y ;
  // int z ;
  // float sum ;
  // float avrg ;

  // cout << "enter the number :" ;
  // cin >> x ;
  // cout << "\n";
  // cout << "enter the number :" ;
  // cin >> y ; 
  // cout << "\n";
  // cout << "enter the number :" ;
  // cin >> z ;
  // cout << "\n";

  // int number[] = {x , y , z};
  // int len = sizeof(number) / sizeof(number[0]);
  // cout << len ;
  // cout << "\n";
  // sum = x+y+z ;
  // cout << sum << "\n" ; 
  // avrg = sum / len ;

  // cout << avrg ;

//  string color[] = {"red" , "black" , "blue" , "green" , "white"};
//  color[4] = "cotton";
//  for(int i=0 ; i<5;i++)
//  {
//  cout << color[i] << "\n" ;
//  }

  // int i ;
  // int j ;
  // int row = 5 ;
  // int space ;
  
  // for(i = 0 ; i<= row ; i ++)
  // {
  //   for( space = 1 ; space <= row-i ; space ++)
  //   {
  //     cout << " ";
  //   }
  //   for( j = 1 ; j<=2*i - 1 ; j++)
  //   {
  //     cout << "*";
  //   }
  //   cout << "\n" ;
  // }


//    int x ;
//    int age ;
//    int voteage = 18 ;
//    cout << "enter the age\n " ;
//    cin >> age ;
//     x = age >= voteage;
//     if ( x = 1)
//     {
//    cout  << "\nyou are eligible \n";
//     }
//     else
//     {
//      cout << "\nyou are not eligible \n";
//     }
//   float x;
//   float y ;
//   float sum;
//   cout << "enter the x ";
//   cin >> x ;
//   cout << "enter the y";
//   cin >> y ;

//  cout << sqrt(x + y) << "\n";
//  cout << x/y<< "\n" ;
//  sum = x+y; 
//  cout << "avrg" << sum /2 << "\n" ;
//  cout << round(x/y) << "\n";
//  cout << log(x) << "\n";


    // char lsb;
    // char msb;
    // char  dl[2];
    // string txt = "hello";
    // cout << txt.at(0) << "\n";
    // txt.at(0 ) = 's';
    // // cout  << txt[txt.size() -1] << "\n";
    // // cout << "changed string will be : " << txt;

    // lsb = txt[txt.size()-1];
    // msb = txt[txt.size()-2];
    // cout << lsb <<" \n" << msb << "\n";
    // dl[0]= msb;
    // dl[1] = lsb;
    // cout << dl;

    return 0 ; 
}