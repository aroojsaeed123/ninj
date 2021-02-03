#include <iostream>
#include<iomanip>
#include<string>
using namespace std;

class time()
{
  int m,s,h;
  void get(int p,int q, int r)
  {
    h=p;
    m=q;
    s=r;
  }
  void display()
  {
    
  }
  void clock_12()
  {
     std::cout << h <<":" <<m<<":" <<s;
    }
   void clock_24(){
     hh = h *10 + h%10;
   }

}

int main(){
    int p,q,r;
    string clock_12;
    string clock_24;
    time t;
   bool Button_pressed;
   std::cout <<"clear screen" << std::endl;
   while(Button_pressed == true)
   {  std::cin >> Button_pressed;
      if (Button_pressed= 'N'){
        r = r+1;
        std::cout << "Clear screen"<< std::endl;
        }
       else if (Button_pressed ='Y'){
        std::cout <<"Menu:" << std::endl;
        std::cout <<"User input:" << std::endl;
        cin>>user_input;
        if (user_input = 'Y'){
         exit;
         }
         else if(user_input ='N'){
           std::cout << "Do you want to add an hour?" << std::endl;
           cin>> input;
           if (input =='Y'){
            p = p+1;
            break;
           }
           else if (input =='N'){
              std::cout << "Do you want to add a minute?" << std::endl;
              std::cin>> input;
              if (input =='Y'){
                q = q+1;
                 break;
               }  
               else if (input =='N'){
                   std::cout << "Do you want to add a second?" << std::endl;
                    std::cin>> input;
                   if (input =='Y'){
                    r = r+1;
                     break;
                      }
                    else
                    {
                      break;
                      }  
   std::cout << std::string (23, '*')<<"          "<< std::string (23, '*')<< std::endl; 
   std::cout << "*    12-hour Clock    *" <<"          "<<"*    24-hour Clock    *" << std::endl;
   std::cout<< "*     "<<clock_12<<"    *"<<"          "<<"*     "<<clock_24<<"    *"<< std::endl;
   std::cout << std::string (23, '*') <<"          "<< std::string (23, '*')<< std::endl; 
   
   t.get(p,q,r);
   t.display();
   t.clock_12;
   t.clock_24;
   return 0;
}