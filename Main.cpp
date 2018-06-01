#include "Run.h"

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	auto run = new Run;
	run->run();
	return 0;
}
