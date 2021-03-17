#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
int main(void)
{

   int r = get_max_pid();
	printf(0,"Maximum PID : %d\n",r);
    exit();
}
