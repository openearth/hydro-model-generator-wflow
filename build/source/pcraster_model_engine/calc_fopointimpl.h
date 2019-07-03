/*!
\note
Do not edit, generated from (/PCRasterModelEngine/)createOperatorCppCode
*/
#ifndef INCLUDED_CALC_FOPOINTIMPL
#define INCLUDED_CALC_FOPOINTIMPL



#ifndef INCLUDED_MATHX
#include "mathx.h"
#define INCLUDED_MATHX
#endif
#ifndef INCLUDED_APPARGS
#include "appargs.h"
#define INCLUDED_APPARGS
#endif
#ifndef INCLUDED_COM_MATH
#include "com_math.h"
#define INCLUDED_COM_MATH
#endif
#ifndef INCLUDED_CSTDLIB
#include <cstdlib>
#define INCLUDED_CSTDLIB
#endif
#ifndef INCLUDED_CALC_FOPOINTSPECIAL
#include "calc_fopointspecial.h"
#define INCLUDED_CALC_FOPOINTSPECIAL
#endif
#ifndef INCLUDED_CALC_FOPOINT
#include "calc_fopoint.h"
#define INCLUDED_CALC_FOPOINT
#endif
#ifndef INCLUDED_BOOST_MATH_SPECIAL_FUNCTIONS_ROUND
#include <boost/math/special_functions/round.hpp>
#define INCLUDED_BOOST_MATH_SPECIAL_FUNCTIONS_ROUND
#endif


namespace calc {

namespace point {

      template<typename T>
      struct ne :public DiffBinPoint< T > {
        // NO_DOMAIN_CHECKS
       static UINT1 f(const T& a1, const T& a2)
       { return a1!=a2; }
       static void op(UINT1& v, const T& a1, const T& a2)
       { v = f(a1,a2); }
       };

      template<typename T>
      struct eq :public DiffBinPoint< T > {
        // NO_DOMAIN_CHECKS
       static UINT1 f(const T& a1, const T& a2)
       { return a1==a2; }
       static void op(UINT1& v, const T& a1, const T& a2)
       { v = f(a1,a2); }
       };

      template<typename T>
      struct gt :public DiffBinPoint< T > {
        // NO_DOMAIN_CHECKS
       static UINT1 f(const T& a1, const T& a2)
       { return a1>a2; }
       static void op(UINT1& v, const T& a1, const T& a2)
       { v = f(a1,a2); }
       };

      template<typename T>
      struct ge :public DiffBinPoint< T > {
        // NO_DOMAIN_CHECKS
       static UINT1 f(const T& a1, const T& a2)
       { return a1>=a2; }
       static void op(UINT1& v, const T& a1, const T& a2)
       { v = f(a1,a2); }
       };

      template<typename T>
      struct lt :public DiffBinPoint< T > {
        // NO_DOMAIN_CHECKS
       static UINT1 f(const T& a1, const T& a2)
       { return a1<a2; }
       static void op(UINT1& v, const T& a1, const T& a2)
       { v = f(a1,a2); }
       };

      template<typename T>
      struct le :public DiffBinPoint< T > {
        // NO_DOMAIN_CHECKS
       static UINT1 f(const T& a1, const T& a2)
       { return a1<=a2; }
       static void op(UINT1& v, const T& a1, const T& a2)
       { v = f(a1,a2); }
       };

      template<typename T>
      struct min :public SameBinPoint< T > {
       
       static T f(const T& a1, const T& a2)
       { return std::min<>(a1,a2); }
       static void op(T& v, const T& a1, const T& a2)
       { v = f(a1,a2); }
       };

      template<typename T>
      struct max :public SameBinPoint< T > {
       
       static T f(const T& a1, const T& a2)
       { return std::max<>(a1,a2); }
       static void op(T& v, const T& a1, const T& a2)
       { v = f(a1,a2); }
       };

      template<typename T>
      struct mul :public SameBinPoint< T > {
       
       static T f(const T& a1, const T& a2)
       { return a1*a2; }
       static void op(T& v, const T& a1, const T& a2)
       { v = f(a1,a2); }
       };

