#ifndef CBENCH_H
#define CBENCH_H

#ifndef BUFLEN
#define BUFLEN 65536
#endif

#ifdef __linux__
#define USE_EPOLL
#endif

int *total_send_count;
int test_number_indicator;

#endif
