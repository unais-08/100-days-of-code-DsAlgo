// Bitwise Operators in JavaScript

let a = 5; // Binary: 00000000000000000000000000000101
let b = 3; // Binary: 00000000000000000000000000000011

// AND (&): Only 1 if both bits are 1
console.log("a & b =", a & b); // 1 => 00000000000000000000000000000001

// OR (|): 1 if at least one bit is 1
console.log("a | b =", a | b); // 7 => 00000000000000000000000000000111

// XOR (^): 1 if bits are different
console.log("a ^ b =", a ^ b); // 6 => 00000000000000000000000000000110

// NOT (~): Inverts all bits and returns the two's complement
console.log("~a =", ~a); // -6 => flips all bits of 5

//-----------------------------------------------------

// Left Shift (<<): Shifts bits to the left, fills right with 0s
let x = 5; // Binary: 00000000000000000000000000000101

console.log("x << 1 =", x << 1); // 10 => 5 * 2
console.log("x << 2 =", x << 2); // 20 => 5 * 4

//-----------------------------------------------------

// Right Shift (>>): Shifts bits to the right, keeps the sign bit
let y = 10; // Binary: 00000000000000000000000000001010

console.log("y >> 1 =", y >> 1); // 5 => 10 / 2
console.log("y >> 2 =", y >> 2); // 2 => 10 / 4

//-----------------------------------------------------

// Unsigned Right Shift (>>>): Shifts bits right and fills left with 0s
// Works differently for negative numbers
let z = -5; // In binary (32-bit): 11111111111111111111111111111011

console.log("z >>> 1 =", z >>> 1);
// 2147483645 => becomes a large positive number (fills left with 0)
