### Concurency: An Introduction

#### Classic single-threaded process
- process is all about protection
- 1 program counter/instruction pointer => one stack
- processes communicate via IPC mechanisms like pipes etc.
- context switch between processes is a "big deal"

#### Multithreaded process:
- many simultaneous threads of execution
- each thread has its own PC/IP => its own stack
- threads are in the same virtual address space => communication is natural
- context switch is cheaper
- pros:
  - communcation is easy
  - context swich is cheap
  - if you have more than one core, paralelization may be achieved
  - overlapping I/O with other activities (like in multiprogramming) <= this is possible if your OS "knows" about your threads.
- cons:
  - synchronization problems (processes also have them)
  - ...

#### Synchronizations problems
- critical section
- race condition
- indeterminate vs deterministic programs
- mutual exclusion
- atomicity

#### Threads Examples
- [thread creation in pthreads](./week10/simplethreads.c)
- [race condtion](./week10/race.c)

#### References
* [ch26](http://pages.cs.wisc.edu/~remzi/OSTEP/threads-intro.pdf)
* [ch27](http://pages.cs.wisc.edu/~remzi/OSTEP/threads-api.pdf)
* [POSIX Threads Programming Tutorial](https://computing.llnl.gov/tutorials/pthreads/)
* [pthread #1 in good english :)](https://www.youtube.com/watch?v=ynCc-v0K-do)
* [pthread #2 in good english :)](https://www.youtube.com/watch?v=1ks-oMotUjc)
