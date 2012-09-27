#include <iostream>
#include "scm2cpp.hpp"

using namespace scm2cpp;

template<typename T>  
void print (const T &elem)
{
  std::cout << elem << ' ';
}


int main()
{
  double double_array[5]={0.1,1.1,2.2,3.3,4.4};
  car(double_array);

  
  std::list<double> lst;
  lst.push_back(1.1);  
  car(lst);

  std::list<double> vec;
  vec.push_back(1.1);  
  car(vec);

  //boost::array<double,4> boost_ar;
  //car(boost_ar);
  
  

  car(cons("aa",12));
  car(std::make_pair("aa",12));

  boost::fusion::list<int,double,char> lstf=boost::fusion::make_list(2, 3.14, 'c');  
  car(lstf);


  boost::ptr_list<double, boost::view_clone_allocator> lstp;
  double d=1.2;
  lstp.push_front(&d);
  car(lstp);



  boost::ptr_list<double, boost::view_clone_allocator> lstp2=cons(1.1,lst);
  boost::fusion::list<int,int,double,char> lstf2=cons(2,lstf);



  std::pair<std::string,int> psi=cons("abc",3);


  list_ref(lst,0);

  std::cout << 
    car(lst) 
	    <<std::endl;

}
