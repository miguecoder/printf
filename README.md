<html>
<head>
<meta charset="UTF-8">
</head>
<body>
<h1>Project _printf</h1>
<h2>Description</h2>
<p>Function that produces output according to a format.
<br>
Returns: the number of characters printed (excluding the null byte used to end output to strings)</p>
<h2>Functions</h2>
<ul>
<li><b>printer_t choose_func(char format)</b></li>
<p>It's a functions that contains the possibles formats to out for print, this function return two data contains in a structure.</p>
<li><B>int _printf_char(va_list *)</B></li>
<p>writes a character to the screen and returns its length.</p>
<li><B>int _printf_string(va_list *)</B></li>
<p>Writes a string to the screen and returns its length.</p>
<li><B>int _printf_int(va_list *)</B></li>
<p>Writes a integer to the screen and returns its length.</p>
<li><B>int _printf_unsigned_int(va_list *)</B></li>
<p>Writes an unsigned integer to the screen and returns its length.</p>
<li><B>int _printf_double(va_list *)</B></li>
<p>Writes a double to the screen and returns its length.</p>
<li><B>int _printf_octal(va_list *)</B></li>
<p>Writes a octal to the screen and returns its length.</p>
<li><B>int _printf_hexa(va_list *)</B></li>
<p>Writes a hexadecimal to the screen and returns its length.</p>
<li><B>int _printf_mini_hexa(va_list *)</B></li>
<p>Writes a hexadecimal in lower case to the screen and returns its length.</p>
<li><B>int _printf_binary(va_list *)</B></li>
<p>Writes the conversion of a number to a binary to the screen and returns its length.
<li><B>int _printf_special(va_list *)</B></li>
<p>Writes the symbol % followed to some character special to the screen and returns its length.</p>
<li><B>int _printf_rot13(va_list *params)</B></li>
<p>Writes a string coding to rot13 to the screen and returns its length.</p>
<li><B>int _printf_reverse(va_list *)</B></li>
<p>Writes a string in reverse to the screen and returns its length.</p>
<li><b>int _putchar(char c)</b></li>
<p>Writes a character in stdout standard 1</p>
</ul>
<p></p>
<h2>Authors</h2>
<p>Alejandro Caballero y Miguel Márquez. Cohorte 17</p>
</body>
</html>

