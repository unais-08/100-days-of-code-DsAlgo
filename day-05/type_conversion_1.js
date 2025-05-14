// Type Conversion in JavaScript (Primitives Only)
// Run using: node type-conversions.js

// ------------------------------------------------
// 1. String Conversion
// Happens when we need a string version of something
// Can be done using String(value)

let value = true;
console.log("Before String Conversion:", typeof value); // boolean
value = String(value); // Converts to "true"
console.log("After String Conversion:", typeof value); // string
console.log("Value is:", value); // "true"

// More examples:
console.log(String(123)); // "123"
console.log(String(null)); // "null"
console.log(String(undefined)); // "undefined"

// ------------------------------------------------
// 2. Numeric Conversion
// Happens in math operations or manually using Number(value)

console.log("6" / "2"); // 3 → both strings are converted to numbers

let str = "123";
let num = Number(str);
console.log("Type of num:", typeof num); // number
console.log("Value of num:", num); // 123

// What happens when conversion fails?
let wrong = Number("abc");
console.log("Invalid Number:", wrong); // NaN

// Numeric Conversion Rules
console.log(Number(undefined)); // NaN
console.log(Number(null)); // 0
console.log(Number(true)); // 1
console.log(Number(false)); // 0

console.log(Number("   456   ")); // 456 → spaces ignored
console.log(Number("789z")); // NaN → invalid number after 789
console.log(Number("")); // 0 → empty string = 0

// ------------------------------------------------
// 3. Boolean Conversion
// Happens in conditions or manually using Boolean(value)

console.log(Boolean(1)); // true
console.log(Boolean(0)); // false
console.log(Boolean("hello")); // true
console.log(Boolean("")); // false

// Special note: non-empty strings are always true
console.log(Boolean("0")); // true → non-empty string
console.log(Boolean(" ")); // true → space is still non-empty

// Boolean Conversion Rules Summary
// These are falsy:
console.log(Boolean(0)); // false
console.log(Boolean(null)); // false
console.log(Boolean(undefined)); // false
console.log(Boolean(NaN)); // false
console.log(Boolean("")); // false

// Everything else is truthy:
console.log(Boolean("hi")); // true
console.log(Boolean(42)); // true
console.log(Boolean([])); // true
console.log(Boolean({})); // true (note: objects are always truthy, even empty ones)

// ------------------------------------------------
// Summary of Key Points

// ✅ String Conversion → String(value)
// ✅ Number Conversion → Number(value)
// ✅ Boolean Conversion → Boolean(value)

// 🚫 undefined → NaN (when converted to number)
// ⚠️ "0" and " " (space) → true (when converted to boolean)

// Objects are NOT covered here, will be handled separately.
