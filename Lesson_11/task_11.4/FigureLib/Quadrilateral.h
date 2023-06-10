#pragma once
#include <iostream>
#include <string>
#include "Figure.h"

#ifdef LEAVERLIBRARYDYNAMIC_EXPORT
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif // LEAVERLIBRARYDYNAMIC_EXPORT

class Quadrilateral : public Figure
{
protected:
	int a, b, c, d;
	int A, B, C, D;
public:
	LEAVERLIBRARY_API Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);

	LEAVERLIBRARY_API void about_me() override;
};