# exC - Extended C libraries

**These libraries bring extra functionality to the already useful C standard libraries.**
This is free to use for everyone.

the **standard** version of this libarary already contains `stdio.h` and `stdlib.h`, so no need to include it again.

other notes about the standard version of the library:
to include the entire library, include `exc.h`. That will include all files in the standard version of the libarary.

This Library contains **All Acsess Variables (AAVs)**
All acseess variabes are where some of the results are stored if they cannot be returned for some reason or another. Here is an example:
```
exampleAdd("10, 20")
int ExampleResult = ExampleAAV
```

[![Run on Repl.it](https://repl.it/badge/github/alsamitech/exc)](https://repl.it/github/alsamitech/exc)