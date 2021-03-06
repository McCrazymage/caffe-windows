#ifndef CAFFE_EXPORT_HPP_
#define CAFFE_EXPORT_HPP_

#ifdef _MSC_VER
#  ifndef CAFFE_EXPORT
/* caffe lib must define BUILDING_CAFFE_LIB
regardless of library type (static or shared) */
#    ifdef BUILDING_CAFFE_LIB
/* We are building this library */
#      define CAFFE_EXPORT __declspec(dllexport)
#    else
/* We are using this library */
#      define CAFFE_EXPORT __declspec(dllexport)
/* if we built a static library include the generated header
file that forces the linking of unreferenced static objects */
//@CAFFE_INCLUDE_FORCELINK@
#include "caffe/forcelink.hpp"
#    endif
#  endif
#else
#define CAFFE_EXPORT
#endif

#endif  // CAFFE_EXPORT_HPP_