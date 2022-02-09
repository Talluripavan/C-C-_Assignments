#pragma once
//contains Rectangle methods move() scale() rotate()
#include <iostream>
#include "Shape.h"

using namespace std;

class Rectangle : public Shape
{
public:
   Rectangle(int base, int height)
   {
      m_base = base;
      m_height = height;

       undoRedostate.push_back(make_pair(m_base,m_height));
       undoRedostate_ptr++;
      cout << "Rectangle created length="<< m_base << ", bredth=" << m_height << endl;
   }

   void move(int base, int height);
   void scale(int k);
   void rotate(int degree);
};

void Rectangle::move(int x, int y)
{
   m_base += x;
   m_height += y;
   undoRedostate.push_back(make_pair(m_base,m_height));
   undoRedostate_ptr++;
   std::cout << "Move operation(Rectangle) done "<<"length="<< m_base  << " ,bredth=" << m_height << std::endl;
}


void Rectangle::scale(int k)
{

   // m_prev_base = m_base;
   // m_prev_height = m_height;

   m_base *= k;
   m_height *= k;
    undoRedostate.push_back(make_pair(m_base,m_height));
    undoRedostate_ptr++;
   std::cout << "Scalling operation(Rectangle) done by "<<k<< " length="<< m_base << ", bredth= " << m_height << std::endl;
}


void Rectangle::rotate(int degree)
{
   // m_prev_base = m_base;
   // m_prev_height = m_height;
   
   m_base+=degree;
   m_height+=degree;
    undoRedostate.push_back(make_pair(m_base,m_height));
    undoRedostate_ptr++;
   std::cout << "Rotate operation(Rectangle) done by " <<degree<<" length="<<m_base<<" ,bredth= "<<m_height<<std::endl;
//cout<<"HEllo"<<endl;
}