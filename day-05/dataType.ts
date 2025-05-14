// ✅ JavaScript/TypeScript Data Types Explained Clearly

// ------------------------------
// 🟢 1. PRIMITIVE TYPES
// ------------------------------
// Primitives are immutable and passed by value.

// 🔹 Number
const userAge: number = 25;
const walletBalance: number = 10234.56;

console.log("User Age:", userAge); // 25
console.log("Type of userAge:", typeof userAge); // "number"

// 🔹 String
const fullName: string = "Unais Shaikh";
const greetingMessage: string = `Hello, ${fullName}!`;

console.log(greetingMessage); // "Hello, Unais Shaikh!"
console.log("Type of fullName:", typeof fullName); // "string"

// 🔹 Boolean
const isUserLoggedIn: boolean = true;
const hasPremiumMembership: boolean = false;

console.log("Type of isUserLoggedIn:", typeof isUserLoggedIn); // "boolean"

// 🔹 Undefined
let pendingData: undefined; // declared but not initialized

console.log("Type of pendingData:", typeof pendingData); // "undefined"

// 🔹 Null
let selectedItem: null | { id: number; name: string } = null; // intentional absence of value

console.log("Type of selectedItem:", typeof selectedItem); // "object" (quirk)

selectedItem = { id: 1, name: "Laptop" };
console.log("Type after assigning object:", typeof selectedItem); // "object"

// 🔹 BigInt (for very large integers)
const totalPopulation: bigint = 900719925474099123456789n;

console.log("Type of totalPopulation:", typeof totalPopulation); // "bigint"

// 🔹 Symbol (unique identifiers)
const userIdSymbol: symbol = Symbol("user_id");

console.log("Type of userIdSymbol:", typeof userIdSymbol); // "symbol"

// ------------------------------
// 🟠 2. NON-PRIMITIVE (REFERENCE) TYPES
// ------------------------------
// Reference types are mutable and passed by reference.

// 🔹 Object
const userDetails: {
  name: string;
  age: number;
  skills: string[];
} = {
  name: "Unais",
  age: 22,
  skills: ["JavaScript", "React"],
};

console.log("Type of userDetails:", typeof userDetails); // "object"
console.log("Type of userDetails.skills:", typeof userDetails.skills); // "object"

// 🔹 Array (a type of object)
const frontEndStack: string[] = ["HTML", "CSS", "JavaScript", "React"];

console.log("Type of frontEndStack:", typeof frontEndStack); // "object"
console.log("Is Array:", Array.isArray(frontEndStack)); // true

// 🔹 Function (a callable object)
function generateWelcomeMessage(lastName: string): string {
  return `Welcome, Mr. ${lastName}`;
}

console.log("Type of generateWelcomeMessage:", typeof generateWelcomeMessage); // "function"

// 🔁 Reference values are copied by reference
let addressA: { city: string } = { city: "Pune" };
let addressB = addressA;

addressB.city = "Mumbai"; // Modifies both because they point to same object

console.log("City in addressA:", addressA.city); // "Mumbai"

// ------------------------------
// 🧠 Bonus: typeof quirks and edge cases
// ------------------------------
console.log("Type of NaN:", typeof NaN); // "number"
console.log("Type of null:", typeof null); // "object" (JS bug)
console.log("Type of [] (Array):", typeof []); // "object"
console.log("Type of {} (Object):", typeof {}); // "object"
console.log("Type of () => {} (Function):", typeof (() => {})); // "function"

// ------------------------------
// ✅ Summary Cheat Sheet
// ------------------------------
/*
🔹 Primitive Types (immutable, copied by value):
  - number, string, boolean, undefined, null, bigint, symbol

🔸 Reference Types (mutable, copied by reference):
  - object, array, function

🧠 Notes:
  - typeof null === "object" (JavaScript quirk)
  - typeof [] === "object", use Array.isArray() to confirm arrays
  - typeof NaN === "number"
*/
