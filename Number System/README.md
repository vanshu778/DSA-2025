# Number System Conversions

This repository provides an overview of number system conversions, including Binary, Decimal, Octal, and Hexadecimal conversions.

## Number Systems:
- **Decimal (Base-10)** → Digits: {0,1,2,3,4,5,6,7,8,9}
- **Binary (Base-2)** → Digits: {0,1}
- **Octal (Base-8)** → Digits: {0,1,2,3,4,5,6,7}
- **Hexadecimal (Base-16)** → Digits: {0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F}

## Conversions

### 1. Binary to Decimal
- Multiply each binary digit by **2ⁿ** (where n is the position from right, starting at 0).
- Sum the results.

Example: Convert **1101₂** to decimal.
```
(1 × 2³) + (1 × 2²) + (0 × 2¹) + (1 × 2⁰) = 8 + 4 + 0 + 1 = 13₁₀
```

### 2. Binary to Hexadecimal
- Group binary digits into sets of **4** from right to left.
- Convert each group to its hexadecimal equivalent.

Example: Convert **11011011₂** to hexadecimal.
```
1101 1011 → D B
Hexadecimal = DB₁₆
```

### 3. Binary to Octal
- Group binary digits into sets of **3** from right to left.
- Convert each group to its octal equivalent.

Example: Convert **101110₂** to octal.
```
101 110 → 5 6
Octal = 56₈
```

### 4. Decimal to Octal
- Divide the decimal number by **8**.
- Record the remainder.
- Continue dividing until the quotient is 0.
- Read the remainders in reverse order.

Example: Convert **125₁₀** to octal.
```
125 ÷ 8 = 15 remainder 5
15 ÷ 8 = 1 remainder 7
1 ÷ 8 = 0 remainder 1
Octal = 175₈
```

### 5. Decimal to Binary
- Divide the decimal number by **2**.
- Record the remainder.
- Continue dividing until the quotient is 0.
- Read the remainders in reverse order.

Example: Convert **25₁₀** to binary.
```
25 ÷ 2 = 12 remainder 1
12 ÷ 2 = 6 remainder 0
6 ÷ 2 = 3 remainder 0
3 ÷ 2 = 1 remainder 1
1 ÷ 2 = 0 remainder 1
Binary = 11001₂
```

### 6. Octal to Binary
- Convert each octal digit to its **3-bit binary** equivalent.

Example: Convert **57₈** to binary.
```
5₈ = 101₂
7₈ = 111₂
Binary = 101111₂
```

### 7. Octal to Decimal
- Multiply each digit by **8ⁿ** (where n is the position from right, starting at 0).
- Sum the results.

Example: Convert **157₈** to decimal.
```
(1 × 8²) + (5 × 8¹) + (7 × 8⁰) = 64 + 40 + 7 = 111₁₀
```

### 8. Hexadecimal to Binary
- Convert each hexadecimal digit into its **4-bit binary** equivalent.

Example: Convert **A3₁₆** to binary.
```
A₁₆ = 1010₂
3₁₆ = 0011₂
Binary = 10100011₂
```

### 9. Hexadecimal to Decimal
- Multiply each digit by **16ⁿ** (where n is the position from right, starting at 0).
- Sum the results.

Example: Convert **2F₁₆** to decimal.
```
(2 × 16¹) + (15 × 16⁰) = 32 + 15 = 47₁₀
```

### 10. Hexadecimal to Octal
- Convert hex to binary (4-bit per hex digit).
- Group the binary digits into sets of 3 and convert to octal.

Example: Convert **1F₁₆** to octal.
```
1₁₆ = 0001₂
F₁₆ = 1111₂
Binary = 0001 1111
Grouping (3-bit): 001 111 1
Octal = 37₈
```

## License
This repository is licensed under the MIT License.
