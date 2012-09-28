
#include <iostream>
#include "scm2cpp.hpp"

template<typename T>  
void print (const T &elem)
{
  std::cout << elem << ' ';
}
// void testf(int 3)
// {   1*2; }

template<typename Ret, typename Seq> void 
listest(Seq seq)
{
  double sc=8.36;
  scm2cpp::car(seq);
  scm2cpp::car_pointer(seq);
  std::cout << *scm2cpp::car_pointer(seq)  << std::endl;  
  std::cout << scm2cpp::car(seq)  << std::endl;
  scm2cpp::cdr(seq);
  std::cout << scm2cpp::list_ref<Ret>(seq,0) << std::endl;
  //std::cout << scm2cpp::list_ref(seq,0) << std::endl;
  scm2cpp::cons(sc,seq);
}

#if 0
void vector_test()
{
#if 0
  double ardb[5]={0.1,1.1,2.2,3.3,4.4};  
  std::cout << scm2cpp::car(ardb) << " " ;
  std::cout << *scm2cpp::cdr(ardb) << " ";
  //listest<double>(ardb);
#endif
#if 0
  std::cout << scm2cpp::vector_ref(ardb,3) << std::endl;
  std::cout << *scm2cpp::vector_ref_pointer(ardb,3) << std::endl;
#endif
}
#endif

void list_test_pair()
{

  std::cout << "list_test_pair" << std::endl;
  double sc=4.33,sc2=5.21;  
  std::cout << &sc << ","; //<< std::endl;
  std::cout<< &scm2cpp::cons(sc,sc2).first <<std::endl;
  std::cout<< scm2cpp::cons(sc,sc2).first <<std::endl;
  std::cout<< scm2cpp::cons(3.333,4.444).first <<std::endl;

#if 1
  std::pair<double,double > a=scm2cpp::cons(sc, sc2);
  listest<double>(a);
  std::cout << &(a.first) << std::endl;
  scm2cpp::car_pointer(a);
  //scm2cpp::car(a);
#endif


#if 1
  std::list<double> lst;
  lst.push_back(1.1);
  listest<double>(lst);
  scm2cpp::car(lst);
  scm2cpp::car_pointer(lst);

  //std::list<double> lst1=
  boost::ptr_list<double, boost::view_clone_allocator> lst1=
  scm2cpp::cons(sc,lst);
  //listest<double>(lst1);
  scm2cpp::car(lst1);

  std::list<std::list<double> > lstlst;    
  //std::list<std::list<double> > lstlst;  
  scm2cpp::cons(lst,lstlst);  

  //listest(lstlst);
#endif  


  //std::list<double>
#if 1
#if 0
  boost::fusion::list<double > l2=
#else
  boost::ptr_list<double, boost::view_clone_allocator> l2=
#endif
  scm2cpp::cons(sc,scm2cpp::nil()); 
  //std::cout << &(*l2.begin()) << "," << l2.size() << std::endl;
#endif


  std::list<double> unidl=scm2cpp::make_uniform_list(10,12.3);
  std::vector<double> unidv=scm2cpp::make_uniform_vector(10,12.3);
  boost::ptr_list<double, boost::view_clone_allocator> 
  //std::list<double>
  //scm2cpp::f64ptr_list 
  unidl2=
    scm2cpp::cdr(unidl);
  //scm2cpp::f64ptr_vector unidv2= scm2cpp::cdr(unidv);

  
#if 0
  //scm2cpp::cons( *(new double(1.2)), sc2);
  std::cout << 
  scm2cpp::car(
	       scm2cpp::cons(*std::auto_ptr<double>(new double(99.123)), sc2))
	    << std::endl;

  std::cout << 
  scm2cpp::car(
	       scm2cpp::cons(
			     //87.123
			     //scm2cpp::r2lvalue(87.123)
			     *scm2cpp::ptr_r2lvalue(87.123)
			     , sc2))
	    << std::endl;
#endif

#if 0
  std::pair<double,std::pair<double,double> > aaa(3.12,std::pair<double,double>(1.7,9.7 ));
  //listest<double>(aaa);
  //std::cout << scm2cpp::list_ref<double>(aaa,1) << std::endl;
  
  //boost::ptr_list<double, boost::view_clone_allocator> l2=scm2cpp::cons(tmpd,scm2cpp::nil());
  //boost::ptr_list<double, boost::view_clone_allocator> l3=scm2cpp::cons(5.5,scm2cpp::nil());
  //boost::ptr_list<double, boost::view_clone_allocator> l3=scm2cpp::cons(boost::cref(5.5),scm2cpp::nil());
  
  //boost::ptr_list<double, boost::view_clone_allocator> l3=scm2cpp::cons(tmpd,z);
#endif
}