      template<typename T>
      struct fdiv :public SameBinPoint< T > {
       inline static bool rightDomainIll(const T& r){return r==0;} 
       static T f(const T& a1, const T& a2)
       { return a1/a2; }
       static void op(T& v, const T& a1, const T& a2)
       { v = f(a1,a2); }
       };

      template<typename T>
      struct pow :public SameBinPoint< T > {
       inline static bool combDomainIll(const T& r, const T& l){return special::pow_domainIll(l,r);} 
       static T f(const T& a1, const T& a2)
       { return std::pow(a1,a2); }
       static void op(T& v, const T& a1, const T& a2)
       { v = f(a1,a2); }
       };

      template<typename T>
      struct mod :public SameBinPoint< T > {
       inline static bool rightDomainIll(const T& r){return r==0;} 
       static T f(const T& a1, const T& a2)
       { return std::fmod(a1,a2); }
       static void op(T& v, const T& a1, const T& a2)
       { v = f(a1,a2); }
       };

      template<typename T>
      struct idiv :public SameBinPoint< T > {
       inline static bool rightDomainIll(const T& r){return r==0;} 
       static T f(const T& a1, const T& a2)
       { return (T)Fdiv(a1,a2); }
       static void op(T& v, const T& a1, const T& a2)
       { v = f(a1,a2); }
       };

      template<typename T>
      struct uadd :public SameUnPoint< T > {
       
