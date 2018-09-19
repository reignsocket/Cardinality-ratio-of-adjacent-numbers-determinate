Problem Description  
6*9 = 42 is wrong for decimal, but correct for hexadecimal. That is, 6(13) * 9(13) = 42(13), and 42(13) = 4 * 131 + 2 * 130 = 54(10). Your task is to write a program that reads in three integers p, q, and r, and then determines a radix B (2<=B<=16) so that p * q = r. If B has many choices, the smallest one is output. . For example: p = 11, q = 11, r = 121. Then there are 11(3) * 11(3) = 121(3) because 11(3) = 1 * 31 + 1 * 30 = 4(10) and 121 (3) = 1 * 32 + 2 * 31 + 1 * 30 = 16(10). For hexadecimal 10, there are 11(10) * 11(10) = 121(10). In this case, you should output 3. If there is no suitable radix, output 0.
  
Input data  
Enter a sample T test. T is given in the first line. Each set of test samples consists of one line and contains three integers p, q, r. All bits of p, q, r are numbers, and 1  p, q, r  1,000,000.
  
Output requirements  
Output one line for each test sample. The line contains an integer: the smallest B that makes p * q = r. If there is no suitable B, then 0 is output.  
  
Input sample  
3  
6 9 42  
11 11 121  
2 2 2  

Output sample  
13  
3  
0  

Problem solving  
This question is very simple. Select a binary B, and convert the multiplicand, multiplier, and product into decimal according to the hexadecimal. Then determine if the equation is true. The minimum B that makes the equation true is the result of the result. Each character string of p, q, r is stored in a character array. First read p, q, r as a string, and then convert them into decimal numbers in different hexadecimal numbers to determine whether they are equal.  

Common mistakes  
a) In the representation of the number system b(2  b  16), the number on each digit must be smaller than b. After reading a set of data, you need to judge the lower limit of b based on the number. In the b2ten function of the reference program, if the number stored in the string x is greater than b or equal to b, then -1 is returned, indicating: stored in the number b, x
The representation is illegal, so b cannot be the value sought. b) Check: Whether 0 is output when the appropriate b is not found.
