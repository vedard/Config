#include "config.h"

int main(int argc, char *argv[])
{
	Config c("Test.cfg");
	c.load();
	c.print();
	
	return 0;
}
