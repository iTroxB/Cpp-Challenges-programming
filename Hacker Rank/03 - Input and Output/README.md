# 03 - Input and Output | Difficulty: Easy ✔

<div align="center">
  <img src="/img/C++mini.png">
</div>

**Objective**

- In this challenge, we practice reading input from stdin and printing output to stdout.
- In C++, you can read a single whitespace-separated token of input using cin, and print output to stdout using cout. For example, let's say we declare the following variables:

```C++
string s;
int n;
```

and we want to use cin to read the input "High 5" from stdin. We can do this with the following code:

```C++
cin >> s >> n;
```

- This reads the first word ("High") from stdin and saves it as string , then reads the second word ("") from stdin and saves it as integer . If we want to print these values to stdout, separated by a space, we write the following code:

```C++
cout << s << " " << n << endl;
```

- This code prints the contents of string `s`, a single space `" "`, then the integer `n`. We end our line of output with a newline using endl. This results in the following output:

```C++
High 5
```

**Task**

- Read `3` numbers from stdin and print their sum to stdout.

**Input Format**

- One line that contains `3` space-separated integers: `a`, `b`, and `c`.

**Constraints**

- `1 <= a,b,c <= 1000`

**Output Format**

- Print the sum of the three numbers on a single line.

**Sample Input**

```C++
1 2 7
```

**Sample Output**

```C++
10
```

**Explanation**

The sum of the three numbers is `1 + 2 + 7 = 10`.
