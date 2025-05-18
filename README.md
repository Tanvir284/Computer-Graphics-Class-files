# Computer-Graphics-Class-files

Computer Graphics Lab Works

This repository contains simple C++ programs that rely on the Borland Graphics Interface (BGI). These examples include the use of **graphics.h**, **conio.h**, and **windows.h**, which are typically available only on Windows.

**Note:** The code here is Windows-specific and currently does **not** use modern graphics libraries such as OpenGL, GLFW, GLAD, or GLM.

## Building the Examples

To compile a file using a BGI-enabled compiler (for example, [WinBGIm](http://winbgim.codecutter.org/)), you can run a command similar to:

```bash
g++ your_file.cpp -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32 -o your_program.exe
```

Make sure the BGI libraries are correctly installed and the include/lib paths are configured in your compiler.
