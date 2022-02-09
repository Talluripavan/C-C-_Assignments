#pragma once
//contains Square methods move() scale() rotate()
#include <iostream>
#include "Shape.h"

using namespace std;

class Square : public Shape
{
public:

   Square()
   {
   };
   Square(int base, int height)
   {

      m_base = base;
      m_height = height;

      // m_prev_base = m_base;
      // m_prev_height = m_height;

      // m_name = "Square";
      // m_id = "ID";
      //cout<<"HEllo"<<endl;
      undoRedostate.push_back(make_pair(m_base,m_height));
      undoRedostate_ptr++;
      cout << "Square created length=" << m_base << ", bredth=" << m_height << endl;
   }

   void move(int base, int height);
   void scale(int k);
   void rotate(int degree);
};

void Square::move(int x, int y)
{
   //cout<<m_base<<" "<<m_height<<"-"<<m_prev_base<<" "<<m_prev_height<<endl;
   // m_prev_base = m_base;
   // m_prev_height = m_height;


   m_base += x;
   m_height += y;
   undoRedostate.push_back(make_pair(m_base,m_height));
   undoRedostate_ptr++;
   //std::cout << "Move operation done by " << m_base  << ", " << m_height << std::endl;
   std::cout << "Move operation(Square) done "<<"leength="<< m_base  << " ,bredth=" << m_height << std::endl;

}


void Square::scale(int k)
{

   // m_prev_base = m_base;
   // m_prev_height = m_height;

   m_base *= k;
   m_height *= k;
   undoRedostate.push_back(make_pair(m_base,m_height));
   undoRedostate_ptr++;
   //std::cout << "Scalling operation done by "<< k << " "<< m_base << ", " << m_height << std::endl;
   std::cout << "Scalling operation(Square) done by "<<k<< " length="<< m_base << ", bredth= " << m_height << std::endl;

}


void Square::rotate(int degree)
{
   // m_prev_base = m_base;
   // m_prev_height = m_height;
   
   m_base+=degree;
   m_height+=degree;
    undoRedostate.push_back(make_pair(m_base,m_height));
    undoRedostate_ptr++;
   //std::cout << "Scalling operation done by " <<degree<<" "<<m_base<<" "<<m_height<<std::endl;
   std::cout << "Rotate operation(Square) done by " <<degree<<" length="<<m_base<<" ,bredth= "<<m_height<<std::endl;

}