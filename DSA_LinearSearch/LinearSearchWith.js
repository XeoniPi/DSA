class LinearSearch{
    Solve = function(arr, target) {
        for (let i = 0; i < arr.length; i++) {
            if (arr[i] === target) {
                return i; 
            }
        }
        return -1; 
    }
}

const searching = new LinearSearch();
const arr = [10, 23, 45, 70, 11, 15];
const target = 11;
const result = searching.Solve(arr, target);
console.log(result); // Output: 4 (index of target in array)

// Exlpaination:
// The LinearSearch class contains a method called Solve that takes an array and a target value as inputs.
// It iterates through each element of the array, checking if it matches the target value.
// If a match is found, it returns the index of that element. If no match is found after checking all elements, it returns -1.
