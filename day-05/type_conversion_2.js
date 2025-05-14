// Type Conversions in JavaScript (for primitives only)

console.log("\n=== 1. STRING CONVERSION ===");
// Happens when: outputting values, concatenation with strings, or using String()
let value = true;
console.log(typeof value); // boolean
value = String(value); // converts to "true"
console.log(typeof value); // string
console.log(value); // "true"

console.log(String(null)); // "null"
console.log(String(undefined)); // "undefined"
console.log(String(123)); // "123"

console.log("\n=== 2. NUMBER CONVERSION ===");
// Happens when: using math operators, or explicitly using Number()

// Implicit conversion
console.log("6" / "2"); // 3 → both strings are converted to numbers

// Explicit conversion using Number()
console.log(Number("123")); // 123
console.log(Number("   123   ")); // 123 → spaces trimmed
console.log(Number("")); // 0 → empty string
console.log(Number("abc")); // NaN → invalid number
console.log(Number(true)); // 1
console.log(Number(false)); // 0
console.log(Number(null)); // 0
console.log(Number(undefined)); // NaN

console.log("\n=== 3. BOOLEAN CONVERSION ===");
// Happens when: in conditions (if, while), or using Boolean()

console.log(Boolean(1)); // true
console.log(Boolean(0)); // false
console.log(Boolean("hello")); // true
console.log(Boolean("")); // false

// Special cases
console.log(Boolean("0")); // true → non-empty string is truthy
console.log(Boolean(" ")); // true → space string is also truthy
console.log(Boolean([])); // true → empty array is truthy
console.log(Boolean({})); // true → empty object is truthy
console.log(Boolean(null)); // false
console.log(Boolean(undefined)); // false
console.log(Boolean(NaN)); // false

console.log("\n=== 4. RULES OF THUMB ===");

// When JS expects:
// - A STRING → call String(value)
// - A NUMBER → call Number(value)
// - A BOOLEAN → call Boolean(value)

// Common results
console.log(String(false)); // "false"
console.log(Number("")); // 0
console.log(Boolean("false")); // true → it's a non-empty string

console.log("\n=== 5. COMMON GOTCHAS & EXCEPTIONS ===");

// Null vs Undefined in Number conversion
console.log(Number(null)); // 0
console.log(Number(undefined)); // NaN

// String "0" is truthy
console.log(Boolean("0")); // true
console.log(Boolean(" ")); // true → not an empty string

// NaN is never equal to NaN
console.log(NaN == NaN); // false

// null loosely equals undefined
console.log(null == undefined); // true
console.log(null === undefined); // false

// typeof null is object (JavaScript bug)
console.log(typeof null); // object

console.log("\n=== 6. STRANGE CASES (Arrays and Objects) ===");

// Arrays → String / Number
console.log([] + 1); // "1" → [] becomes ""
console.log([1] + 1); // "11" → [1] becomes "1"
console.log([1, 2] + 1); // "1,21" → [1,2] becomes "1,2"
console.log(Number([])); // 0
console.log(String([])); // ""

// Objects (covered in detail later)
console.log({} + []); // "[object Object]" → confusing
console.log([] + {}); // "[object Object]"
console.log({} + {}); // "[object Object][object Object]"

// Summary of Falsy values:
const falsyValues = [false, 0, "", null, undefined, NaN];
falsyValues.forEach((val) => {
  console.log(`Boolean(${JSON.stringify(val)}) →`, Boolean(val));
});

// Summary of Truthy values:
const truthyValues = ["0", " ", [], {}, 42, "false"];
truthyValues.forEach((val) => {
  console.log(`Boolean(${JSON.stringify(val)}) →`, Boolean(val));
});
