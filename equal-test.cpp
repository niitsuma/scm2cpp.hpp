#include <iostream>
#include "scm2cpp.hpp"
//#include "../scm2cpp.hpp"


struct tstst
{
  int operator()(int x)
  {
    if( x>0 ){
      return x*x;
    }    
    else{
      //(this->())(x+1);
      std::cout << x << " " ;      
      (*this)(x+1);      
    }  
  } 
 
  //bool operator==(tstst& rhs) {return &rhs == this;}
  bool operator==(const tstst & rhs) const
  {
    return 
      true
      //& rhs == this 
      //(& rhs ) == (const tstst)(this )
      ;}
  //bool operator==(const tstst & lhs, const tstst & rhs ) {return &rhs == &lhs ;}
  //template <class T> valarray<bool> operator== (const valarray<T>& lhs, const valarray<T>& rhs);

}tststob,tststob2;

int main()
{

  struct aast : public tstst
  {
  };
  
  
    
  std::cout << "start" << std::endl;
  //std::cout << tstst()(3) << std::endl;
  std::cout << tststob(3) << std::endl;
  std::cout << tststob(-3) << std::endl;
  
  
  tststob==tststob2 ;

  scm2cpp::string_type st("st");
  scm2cpp::string_type st2("st2");
  scm2cpp::string_type st2b("st2");
  scm2cpp::symbol_type sy(st);
  scm2cpp::symbol_type sy2(st2);
  scm2cpp::symbol_to_string(sy);
  
  
  scm2cpp::symbol_type xxx("aaaa");
  std::cout << sy << std::endl;
  std::cout << scm2cpp::string_to_symbol(st) << std::endl;
  std::cout << scm2cpp::symbol_to_string(sy) << std::endl;
  
  std::cout << xxx << std::endl;
  
  //scm2cpp::symbol xxx="aaaa";
  //scm2cpp::symbol xxx((std::string("aaaa")));
  //scm2cpp::symbol xxx((std::string("aaaa")));
  //scm2cpp::symbol xxx = std::string("aaaa");
  //scm2cpp::symbol xxx;
  //xxx="aaaa";
  
  

  //scm2cpp::quoted<scm2cpp::symbol> qxxx("bbb");
  scm2cpp::quoted<int> q1(1);
  scm2cpp::quoted< scm2cpp::quoted<int> > q11(q1);


  scm2cpp::quoted<scm2cpp::symbol_type> qsy(sy);
  scm2cpp::quoted<scm2cpp::string_type> qst(st);

  scm2cpp::quoted<scm2cpp::quoted<scm2cpp::symbol_type> > qqsy(qsy);
  scm2cpp::quoted<scm2cpp::quoted<scm2cpp::string_type> > qqst(qst);

  //std::cout << qst.value == qst.value << std::endl;
  qst.value == qst.value; 

  scm2cpp::quoted<tstst> qtstst(tststob);
  scm2cpp::quoted<tstst> qtstst2(tststob2);
  scm2cpp::quoted<scm2cpp::quoted<tstst> > qqtstst(qtstst);
  scm2cpp::quoted<scm2cpp::quoted<tstst> > qqtstst2(qtstst2);




  
  //std::cout << qsy << std::endl;
  //std::cout << (qsy == sy) << std::endl;

  //scm2cpp::quoted<int> qi1(1);
  

  //std::cout << scm2cpp::is_equal(1,1) << std::endl;
  //std::cout << scm2cpp::is_equal(1,1.0) << std::endl;
  // std::cout << "eq " << std::endl;
  
  // std::cout << scm2cpp::is_eq(1,1) << std::endl;
  // std::cout << scm2cpp::is_eq("aaaa","aaaa") << std::endl;
  // std::cout << scm2cpp::is_eq(st,st) << std::endl;
  // std::cout << scm2cpp::is_eq(qst,st) << std::endl;
  // std::cout << scm2cpp::is_eq(st,qst) << std::endl;
  // std::cout << scm2cpp::is_eq(qst,qst) << std::endl;
  // std::cout << scm2cpp::is_eq(sy,sy) << std::endl;
  // std::cout << scm2cpp::is_eq(qsy,sy) << std::endl;
  // std::cout << scm2cpp::is_eq(qsy,qsy) << std::endl;
  // std::cout << scm2cpp::is_eq(tststob,tststob2) << std::endl;
  // std::cout << scm2cpp::is_eq(tststob,tststob) << std::endl;
  // std::cout << scm2cpp::is_eq(tststob,3) << std::endl;
  // std::cout << scm2cpp::is_eq(qtstst,qtstst2) << std::endl;
  // //std::cout << scm2cpp::equal_number_base<int>()(1,1) << std::endl;

  //std::cout << scm2cpp::is_equal(1,1.0) << std::endl;

  std::cout << "\n equal " << std::endl;
  
  std::cout << scm2cpp::is_equal(1,1) << " " ;
  std::cout << scm2cpp::is_equal("aaaa","aaaa") << " " ;
  std::cout << scm2cpp::is_equal(st,st) << " " ;
  std::cout << scm2cpp::is_equal(qst,st) << " " ;
  std::cout << scm2cpp::is_equal(st,qst) << " " ;
  std::cout << scm2cpp::is_equal(qst,qst) << " " ;
  std::cout << scm2cpp::is_equal(qqst,qqst) << " " ;
  std::cout << scm2cpp::is_equal(sy,sy) << " " ;
  std::cout << scm2cpp::is_equal(qsy,qsy) << " " ;
  std::cout << scm2cpp::is_equal(qqsy,qqsy) << " " ;
  std::cout << scm2cpp::is_equal(tststob,tststob) << " " ;
  std::cout << scm2cpp::is_equal(qqtstst,qqtstst) << " " ;

  std::cout << std::endl;

  std::cout << scm2cpp::is_equal(qsy,sy) << " " ;
  std::cout << scm2cpp::is_equal(qqst,qst) << " " ;
  std::cout << scm2cpp::is_equal(qqsy,qsy) << " " ;
  std::cout << scm2cpp::is_equal(tststob,tststob2) << " " ;  
  std::cout << scm2cpp::is_equal(tststob,3) << " " ;
  std::cout << scm2cpp::is_equal(qtstst,qtstst2) << " " ;
  std::cout << scm2cpp::is_equal(qqtstst,qqtstst2) << " " ;
  std::cout << scm2cpp::is_equal(qqtstst,qtstst) << " " ;


  std::cout << "\n eqv " << std::endl;
  
  std::cout << scm2cpp::is_eqv(1,1) << " " ;
  std::cout << scm2cpp::is_eqv("aaaa","aaaa") << " " ;
  std::cout << scm2cpp::is_eqv(st,st) << " " ;
  std::cout << scm2cpp::is_eqv(qst,st) << " " ;
  std::cout << scm2cpp::is_eqv(st,qst) << " " ;
  std::cout << scm2cpp::is_eqv(qst,qst) << " " ;
  std::cout << scm2cpp::is_eqv(qqst,qqst) << " " ;
  std::cout << scm2cpp::is_eqv(sy,sy) << " " ;
  std::cout << scm2cpp::is_eqv(qsy,qsy) << " " ;
  std::cout << scm2cpp::is_eqv(qqsy,qqsy) << " " ;
  std::cout << scm2cpp::is_eqv(tststob,tststob) << " " ;
  std::cout << scm2cpp::is_eqv(qqtstst,qqtstst) << " " ;
  std::cout << scm2cpp::is_eqv(qsy,sy) << " " ;
  std::cout << scm2cpp::is_eqv(qqst,qst) << " " ;
  std::cout << scm2cpp::is_eqv(qqsy,qsy) << " " ;
  std::cout << scm2cpp::is_eqv(tststob,tststob2) << " " ;  
  std::cout << scm2cpp::is_eqv(tststob,3) << " " ;
  std::cout << scm2cpp::is_eqv(qtstst,qtstst2) << " " ;
  std::cout << scm2cpp::is_eqv(qqtstst,qqtstst2) << " " ;
  std::cout << scm2cpp::is_eqv(qqtstst,qtstst) << " " ;


  std::cout << "\n eq " << std::endl;
  
  std::cout << scm2cpp::is_eq(1,1) << " " ;
  std::cout << scm2cpp::is_eq("aaaa","aaaa") << " " ;
  std::cout << scm2cpp::is_eq(st,st) << " " ;
  std::cout << scm2cpp::is_eq(qst,qst) << " " ;
  std::cout << scm2cpp::is_eq(qqst,qqst) << " " ;
  std::cout << scm2cpp::is_eq(sy,sy) << " " ;
  std::cout << scm2cpp::is_eq(qsy,qsy) << " " ;
  std::cout << scm2cpp::is_eq(qqsy,qqsy) << " " ;
  std::cout << scm2cpp::is_eq(tststob,tststob) << " " ;
  std::cout << scm2cpp::is_eq(qqtstst,qqtstst) << " " ;

  std::cout << std::endl;
  std::cout << scm2cpp::is_eq(st2,st2b) << " " ;
  std::cout << scm2cpp::is_eq(qst,st) << " " ;
  std::cout << scm2cpp::is_eq(st,qst) << " " ;
  std::cout << scm2cpp::is_eq(qsy,sy) << " " ;
  std::cout << scm2cpp::is_eq(qqst,qst) << " " ;
  std::cout << scm2cpp::is_eq(qqsy,qsy) << " " ;
  std::cout << scm2cpp::is_eq(tststob,tststob2) << " " ;  
  std::cout << scm2cpp::is_eq(tststob,3) << " " ;
  std::cout << scm2cpp::is_eq(qtstst,qtstst2) << " " ;
  std::cout << scm2cpp::is_eq(qqtstst,qqtstst2) << " " ;
  std::cout << scm2cpp::is_eq(qqtstst,qtstst) << " " ;

  std::cout << std::endl;


}
