
#ifndef PCRASTER_PYTHON_EXPORT_H
#define PCRASTER_PYTHON_EXPORT_H

#ifdef PCRASTER_PYTHON_STATIC_DEFINE
#  define PCRASTER_PYTHON_EXPORT
#  define PCRASTER_PYTHON_NO_EXPORT
#else
#  ifndef PCRASTER_PYTHON_EXPORT
#    ifdef _pcraster_EXPORTS
        /* We are building this library */
#      define PCRASTER_PYTHON_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define PCRASTER_PYTHON_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef PCRASTER_PYTHON_NO_EXPORT
#    define PCRASTER_PYTHON_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef PCRASTER_PYTHON_DEPRECATED
#  define PCRASTER_PYTHON_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef PCRASTER_PYTHON_DEPRECATED_EXPORT
#  define PCRASTER_PYTHON_DEPRECATED_EXPORT PCRASTER_PYTHON_EXPORT PCRASTER_PYTHON_DEPRECATED
#endif

#ifndef PCRASTER_PYTHON_DEPRECATED_NO_EXPORT
#  define PCRASTER_PYTHON_DEPRECATED_NO_EXPORT PCRASTER_PYTHON_NO_EXPORT PCRASTER_PYTHON_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef PCRASTER_PYTHON_NO_DEPRECATED
#    define PCRASTER_PYTHON_NO_DEPRECATED
#  endif
#endif

#endif
