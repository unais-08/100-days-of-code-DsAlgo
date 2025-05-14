// ===================================================
// JavaScript Array Method Exercises (Basic Methods)
// ===================================================

// ---------------------------------------------
// Q1: Start with an empty array.
// Add 'JavaScript', 'Python', and 'C++' using push().
// Log the final array.
// ---------------------------------------------

const programmingLanguages = [];
console.log("Initial empty array:", programmingLanguages);

programmingLanguages.push("JavaScript");
programmingLanguages.push("Python");
programmingLanguages.push("C++");

console.log("After adding elements with push():", programmingLanguages);

// ---------------------------------------------
// Q2: Given ['HTML', 'CSS', 'JavaScript']
// Remove the last element using pop().
// Log the removed value and the updated array.
// ---------------------------------------------

const webTechnologies = ["HTML", "CSS", "JavaScript"];
const removedLastElement = webTechnologies.pop();

console.log("After removing last element with pop():", webTechnologies);
console.log("Removed element:", removedLastElement);

// ---------------------------------------------
// Q3: Given ['React', 'Vue']
// Insert 'Angular' at the beginning using unshift().
// Log the updated array.
// ---------------------------------------------

const jsFrameworks = ["React", "Vue"];
jsFrameworks.unshift("Angular");

console.log("After inserting at the beginning with unshift():", jsFrameworks);

// ---------------------------------------------
// Q4: Given ['PHP', 'Ruby', 'Perl']
// Remove the first element using shift().
// Log the removed element and the updated array.
// ---------------------------------------------

const scriptingLanguages = ["PHP", "Ruby", "Perl"];
const removedFirstElement = scriptingLanguages.shift();

console.log("After removing first element with shift():", scriptingLanguages);
console.log("Removed element:", removedFirstElement);

// ---------------------------------------------
// Q5: Given ['Go', 'Rust', 'Swift']
// Replace 'Rust' with 'Kotlin' using splice().
// Log the updated array.
// ---------------------------------------------

const modernLanguages = ["Go", "Rust", "Swift"];
modernLanguages.splice(1, 1, "Kotlin"); // Replace 1 element at index 1

console.log(
  "After replacing 'Rust' with 'Kotlin' using splice():",
  modernLanguages
);

// ---------------------------------------------
// Q6: Given ['Java', 'C', 'Python', 'C++', 'Ruby']
// Extract 'Python' and 'C++' using slice().
// Log the new array and ensure the original is unchanged.
// ---------------------------------------------

const mixedLanguages = ["Java", "C", "Python", "C++", "Ruby"];
const extractedLanguages = mixedLanguages.slice(2, 4); // 'Python' and 'C++'

console.log("Original array remains unchanged:", mixedLanguages);
console.log("Extracted portion using slice():", extractedLanguages);

// ---------------------------------------------
// Q7: Given ['HTML', 'CSS', 'JavaScript']
// Check if 'JavaScript' is present
// Check if 'TypeScript' is present
// Log both results using includes()
// ---------------------------------------------

const frontendLanguages = ["HTML", "CSS", "JavaScript"];

const hasJavaScript = frontendLanguages.includes("JavaScript");
const hasTypeScript = frontendLanguages.includes("TypeScript");

console.log("Includes 'JavaScript'?", hasJavaScript); // true
console.log("Includes 'TypeScript'?", hasTypeScript); // false

// ---------------------------------------------
// Q8: Given ['HTML', 'CSS', 'JavaScript']
// Join all elements with ' - ' using join().
// Result should be: "HTML - CSS - JavaScript"
// ---------------------------------------------

const joinedLanguages = frontendLanguages.join(" - ");
console.log("Joined string using join():", joinedLanguages);
