**XV6 System Calls

**Description:**
This project involves the implementation of a new system call, `getfilename`, in the xv6 operating system. The `getfilename` system call retrieves the name of a file associated with a given file descriptor and copies it into a provided buffer. Additionally, a new user-level program named `getfilename` is created to call the `getfilename` system call and print the output in a specified format.

**README.md:**
```
# xv6-GetFilename
## Implementation Status
The implementation of the `getfilename` system call and the accompanying user-level program is completed and functional.

## Files Modified in xv6
- syscall.c: Added implementation of the `getfilename` system call.
- syscall.h: Defined the syscall number for `getfilename`.
- usys.S: Added syscall wrapper for `getfilename`.
- user.h: Added function prototype for `getfilename`.
- file.h: Modified `struct file` to include a buffer for file names.
- sysfile.c: Implemented the logic for `getfilename`.
- getfilename.c: Added user-level program to call `getfilename` and print the output.

## How to Run
1. Clone this repository.
2. Navigate to the `xv6-public` directory.
3. Compile xv6 by running `make qemu-nox`.
4. To run the `getfilename` user-level program, use the following command:
   ```
   $ getfilename <name_of_file>
   ```
   Replace `<name_of_file>` with the name of the file you want to retrieve the name for.

## Miscellaneous
- Ensure to run `make clean` before submitting the xv6 directory.
```
