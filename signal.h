#ifndef XV6_SIGNAL
#define XV6_SIGNAL

#define SIGKILL	0
#define SIGFPE	1
#define SIGSEGV 2	//added manually

#define PROT_READ 0	//added manually
#define PROT_WRITE 1	//added manually

typedef struct {
	uint addr;	//address
	uint type;	//type
}siginfo_t; 

typedef void (*sighandler_t)(int, siginfo_t);

#endif
