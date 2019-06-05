// CMakeTutorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TutorialConfig.h"
#include <iostream>

int main(int argc, char *argv[])
{
	fprintf(stdout, "%s Version %d.%d\n",
		argv[0],
		Tutorial_VERSION_MAJOR,
		Tutorial_VERSION_MINOR);

	std::cin.get();
	return 0;
}

