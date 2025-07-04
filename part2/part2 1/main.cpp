#include <iostream>
#include <stdlib.h>
#include "work.h"


// implement the functions here.
void start_monitoring_for_thread(uint32_t threadIdx, pid_t tid, pthread_t handle) {
}

void stop_monitoring_for_thread(uint32_t threadIdx) {

}

int32_t get_thread_affinity(uint32_t threadIdx) {
  return -1;
}


int main(int argc, char **argv)
{
  // DO NOT MODIFY THE FOLLOWING BLOCK.
  // =================================================
  if (argc != 2)
  {
    printf("Usage: %s <seed>\n", argv[0]);
    return 1;
  }
  int sr_no = atoi(argv[1]);
  int num_threads = work_init(sr_no);
  // =================================================
  // Modify below this
  
  std::cout << "The number of threads: " << num_threads << std::endl;

  // Modify above this
  // DO NOT MODIFY THE FOLLOWING BLOCK.
  // =================================================
  work_start_monitoring();
  // =================================================
  // Modify below this

  // Your code / script for analysis goes here.

  // Modify above this
  // DO NOT MODIFY THE FOLLOWING BLOCK.
  work_run();
  // =================================================
  // Modify below this

  return 0;
}