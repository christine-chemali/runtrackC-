//
// Created by chris on 13/05/2025.
//
//See below declarations:
/*
char c = '\x01';
short int p = 10;

What are the type and the value
of each of those expressions:

x = p + 3
y = c + 1
z = p + c
z = p + c
w = 3 * p + 5 * c
//Solution
char c = '\x01';
type : char
value : 1 (hex value \x01 correspond to decimal)
short int p = 10;
type : short int
value : 10
expressions:
x = p + 3
type : int (result of short int + int is int)
value : 10 + 3 = 13
y = c + 1
type : int (result of char + int is int)
value : 1 + 1 = 2
z = p + c
type : int (result of short int + char is int)
value : 10 + 1 = 11
z = c + p (repeated operation)
type : same as above
value : same as above
w = 3 * p + 5 * c
type : int (result of multiplications and additions are int)
value : 3 * 10 + 5 * 1 = 30 + 5 = 25
Summary of types and values
x type int value 13
y type int value 2
z type int value 11
w type int value 35
*/