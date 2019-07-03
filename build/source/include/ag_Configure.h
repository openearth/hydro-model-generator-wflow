#ifndef INCLUDED_AG_CONFIGURE
#define INCLUDED_AG_CONFIGURE



// External headers.
#ifndef INCLUDED_BOOST_CONFIG
#include <boost/config.hpp>
#define INCLUDED_BOOST_CONFIG
#endif

// Project headers.

// Module headers.



#ifdef BOOST_HAS_DECLSPEC
#  if defined(PCR_AG_SHARED_LINK)
#    ifdef PCR_AG_SOURCE
#      define PCR_AG_DECL __declspec(dllexport)
#    else
#      define PCR_AG_DECL __declspec(dllimport)
#    endif
#  endif
#else
#  if defined(PCR_AG_SHARED_LINK)
#    ifdef PCR_AG_SOURCE
#      define PCR_AG_DECL __attribute((visibility("default")))
#    else
#      define PCR_AG_DECL __attribute((visibility("default")))
#    endif
#  endif
#endif

#ifndef PCR_AG_DECL
#  define PCR_AG_DECL
#endif

// Versions of the library.
#define AGUILA_MAJOR_VERSION 1
#define AGUILA_MINOR_VERSION 3
#define AGUILA_PATCH_VERSION 3
#define AG_VERSION "1.3.3"

namespace ag {

} // namespace ag

#endif
