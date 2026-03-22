// What happens if two properties in an object have the same key?

// Ans. ---
/* if an object literal contains two properties with the same key, the later one overwrites the earlier one.

Example: -
    const user = {
        name: "Prince",
        age: 20,
        name: "Rahul"
    };
    console.log(user); // { name: "Rahul", age: 20 }
    -> Here, "Rahul" replaces "Prince" because both use the same key name.
*/
