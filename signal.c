#include "shell.h"
#include <stdio.h>
#include <signal.h>
 
/**
  * sigintHandler - Signal Handler for SIGINT
  *
  * @sig_num: SIGNAL NUMBER to catch
  */
void sigintHandler(int sig_num __attribute__((unused)))
{
    /* Reset handler to catch SIGINT next time. */
    signal(SIGINT, sigintHandler);
    _puts("\n$ ");
    fflush(stdout);
}
