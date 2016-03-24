#include "config.h"

int main(int argc, char *argv[])
{
	Config c("Test.cfg", {{"example1", "23.4"},{"example2", "true"}});
	c.load();
	c.print();
	
	return 0;
}
