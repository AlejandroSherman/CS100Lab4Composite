#ifndef _Div_HPP_
#define _DIV_HPP_

#include "op.hpp"
using namespace std;
class Div : public Base {
	public:
		Div( Base* left, Base* right) : Base()
		{
			lstring = left -> stringify();
			rstring = right -> stringify();
			ldouble = left -> evaluate(); 
			rdouble = right -> evaluate(); 
		}		
		virtual double evaluate()
		{
			return(ldouble / rdouble);
		}
		virtual string stringify()
		{
			return (lstring + " / " + rstring); 
		}			
	private:
		string lstring; 
		string rstring; 
		double ldouble; 
		double rdouble; 
};

#endif
