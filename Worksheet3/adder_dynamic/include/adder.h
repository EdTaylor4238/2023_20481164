//begin - adder.h

#ifndef MATHSLIB_ADDER_H
#define MATHSLIB_ADDER_H

#if defined(WIN32) | defined(_WIN32)
	#ifndef maths_STATIC
		#define MATHSLIB_API
	#else
		#ifndef maths_EXPORTS
			#define MATHSLIB_API __declspec(dllexport)
		#else
			#define MATHSLIB_API __delspec(dllimport)
		#endif
	#endif
#else
	#define MATHSLIB_API
#endif

MATHSLIB_API int add(int a, int b);
#endif
//end - adder.h