#if 1
void list_test_fusion()
{
  double sc=4.33,sc2=5.21;  
  //std::cout << &sc << "," << std::endl;
  BOOST_AUTO(x,boost::fusion::make_list(sc, 3.14));
  scm2cpp::append(x,x);
  //boost::fusion::list<double &,double &> x(sc,sc2);
  //std::cout << &boost::fusion::at_c<0>(x)  << std::endl;
  listest<double>(x);
  scm2cpp::car_pointer(x);

  //boost::fusion::list<double  , double , double > y=
    scm2cpp::cons(sc,x);  
  //std::cout << &boost::fusion::at_c<0>(y)  << std::endl;
  //std::cout << &boost::fusion::at_c<1>(y)  << std::endl;
  //scm2cpp::append(y,y);





#if 0  
  boost::fusion::list<double> x1(sc);
  //boost::fusion::list<double &> x2=
  boost::ptr_list<double, boost::view_clone_allocator> x2=
    scm2cpp::cons(sc,x1);  
  std::cout << &* (++x2.begin())  << std::endl;



  //listest<double>(x);
  //std::cout << scm2cpp::list_ref<double>(x,1) << std::endl;
  //std::cout << scm2cpp::list_ref<double>(x,2) << std::endl;


  //std::cout << boost::fusion::at_c<1>(y)  << std::endl;

  //boost::fusion::list<double> nilltest=boost::fusion::cons<double>(7.7,boost::fusion::nil() );



  //BOOST_AUTO(x,boost::fusion::make_list(sc, 3.14,v1));
  ////auto x=boost::fusion::make_list(v1,sc, 3.14);
  //std::cout << boost::fusion::at_c<1>(x)	    << std::endl;
  //boost::fusion::cons<int, boost::fusion::cons<float> > l(12, boost::fusion::cons<float>(5.5f));


  //boost::fusion::list<double,int> fl1(12.3,4);
  //std::cout << fl1.car << std::endl;; 
  //std::cout << fl1.cdr << std::endl;; 
  //std::cout << scm2cpp::cdr(fl1) << std::endl;; 
  //std::cout << scm2cpp::cons(12, fl1) << std::endl;; 
  //std::cout << scm2cpp::car(y) << std::endl;; 
  //scm2cpp::car_pointer(y);
    

  //boost::fusion::list<double,int>::car_type *pfl1 =& ( scm2cpp::car(fl1) );
  //std::cout << & ( scm2cpp::car(fl1) ) << std::endl;; 
  //std::cout << 
  //  scm2cpp::car_pointer(fl1) 
      //	    << std::endl
      ; 
#endif

}
#endif

  union myunion
  {
    int i; 
    double r; 
  };


void is_subst_obj_test()
{


  typedef boost::mpl::if_<boost::mpl::true_,char,long>::type t1;
  typedef boost::mpl::if_<boost::mpl::false_,char,long>::type t2;
  BOOST_MPL_ASSERT(( boost::is_same<t1, char> ));
  BOOST_MPL_ASSERT(( boost::is_same<t2, long> ));

  BOOST_MPL_ASSERT(( boost::is_same<char , char > ));
  //BOOST_MPL_ASSERT(( boost::is_same<char , char &> ));
#if 0
  BOOST_MPL_ASSERT(( boost::is_same<scm2cpp::to_subst_type<char>::type::type , char> ));
  BOOST_MPL_ASSERT(( boost::is_same<scm2cpp::to_subst_type<char[]>::type::type , char(&)[]> ));
  BOOST_MPL_ASSERT(( boost::is_same<scm2cpp::to_subst_type<std::vector<double> >::type::type , std::vector<double> &> ));
#else
  BOOST_MPL_ASSERT(( boost::is_same<scm2cpp::to_subst_type<char>::type , char> ));
  BOOST_MPL_ASSERT(( boost::is_same<scm2cpp::to_subst_type<char[]>::type , char(&)[]> ));
  BOOST_MPL_ASSERT(( boost::is_same<scm2cpp::to_subst_type<std::vector<double> >::type , std::vector<double> &> ));
#endif

  BOOST_MPL_ASSERT((boost::is_same<
		      scm2cpp::uniform_sequence_to_boost_ptr_sequence_view<std::list<double> >::type 
		      ,boost::ptr_list<double, boost::view_clone_allocator> > ));
#if 0
  BOOST_MPL_ASSERT((boost::is_same<
		      scm2cpp::is_uniform_sequence<std::list<double> > 
		      ,boost::mpl::true_> ));
#endif

  BOOST_MPL_ASSERT((scm2cpp::is_uniform_sequence<std::list<double> > )) ;
  //BOOST_MPL_ASSERT((scm2cpp::is_uniform_sequence<std::pair<double,double> > )) ;


  std::cout << scm2cpp::is_pair_type< std::pair<double,double > >::value;// << std::endl;
  std::cout << scm2cpp::is_pair_type<scm2cpp::nil_type >::value;// << std::endl;
  std::cout << scm2cpp::is_pair_type<std::list<double> >::value;
  std::cout << scm2cpp::is_pair_type<double >::value;

  std::cout << scm2cpp::is_list_type< std::pair<double,double > >::value;
  std::cout << scm2cpp::is_list_type< scm2cpp::nil_type >::value;
  std::cout << scm2cpp::is_list_type<std::list<double> >::value;
  std::cout << scm2cpp::is_list_type<double >::value;

  std::cout << scm2cpp::is_list_type< std::pair<double,std::pair<double,double>  > >::value;
std::cout << scm2cpp::is_list_type< std::pair<double,std::list<double>  > >::value;


  std::cout << "is_subst_ref_object" << std::endl;
  if(scm2cpp::is_subst_ref_object<int  >::value) 
    {      std::cout << "i" << std::endl;}  

  if(scm2cpp::is_subst_ref_object<std::vector<double>  >::value) 
    {      std::cout << "vd" << std::endl;}  

  if(scm2cpp::is_subst_ref_object<boost::fusion::vector<double,double > >::value) 
    {      std::cout << "fusion vector double" << std::endl;}  

  if(scm2cpp::is_subst_ref_object<int[] >::value) 
    {      std::cout << "ia" << std::endl;}  


  if(scm2cpp::is_subst_ref_object<myunion>::value) 
    {      std::cout << "u" << std::endl;}  


  std::cout << "is_subst_copy_object" << std::endl;

  if(scm2cpp::is_subst_copy_object<int>::value) 
    {      std::cout << "i" << std::endl;}  

  if(scm2cpp::is_subst_copy_object<int * >::value) 
    {      std::cout << "ip" << std::endl;}  

  if(scm2cpp::is_subst_copy_object<int[] >::value) 
    {      std::cout << "ia" << std::endl;}  


  if(scm2cpp::is_subst_copy_object<myunion>::value) 
    {      std::cout << "u" << std::endl;}  


}

