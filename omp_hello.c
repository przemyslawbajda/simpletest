#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
 
int main() {
 int nthreads, tid;
 /*komentarz*/
 #pragma omp parallel private(nthreads, tid)
    {
     /* nr wątku i ilość wątkow */
     tid = omp_get_thread_num();
     nthreads = omp_get_num_threads();
 printf("Hello World from thread %d of threads %d\n", tid, nthreads);
   }
 }
