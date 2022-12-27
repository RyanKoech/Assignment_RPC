![](https://img.shields.io/badge/School_Assignment-blue)


# RPC Programming with RPCGen

> Project Assignment to create client and server processes that communicate using Remote Procedure Calls with three remote procedures that accept and return parameters:
> - accepts an integer and returns an integer
> - accepts an integer and string and returns a floating point
> - accepts an integer by reference and returns a string

## Get Started

**Note:** All the generate code by `rpcgen` and `make` are ignored. One will have to follow these step in order to get the final working executables.

```bash
rpcgen -a -C task.x
```

Replace the contents of task\_*name*\_code.c with its corresponding generated task\_*name*.c

In order to successfully compile and link generated files, ensure your make file; `Makefile.task` have the following options for compile flags.

```
CFLAGS += -g -I/usr/include/tirpc 
LDLIBS += -ltirpc -lm
```

Compile and link
```bash
make -f Makefile.task
````

Start the server
```bash
sudo ./task_server localhost
```

Run the client
```bash
./task_client localhost
```

Finally, f*** around!

## Show you support
And of course give a star if you like this project!