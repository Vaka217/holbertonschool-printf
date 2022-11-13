<h1>
                Proyect PRINTF for Holberton School
</h1>

<hr>
<h2>Peers working in this proyect.
</h2>
<ul>
<li><a href="https://github.com/Vaka217"> <strong> Gonzalo Cabaleiro
 </strong> </a> </li>

<li> <a href="https://github.com/ChrisOxan"> <strong> Christopher Oxandabarat
 </strong> </a> </li>
 </ul>
<h2>
        index and more info
</h2>
         <ul>
                <li>
                        <a href="#printf"> <strong> printf </strong> </a>
                </li>
                <li>
                        <a href="#Compilation"> <strong> Compilation </strong> </a>
                </li>
                <li>
                        <a href="#Description"> <strong> Description </strong> </a>
                </li>
                <li>
                        <a href="#Examples"> <strong> Examples </strong> </a>
                </li>
                <li>
                        <a href="#Testing"> <strong> Testing </strong> </a>
                </li>
                <li>
                        <a href="#Requirement"> <strong> Requirements </strong> </a>
                </li>
                <li>
                        <a href="#More functions"> <strong> Authorized functions and macros </strong> </a>
                </li>
                <li>
                        <a href="#Flowchart"> <strong> Flowchart </strong> </a>
                </li>
<h2>
<div id="printf">
        <strong>printf</strong>
</h2>
                <p>printf function produces output according to a format.</p>
<hr>
<h2>
<div id="Compilation">
        <strong>Compilation</strong>
</h2>
                <p> gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c </p>
<hr>
<h2>
<div id="Description">
        <strong>Description</strong>
</h2>
        <p> A more limited recreation of the printf function where only certain conversion specifiers are implemented with other custom ones that aren't in the base printf. This project made us work both on the technical and on our soft skills by making us work in pairs and complementing each others strengths and weaknesses.</p>
        <p> The most difficult task was making the conversion specifiers work as seen in the Testing part and to know how to use them we made the following table (For information about the conversion specifiers from advanced tasks, its all in the man page for _printf):</p>
<table>
  <tr>
    <th>Conversion specifier</th>
    <th>Description</th>
  </tr>
  <tr>
    <td>%c</td>
    <td>Prints a given character</td>
  </tr>
  <tr>
    <td>%s</td>
    <td>Prints a given string</td>
  </tr>
  <tr>
    <td>%i, %d</td>
    <td>Prints a given integer</td>
  </tr>
  <tr>
    <td>%%</td>
    <td>Prints %</td>
  </tr>
</table>

<h2>
<div id="Examples">
        <strong>Examples</strong>
</h2>
<p> To print a simple sentence: </p>

        #include "main.h"
        _printf("Let's try to printf a simple sentence.\n");
        
<p> Or also: </p>

        #include "main.h"
        _printf("%s", "Let's try to printf a simple sentence.\n");

<p> To print the maximum value for an integer type: </p>

        #include "main.h"
        #include <limits.h>
        _printf("%d", INT_MAX);
<hr>
<h2>
<div id="Testing">
        <strong>Testing</strong>
</h2>
        <img src="https://i.ibb.co/Mgygv64/Testing.png" alt="Testing">
<hr>
<h2>
<div id="Requirement">
        <strong>Requirements</strong>
</h2>
<h3>
        General
</h3>
        <ul>
                <li> Allowed editors: vi, vim, emacs </li>
                <li> All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89 </li>
                <li> All your files should end with a new line </li>
                <li> A README.md file, at the root of the folder of the project is mandatory </li>
                <li> Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl </li>
                <li> You are not allowed to use global variables </li>
                <li> No more than 5 functions per file </li>
                <li> In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t
                     have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at
                     compilation. Our main.c files might be different from the one shown in the examples
                <li> The prototypes of all your functions should be included in your header file called main.h </li>
                <li> Don’t forget to push your header file </li>
                <li> All your header files should be include guarded </li>
                <li> Note that we will not provide the _putchar function for this project </li>
        </ul>
<hr>
<h2>
<div id="More functions">
        <strong>Authorized functions and macros</strong>
</h2>
                <li>
                        write (man 2 write)
                </li>
                <li>
                        malloc (man 3 malloc)
                </li>
                <li>
                        free (man 3 free)
                </li>
                <li>
                        va_start (man 3 va_start)
                </li>
                <li>
                        va_end (man 3 va_end)
                </li>
                <li>
                        va_copy (man 3 va_copy)
                </li>
                <li>
                        va_arg (man 3 va_arg)
                </li>
        </ul>

<hr>
<h2>
<div id="Flowchart">
        <strong>Flowchart</strong>
</h2>
        <img src="https://cdn.discordapp.com/attachments/732360655658680452/1041397780725383279/Flowchart.png" alt="Flowchart" width="800" height="800">
