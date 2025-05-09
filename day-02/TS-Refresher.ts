let college: string = "King's College London";
// college = true;
const established: number = 1829;
const address: string = "London, UK";
const numberOfStudents: number = 30000;
const numberOfCourses: number = 200;
const provideScholarships: boolean = true;

const fruits: string[] = ["apple", "banana", "orange", "grape", "kiwi"];
const numbers: number[] = [1, 2, 3, 4, 5];
const mixedArray: (string | number)[] = ["apple", 1, "banana", 2, "orange", 3];
const tuple: [string, number] = ["apple", 1];
const tupleArray: [string, number][] = [
  ["apple", 1],
  ["banana", 2],
  ["orange", 3],
];
for (let i: number = 0; i < fruits.length; i++) {
  console.log(i);
}

fruits.forEach((fruit: string) => console.log(fruit.toUpperCase()));

const object: { name: string; age: number } = {
  name: "John Doe",
  age: 30,
};
const objectArray: { name: string; age: number }[] = [
  { name: "John Doe", age: 30 },
  { name: "Jane Smith", age: 25 },
  { name: "Alice Johnson", age: 28 },
];
const objectWithOptionalProperty: {
  name: string;
  age: number;
  address?: string;
} = {
  name: "John Doe",
  age: 30,
};
const objectWithOptionalPropertyArray: {
  name: string;
  age: number;
  address?: string;
}[] = [
  { name: "John Doe", age: 30 },
  { name: "Jane Smith", age: 25, address: "123 Main St" },
  { name: "Alice Johnson", age: 28 },
];
const objectWithReadonlyProperty: {
  readonly name: string;
  age: number;
} = {
  name: "John doe",
  age: 30,
};
// objectWithReadonlyProperty.name = "Jane Smith"; // Error: Cannot assign to 'name' because it is a read-only property

interface CollegeDetails {
  college: string;
  established: number;
  address: string;
  numberOfStudents: number;
  numberOfCourses: number;
  provideScholarships: boolean;
}

const collegeDetails: CollegeDetails = {
  college: "King's College London",
  established: 1829,
  address: "London, UK",
  numberOfStudents: 30000,
  numberOfCourses: 200,
  provideScholarships: true,
};
// console.log(collegeDetails);

interface PersonDetails {
  name: string;
  age: number;
  address?: string | number;
}

function getPersonDetail(person: PersonDetails): PersonDetails {
  return person;
}

const d = getPersonDetail({ age: 30, name: "John Doe" });
console.log(d);
