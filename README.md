# A-Petya_and_Strings

- <h6> <center> Time limit per test 2 second </center> </h6>
- <h6> <center> Memory limit per test 256 megabytes </center> </h6>
- <h6> <center> inputstandard input </center> </h6>
- <h6> <center>outputstandard output </center> </h6>

Little Petya loves presents. His mum bought him two strings of the same size for his birthday. 
The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings *lexicographically*. 
The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter.
Help Petya perform the comparison.

<h5>Input</h5>

Each of the first two lines contains a bought string. The strings' lengths range from *1 to 100* inclusive. 
It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

<h5>Output</h5>

If the first string is less than the second one, print `-1`. If the second string is less than the first one, print `1`. 
If the strings are equal, print `0`. Note that the letters' case is not taken into consideration when the strings are compared.

<h5>Example 1</h5>

<h6>Input</h6>

>aaaa

>aaaA


<h6>Output</h6>

>0

<h5>Example 2</h5>

<h6>Input</h6>

>abs

>bz


<h6>Output</h6>

>-1


<h5>Example 3</h5>

<h6>Input</h6>

>abcdefg

>bCdEfF


<h6>Output</h6>

>1

## Codeforces Link
[A. Petya and Strings](https://codeforces.com/contest/112/problem/A)
