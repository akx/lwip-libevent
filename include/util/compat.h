#ifndef SOCK_NONBLOCK
#include <fcntl.h>
#define SOCK_NONBLOCK O_NONBLOCK
#endif

#ifdef __linux__
#include <linux/tcp.h>
#else
#include <netinet/tcp.h>
#endif

#ifdef __linux__
/* CLOCK_BOOTTIME includes time spent in suspend */
#define CLOCK_BEST CLOCK_BOOTTIME
#else
#define CLOCK_BEST CLOCK_MONOTONIC
#endif
