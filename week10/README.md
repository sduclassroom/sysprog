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
