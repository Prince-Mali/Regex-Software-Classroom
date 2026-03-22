// How do you add a new property to an existing object?

// Ans. ---
/* add a new property to an existing object in JavaScript in two main ways --

1) Dot notation (most common) - Use this when the property name is a valid identifier.
    Example:- 
        const user = {
            name: "Prince"
        };
        user.age = 20;
        console.log(user); // { name: "Prince", age: 20 }
    
2) Bracket notation - Use this when: 
    -> the key is dynamic 
    -> the key has spaces or special characters
    Example:-
        const user = {
            name: "Prince"
        };
        user["city"] = "Jaipur";
        console.log(user); // { name: "Prince", city: "Jaipur" }
*/
