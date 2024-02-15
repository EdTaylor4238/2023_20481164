#define ADDER_H_INCLUDED


#ifndef MATHSLIB_ADDER_H
#define MATHSLIB_ADDER_H

#if defined(WIN32)|defined(_WIN32)
#ifdef maths_STATIC
#else
#ifdef maths_EXPORTS
#define MATHSLIB_API __declspec(dllexport)
#else
#define MATHSLIB_API __declspec(dllimport)
#endif // maths_EXPORTS
#endif // maths_STATIC
#else
#define MATHSLIB_API
#endif // defined
MATHSLIB_API int add(int a, int b);


#endif // ADDER_H_INCLUDED
