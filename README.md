This repository demonstrates a common yet subtle bug in C++: out-of-bounds access in a std::vector<bool>.  While standard vectors trigger exceptions on out-of-bounds access, std::vector<bool> is a specialized container that behaves differently.  This can lead to unexpected behavior and difficult-to-debug issues.

The `bug.cpp` file contains code that exhibits this problem. The `bugSolution.cpp` offers a corrected version with appropriate bounds checking to avoid this type of error.

This example highlights the importance of carefully handling vector access and using appropriate safety checks to prevent potentially catastrophic errors.