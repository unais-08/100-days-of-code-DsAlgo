// JavaScript Array Deep Dive Tutorial

// ============================
// 1. Array Declaration and Initialization
// ============================

// Basic array using literal syntax
const fruits = ["apple", "banana", "cherry"];

// Using Array constructor
const numbers = new Array(1, 2, 3, 4); // Avoid if possible, can be confusing
const emptySlots = new Array(3); // Creates [empty x 3]

// Using Array.of() - always returns an array of given arguments
const arrFromOf = Array.of(5); // [5]
console.log(arrFromOf);

// Using Array.from() - converts iterable or array-like object
const str = "hello";
const arrFromStr = Array.from(str); // ['h', 'e', 'l', 'l', 'o']

// ============================
// 2. Arrays are Objects
// ============================

const mixedArray = [1, "string", true];
// Internally treated like:
// { 0: 1, 1: "string", 2: true, length: 3 }
console.log(mixedArray["0"]);
// typeof is 'object'
console.log(typeof mixedArray); // 'object'

// ============================
// 3. Accessing and Modifying Elements
// ============================

const scores = [10, 20, 30];
console.log(scores[1]); // 20
scores[2] = 99; // Modify value at index 2

// ============================
// 4. Length Property and Sparse Arrays
// ============================

const sparse = [1, 2];
sparse[5] = 10;
console.log(sparse); // [1, 2, <3 empty items>, 10]
console.log(sparse.length); // 6

// Changing length manually (truncate)
sparse.length = 2;
console.log(sparse); // [1, 2]

// ============================
// 5. Common Array Methods
// ============================

const items = [1, 2, 3];
items.push(4); // Adds to end: [1, 2, 3, 4]
items.pop(); // Removes from end: [1, 2, 3]
items.unshift(0); // Adds to start: [0, 1, 2, 3]
items.shift(); // Removes from start: [1, 2, 3]

// Splice - add/remove in middle
items.splice(1, 1, 99); // [1, 99, 3] (remove 1 item at index 1, insert 99)

// Slice - returns shallow copy
const sliced = items.slice(0, 2); // [1, 99]

// ============================
// 6. Iteration Techniques
// ============================

const nums = [1, 2, 3];

// For loop
for (let i = 0; i < nums.length; i++) {
  console.log("For loop:", nums[i]);
}

// For...of
for (const val of nums) {
  console.log("For...of:", val);
}

// forEach
nums.forEach((val, index) => {
  console.log(`forEach - Index ${index}:`, val);
});

// map - returns new array
const doubled = nums.map((x) => x * 2); // [2, 4, 6]

// filter - conditionally keep elements
const evens = nums.filter((x) => x % 2 === 0); // [2]

// reduce - accumulate values
const sum = nums.reduce((acc, cur) => acc + cur, 0); // 6

// ============================
// 7. Multidimensional Arrays
// ============================

const matrix = [
  [1, 2],
  [3, 4],
];

console.log(matrix[1][0]); // 3

// ============================
// 8. Type Checking and Safety
// ============================

console.log(Array.isArray(matrix)); // true

// Prevent mutation (shallow freeze)
const frozen = Object.freeze([1, 2, 3]);
// frozen.push(4); // TypeError in strict mode

// ============================
// 9. Performance Tips
// ============================

// Avoid creating holes in arrays
const holey = [];
holey[1000] = "bad"; // Slower access, becomes dictionary mode internally

// Prefer push/pop over shift/unshift
const perfArr = [1, 2, 3];
perfArr.push(4); // Fast
perfArr.pop(); // Fast
perfArr.unshift(0); // Slower, shifts everything
perfArr.shift(); // Slower

// ============================
// 10. Summary and Best Practices
// ============================

// - Use array literals [] over new Array()
// - Avoid sparse arrays and holes
// - Prefer push/pop for better performance
// - Use Array methods (map/filter/reduce) for clean logic
// - Use Object.freeze() or spread operator to avoid mutation
// - Always check array type with Array.isArray()

// End of deep-dive tutorial on JavaScript Arrays
