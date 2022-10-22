#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<sys/wait.h>

//参数校验，源文件，进程数量
int CHECK_ARG(int argno,int prono,const *Sfile);
//计算机进程应拷贝大小
int COPY_BLOCK_CUR(const char * Sfile, int prono);
//进程创建
int PROCESS_CREATE(const char * Sfile,const char * Dfile,int prono,int blocksize);
//进程等待
int PROCESS_WAIT(void);