
#ifndef CAST_EXPORT_H
#define CAST_EXPORT_H

#ifdef CAST_STATIC_DEFINE
#  define CAST_EXPORT
#  define CAST_NO_EXPORT
#else
#  ifndef CAST_EXPORT
#    ifdef cast_EXPORTS
        /* We are building this library */
#      define CAST_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define CAST_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef CAST_NO_EXPORT
#    define CAST_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef CAST_DEPRECATED
#  define CAST_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef CAST_DEPRECATED_EXPORT
#  define CAST_DEPRECATED_EXPORT CAST_EXPORT CAST_DEPRECATED
#endif

#ifndef CAST_DEPRECATED_NO_EXPORT
#  define CAST_DEPRECATED_NO_EXPORT CAST_NO_EXPORT CAST_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef CAST_NO_DEPRECATED
#    define CAST_NO_DEPRECATED
#  endif
#endif

#endif /* CAST_EXPORT_H */
