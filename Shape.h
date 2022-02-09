#pragma once
//contains shape() class and undo() redo() implementations
#include <iostream>
#include <string>
#include<vector>

using namespace std;

class Shape
{

public:
   double m_base, m_height;
  
   //undo() redo() undoRedostate storing in "undoRedostate"
   vector <pair<double,double>> undoRedostate;//for storing function calls
   int undoRedostate_ptr=-1;// for tracking undo() redo()
   
   virtual void display()
   {
      std::cout << m_base << " "<< m_height << std::endl;
   }

   virtual void undo()//implementing undo()
   {
      if (0<undoRedostate_ptr && undoRedostate_ptr<=undoRedostate.size()){
      undoRedostate_ptr--;
      cout<<"After UNDO Operation performed length="<<undoRedostate[undoRedostate_ptr].first<<", bredth="<<undoRedostate[undoRedostate_ptr].second<<endl;
      }else
      cout<<"UNDO NOT POSSIBLE!"<<endl;
   }

   virtual void redo()//implementing redo()
   {
      if (undoRedostate.size()==undoRedostate_ptr+1){
         cout<<"REDO NOT POSSIBLE!"<<endl;
      }else{
      if (0<=undoRedostate_ptr && undoRedostate_ptr<undoRedostate.size()){
         undoRedostate_ptr++;
      cout<<"After REDO Operation performed length="<<undoRedostate[undoRedostate_ptr].first<<", bredth="<<undoRedostate[undoRedostate_ptr].second<<endl;
      }else
      cout<<"REDO NOT POSSIBLE!"<<endl;

      }
      }
      //cout<<"HEllo"<<endl;
};