void append_test()
{
  std::list<double> l1;
  l1.push_back(1.1);
  l1.push_back(1.2);
  
  std::for_each(l1.begin(),l1.end(),print<double>);

  boost::ptr_list<double, boost::view_clone_allocator> 
    ll1=
    scm2cpp::append(l1,l1);  
  std::for_each(ll1.begin(),ll1.end(),print<double>);
  *l1.begin()=4.2;
  std::for_each(ll1.begin(),ll1.end(),print<double>);

  //for(int i=0;i<l1.size();i++){
  // std::cout << l1 ;
#if 0
  std::list< std::list<double > > lll1(3,l1);
  boost::ptr_list<double, boost::view_clone_allocator>
    l2=
    scm2cpp::append(lll1);
  std::cout << std::endl;
  std::for_each(l2.begin(),l2.end(),print<double>);
#endif

  std::cout << std::endl;
}

int main()
{
  std::cout << "start"<<std::endl;  
  

  append_test();
  is_subst_obj_test();

  double sc=4.34444;  
  
  list_test_pair();
  //list_test_fusion();

  //boost::array<double,3> barr={1.1,1.2,1.3};
  //boost::ptr_list<double, boost::view_clone_allocator> 
  //lbarr=scm2cpp::cons(sc,barr);

  //boost::ptr_list<double, boost::view_clone_allocator> z=scm2cpp::cons(tmpd1,l1);

  std::cout << scm2cpp::is_null( scm2cpp::nil() ) << " ";
  std::cout << scm2cpp::is_null( 3.4 ) << " ";

  
    
  //const double tmpd1=2.4;
  std::list<double> l1(2.2);
  std::cout << scm2cpp::list_ref(l1,0)  << std::endl;
  //std::list<double> z=scm2cpp::cons(1.1,l1);
  boost::ptr_list<double, boost::view_clone_allocator> z=scm2cpp::cons(1.1,l1);
  //boost::ptr_list<double, boost::view_clone_allocator> z=scm2cpp::cons(tmpd1,l1);
  std::cout << *z.begin()  << std::endl;
  scm2cpp::cdr(z); 
  
  


  //boost::ptr_list<double, boost::view_clone_allocator> l4=scm2cpp::make_uniform_list(5,tmpd);
  //std::cout <<l4.size()  << std::endl;

  //boost::ptr_vector<double, boost::view_clone_allocator> v1=scm2cpp::make_uniform_vector(5,tmpd);
  
  
  //boost::ptr_list<double, boost::view_clone_allocator> l5=
  //std::cout <<  << std::endl;
  //boost::ptr_list<double, boost::view_clone_allocator> l5=scm2cpp::cdr(l3);
  //std::cout << *l3.begin()  << std::endl;
  //std::cout << *l5.begin()  << std::endl;

  //scm2cpp::car(l3);
  //scm2cpp::car_pointer(l3);

  

      std::cout << " end " << std::endl;


}