       static T f(const T& v)
       { return v; }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct umin :public SameUnPoint< T > {
       
       static T f(const T& v)
       { return -v; }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct badd :public SameBinPoint< T > {
       
       static T f(const T& a1, const T& a2)
       { return a1+a2; }
       static void op(T& v, const T& a1, const T& a2)
       { v = f(a1,a2); }
       };

      template<typename T>
      struct bmin :public SameBinPoint< T > {
       
       static T f(const T& a1, const T& a2)
       { return a1-a2; }
       static void op(T& v, const T& a1, const T& a2)
       { v = f(a1,a2); }
       };

      template<typename T>
      struct and_ :public SameBinPoint< T > {
       
       static T f(const T& a1, const T& a2)
       { return a1 & a2; }
       static void op(T& v, const T& a1, const T& a2)
       { v = f(a1,a2); }
       };

      template<typename T>
      struct or_ :public SameBinPoint< T > {
       
       static T f(const T& a1, const T& a2)
       { return a1 | a2; }
       static void op(T& v, const T& a1, const T& a2)
       { v = f(a1,a2); }
       };

      template<typename T>
      struct xor_ :public SameBinPoint< T > {
       
       static T f(const T& a1, const T& a2)
       { return a1 ^ a2; }
       static void op(T& v, const T& a1, const T& a2)
       { v = f(a1,a2); }
       };

      template<typename T>
      struct not_ :public SameUnPoint< T > {
       
       static T f(const T& v)
       { return !v; }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct sin :public SameUnPoint< T, point::sin<T> > {
       inline static bool onlyDomainIll(const T& v){return v==-1;} 
       static T f(const T& v)
       { return std::sin(v); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct cos :public SameUnPoint< T, point::cos<T> > {
       inline static bool onlyDomainIll(const T& v){return v==-1;} 
       static T f(const T& v)
       { return std::cos(v); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct tan :public SameUnPoint< T, point::tan<T> > {
       inline static bool onlyDomainIll(const T& v){return (v==-1||com::equal_epsilon(M_PI*0.5,(double)v)||com::equal_epsilon(M_PI*1.5,(double)v));} 
       static T f(const T& v)
       { return std::tan(v); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct asin :public SameUnPoint< T, point::asin<T> > {
       inline static bool onlyDomainIll(const T& v){return std::fabs(v)>1;} 
       static T f(const T& v)
       { return (T)ScaleRad(std::asin(v)); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct acos :public SameUnPoint< T, point::acos<T> > {
       inline static bool onlyDomainIll(const T& v){return std::fabs(v)>1;} 
       static T f(const T& v)
       { return (T)std::acos(v); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct atan :public SameUnPoint< T > {
       
       static T f(const T& v)
       { return (T)ScaleRad(std::atan(v)); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct abs :public SameUnPoint< T > {
       
       static T f(const T& v)
       { return std::fabs(v); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct exp :public SameUnPoint< T > {
       
       static T f(const T& v)
       { return std::exp(v); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct fac :public SameUnPoint< T, point::fac<T> > {
       inline static bool onlyDomainIll(const T& v){return special::fac_domainIll(v);} 
       static T f(const T& v)
       { return special::fac_impl(v); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct rounddown :public SameUnPoint< T > {
       
       static T f(const T& v)
       { return std::floor(v); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct ln :public SameUnPoint< T, point::ln<T> > {
       inline static bool onlyDomainIll(const T& v){return v<=0 ;} 
       static T f(const T& v)
       { return std::log(v); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct log10 :public SameUnPoint< T, point::log10<T> > {
       inline static bool onlyDomainIll(const T& v){return v<=0 ;} 
       static T f(const T& v)
       { return std::log10(v); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct roundup :public SameUnPoint< T > {
       
       static T f(const T& v)
       { return std::ceil(v); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct roundoff :public SameUnPoint< T > {
       
       static T f(const T& v)
       { return boost::math::round(v); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct sqrt :public SameUnPoint< T, point::sqrt<T> > {
       inline static bool onlyDomainIll(const T& v){return v < 0;} 
       static T f(const T& v)
       { return std::sqrt(v); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct sqr :public SameUnPoint< T > {
       
       static T f(const T& v)
       { return v*v; }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct succ :public SameUnPoint< T > {
       
       static T f(const T& v)
       { return v+(v<INT4_MAX); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct pred :public SameUnPoint< T > {
       
       static T f(const T& v)
       { return v-(v>INT4_MIN); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename ResultType, typename InputType>
      struct nodirection :public DiffUnPoint< ResultType,InputType > {
        // NO_DOMAIN_CHECKS
       static ResultType f(const InputType& i)
       { return i==-1; }
       static void op(ResultType& v, const InputType& i)
       { v = f(i); }
       };

      template<typename ResultType, typename InputType>
      struct downstreamdist :public DiffUnPoint< ResultType,InputType > {
        // NO_DOMAIN_CHECKS
       static ResultType f(const InputType& i)
       { return special::impl_downstreamdist(i); }
       static void op(ResultType& v, const InputType& i)
       { v = f(i); }
       };

      template<typename T>
      struct c_1_2_b :public SameUnPoint< T > {
       
       static T f(const T& v)
       { return v!= 0; }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename ResultType, typename InputType>
      struct c_4_2_b :public DiffUnPoint< ResultType,InputType > {
        // NO_DOMAIN_CHECKS
       static ResultType f(const InputType& i)
       { return i!= 0; }
       static void op(ResultType& v, const InputType& i)
       { v = f(i); }
       };

      template<typename ResultType, typename InputType>
      struct c_s_2_b :public DiffUnPoint< ResultType,InputType > {
        // NO_DOMAIN_CHECKS
       static ResultType f(const InputType& i)
       { return i!= 0; }
       static void op(ResultType& v, const InputType& i)
       { v = f(i); }
       };

      template<typename ResultType, typename InputType>
      struct c_1_2_o :public DiffUnPoint< ResultType,InputType > {
        // NO_DOMAIN_CHECKS
       static ResultType f(const InputType& i)
       { return i; }
       static void op(ResultType& v, const InputType& i)
       { v = f(i); }
       };

      template<typename ResultType, typename InputType>
      struct c_1_2_n :public DiffUnPoint< ResultType,InputType > {
        // NO_DOMAIN_CHECKS
       static ResultType f(const InputType& i)
       { return i; }
       static void op(ResultType& v, const InputType& i)
       { v = f(i); }
       };

      template<typename ResultType, typename InputType>
      struct c_s_2_o :public DiffUnPoint< ResultType,InputType > {
        // NO_DOMAIN_CHECKS
       static ResultType f(const InputType& i)
       { return std::max<>(((INT4)i), INT4_MIN); }
       static void op(ResultType& v, const InputType& i)
       { v = f(i); }
       };

      template<typename ResultType, typename InputType>
      struct c_s_2_n :public DiffUnPoint< ResultType,InputType > {
        // NO_DOMAIN_CHECKS
       static ResultType f(const InputType& i)
       { return std::max<>(((INT4)i), INT4_MIN); }
       static void op(ResultType& v, const InputType& i)
       { v = f(i); }
       };

      template<typename ResultType, typename InputType>
      struct c_1_2_s :public DiffUnPoint< ResultType,InputType > {
        // NO_DOMAIN_CHECKS
       static ResultType f(const InputType& i)
       { return i; }
       static void op(ResultType& v, const InputType& i)
       { v = f(i); }
       };

      template<typename ResultType, typename InputType>
      struct c_4_2_s :public DiffUnPoint< ResultType,InputType > {
        // NO_DOMAIN_CHECKS
       static ResultType f(const InputType& i)
       { return (ResultType)i; }
       static void op(ResultType& v, const InputType& i)
       { v = f(i); }
       };

      template<typename T>
      struct c_s_2_d :public SameUnPoint< T > {
       
       static T f(const T& v)
       { return special::impl_s_2_d(v); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct c_d_2_s :public SameUnPoint< T, point::c_d_2_s<T> > {
       inline static bool onlyDomainIll(const T& v){return v==-1;} 
       static T f(const T& v)
       { return (T)(appDirection==APP_DEGREES?Rad2Deg(v):v); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct c_d_2_n :public SameUnPoint< T, point::c_d_2_n<T> > {
       inline static bool onlyDomainIll(const T& v){return v==-1;} 
       static T f(const T& v)
       { return (T)(appDirection==APP_DEGREES?Rad2Deg(v):v); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename T>
      struct c_d_2_o :public SameUnPoint< T, point::c_d_2_o<T> > {
       inline static bool onlyDomainIll(const T& v){return v==-1;} 
       static T f(const T& v)
       { return (T)(appDirection==APP_DEGREES?Rad2Deg(v):v); }
       static void op(T& v)
       { v = f(v); }
       }; 

      template<typename ResultType, typename InputType>
      struct c_1_2_d :public DiffUnPoint< ResultType,InputType > {
        // NO_DOMAIN_CHECKS
       static ResultType f(const InputType& i)
       { return special::impl_1_2_d(i); }
       static void op(ResultType& v, const InputType& i)
       { v = f(i); }
       };

      template<typename ResultType, typename InputType>
      struct c_4_2_d :public DiffUnPoint< ResultType,InputType > {
        // NO_DOMAIN_CHECKS
       static ResultType f(const InputType& i)
       { return special::impl_4_2_d(i); }
       static void op(ResultType& v, const InputType& i)
       { v = f(i); }
       };

      template<typename ResultType, typename InputType>
      struct c_l_2_d :public DiffUnPoint< ResultType,InputType > {
        // NO_DOMAIN_CHECKS
       static ResultType f(const InputType& i)
       { return special::impl_l_2_d(i); }
       static void op(ResultType& v, const InputType& i)
       { v = f(i); }
       };

      template<typename ResultType, typename InputType>
      struct c_4_2_l :public DiffUnPoint< ResultType,InputType > {
        // NO_DOMAIN_CHECKS
       static ResultType f(const InputType& i)
       { return special::impl_4_2_l(i); }
       static void op(ResultType& v, const InputType& i)
       { v = f(i); }
       };

      template<typename ResultType, typename InputType>
      struct c_s_2_l :public DiffUnPoint< ResultType,InputType > {
        // NO_DOMAIN_CHECKS
       static ResultType f(const InputType& i)
       { return special::impl_s_2_l(i); }
       static void op(ResultType& v, const InputType& i)
       { v = f(i); }
       };

      template<typename ResultType, typename InputType>
      struct c_d_2_l :public DiffUnPoint< ResultType,InputType > {
        // NO_DOMAIN_CHECKS
       static ResultType f(const InputType& i)
       { return special::impl_d_2_l(i); }
       static void op(ResultType& v, const InputType& i)
       { v = f(i); }
       };
 } // namespace calc 
 } // namespace point 

#endif
