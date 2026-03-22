// How do you check if a property exists in an object?

// Ans. ---
/* By using --
1) in operator (checks own + inherited properties) -
    Example:-
        const user = {
            name: "Prince",
            age: 20
        };
        console.log("name" in user); // true
        console.log("city" in user); // false

2) hasOwnProperty() (checks only own properties) -
    Example:-
        const user = {
            name: "Prince"
        };
        console.log(user.hasOwnProperty("name")); // true
        console.log(user.hasOwnProperty("toString")); // false

Quick difference:-
    -> in → checks own + prototype chain
    -> hasOwnProperty() → checks only own object properties
    -> Object.hasOwn() → modern safest way
*/
