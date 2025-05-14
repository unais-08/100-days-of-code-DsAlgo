// ✅ JavaScript Data Types Explained Clearly

// ------------------------------
// 🟢 1. PRIMITIVE TYPES
// ------------------------------

// 🔹 Number
const userAge = 25;
const accountBalance = 10234.56;
console.log(typeof userAge); // "number"

// 🔹 String
const userName = "Unais Shaikh";
const welcomeMessage = `Hello, ${userName}!`;
console.log(typeof userName); // "string"

// 🔹 Boolean
const isLoggedIn = true;
const hasPremiumAccess = false;
console.log(typeof isLoggedIn); // "boolean"

// 🔹 Undefined
let uninitializedVar; // declared but not assigned
console.log(typeof uninitializedVar); // "undefined"

// 🔹 Null
const selectedProduct = null; // intentional empty value
console.log(typeof selectedProduct); // "object" (weird JavaScript quirk)

// 🔹 BigInt (used for large integers beyond safe limit)
const largeNumber = 900719925474099123456789n;
console.log(typeof largeNumber); // "bigint"

// 🔹 Symbol (used for unique identifiers)
const uniqueKey = Symbol("id");
console.log(typeof uniqueKey); // "symbol"

// 🔁 Primitive values are copied by value
let originalScore = 100;
let copiedScore = originalScore;
copiedScore = 200;
console.log(originalScore); // 100 — original not affected

// ------------------------------
// 🟠 2. NON-PRIMITIVE (REFERENCE) TYPES
// ------------------------------

// 🔹 Object
const userProfile = {
  name: "Unais",
  age: 22,
  skills: ["JS", "React"],
};
console.log(typeof userProfile); // "object"

// 🔹 Array (special type of object)
const techStack = ["HTML", "CSS", "JavaScript", "React"];
console.log(typeof techStack); // "object"
console.log(Array.isArray(techStack)); // true

// 🔹 Function (also an object, but callable)
function greetUser(name) {
  return `Welcome, ${name}`;
}
console.log(typeof greetUser); // "function"

// 🔁 Reference values are copied by reference
let userOne = { city: "Pune" };
let userTwo = userOne;
userTwo.city = "Mumbai";
console.log(userOne.city); // "Mumbai" — both point to the same object

// ------------------------------
// 🧠 Bonus: typeof quirks and edge cases
// ------------------------------

console.log(typeof NaN); // "number" — NaN is still a number type
console.log(typeof null); // "object" — known JavaScript bug
console.log(typeof []); // "object"
console.log(typeof {}); // "object"
console.log(typeof (() => {})); // "function"

// ------------------------------
// ✅ Summary Reminder
// ------------------------------
/*
Primitive (copied by value):
- Number, String, Boolean, Undefined, Null, BigInt, Symbol

Non-Primitive (copied by reference):
- Object, Array, Function

Use `typeof` to inspect, but remember:
- typeof null === "object"
- typeof [] === "object", use Array.isArray() to check arrays
- typeof NaN === "number"
*/
