// PaintConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Square.h"
#include "Rectangle.h"

int main()
{
   //std::cout << "Hello World!\n";
   // Square *square = new Square(2,5);
   // Rectangle *rect = new Rectangle(2,5);
   // square->scale(10);
   // rect->scale(10);
   // square->move(3,4);
   // rect->move(3,4);
   // square->undo();
   // rect->undo();
   //square->rotate(180);
   // square->undo();
   // square->redo();
   //rect->scale(10);
   //rect->move(3,4);
   //rect->rotate(180);
   //rect->undo();
   //rect->redo();
cout<<"Paint App()!"<<endl;
cout<<"1-for SCALE()"<<endl;
cout<<"2-for MOVE()"<<endl;
cout<<"3-for ROTATE()"<<endl;
cout<<"4-for UNDO()"<<endl;
cout<<"5-for REDO()"<<endl;
Square *square = new Square(2,5);
Rectangle *rect = new Rectangle(2,5);
int choice;
//int flag=1;
while (1)
{
    cout<<"Enter our choice above:";
    cin>>choice;
    switch (choice)
    {
    case 1:
        square->scale(10);
         rect->scale(10);
        break;
    case 2:
        square->move(3,4);
         rect->move(3,4);
        break;
    case 3:
        square->rotate(180);
        rect->rotate(180);
        break;
   case 4:
        square->undo();
         rect->undo();
        break;
    case 5:
        square->redo();
        rect->redo();
        break;
    default:
        break;
    }
}
return 0;
}
//cout<<"HEllo"<<endl;