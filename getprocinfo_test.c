#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include "processInfo.h"
int main(void)
{
  //header 출력
  printf(0,"%s %s     %s    %s\n","PID","PPID","SIZE","Number of Context Switch");
  int maxPid = get_max_pid();
//  printf(0,"maxpid= %d\n",maxPid);
  int i;
  int result;
  struct processInfo info;
  for(i=1;i<=maxPid;i++)
  {
	result = get_proc_info(i,&info);
	if(result != -1)
	{//print
      printf(0,"%d     %d     %d       %d\n", i, info.ppid, info.psize, info.numberContextSwitches);
	}
  }
    exit();
}
