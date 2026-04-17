import db from "../db.js";

// Qs.1 :- Get all user's name

document.getElementById('getUserName').addEventListener('click', ()=> {
    let users = db.users;
    let container = document.getElementById('qs-1');

    container.innerHTML = '';

    users.forEach((user) => {
        let nameEl = document.createElement('p');

        nameEl.innerHTML = `<b>UserName</b>: ${user.name}`;
        container.appendChild(nameEl);
    });
});

// Qs.2 :- Find user with userId = 1

document.getElementById('findUser').addEventListener('click', () => {
    let users = db.users;

    let user = users.find((user) => user.userId == 1);

    document.getElementById('qs-2').innerHTML = `
        <p><b>User Id: </b>: ${user.userId}</p>
        <p><b>Name: </b>: ${user.name}</p>
        <p><b>Email: </b>: ${user.email}</p>
        <p><b>Address: </b>: ${user.address.city},${user.address.country}</p>
    `;
});


// Qs.3 :- Get all products with price greater than 10,000.

document.getElementById('getProduct').addEventListener('click', () => {
    let allProduct = db.products;

    let products = allProduct.filter((product) => product.price > 10000);

    let container = document.getElementById('qs-3');
    let ol = document.createElement('ol');

    container.innerHTML = '';
    
    products.forEach((product) => {
        let li = document.createElement('li');

        li.innerHTML = `
            <ul>
                <li>Product Id: ${product.productId}</li>
                <li>Product Name: ${product.name}</li>
                <li>Product Price: ${product.price}</li>
            </ul>
            <hr>
        `;

        ol.appendChild(li);
    });

    container.appendChild(ol);
});


// Qs. 4 :- List all categories names.

document.getElementById('getAllCategories').addEventListener('click', () => {
    let categories = db.categories;

    let container = document.getElementById('qs-4');
    let ul = document.createElement('ul');

    container.innerHTML = '';

    categories.forEach((category) => {
        let li = document.createElement('li');

        li.innerHTML = `<b>Category Name: </b> ${category.name}`;

        ul.appendChild(li);
    });

    container.appendChild(ul);
});


// Qs. 5 :- Find all vendors with rating above 4.3.

document.getElementById('findVendor').addEventListener('click', () => {
    let allVendors = db.vendors;

    let vendors = allVendors.filter((vendor) => vendor.rating > 4.3);

    let container = document.getElementById('qs-5');
    let ul = document.createElement('ul');

    container.innerHTML = '';

    vendors.forEach((vendor) => {
        let li = document.createElement('li');

        li.innerHTML = `
            <ul>
                <li>Vendor ID: ${vendor.vendorId}</li>
                <li>Vendor Name: ${vendor.name}</li>
                <li>Rating: ${vendor.rating}</li>
                <li>Location: ${vendor.location}</li>
            </ul>
            <hr>
        `;

        ul.appendChild(li);
    });

    container.appendChild(ul);
});

// Qs. 6 :- Get all products with stock less than 10.

document.getElementById('getProd_stk').addEventListener('click', () => {
    let products = db.products;
    let productList = products.filter((product) => product.stock < 10);

    let container = document.getElementById('qs-6');
    let ol = document.createElement('ol');

    container.innerHTML = '';

    productList.forEach((product) => {
        let li = document.createElement('li');

        li.innerHTML = `
            <ul>
                <li>Product ID: ${product.productId}</li>
                <li>Product Name: ${product.name}</li>
                <li>Stock: ${product.stock}</li>
            </ul>
            <hr>
        `;

        ol.appendChild(li);
    });

    container.appendChild(ol);
});


// Qs. 7 :- Find all users from "Delhi".

document.getElementById('findUser-delhi').addEventListener('click', () => {
    let allUsers = db.users;

    let usersList = allUsers.filter((user) => user.address.city.toLowerCase() == 'delhi');

    let container = document.getElementById('qs-7');
    let ol = document.createElement('ol');

    container.innerHTML = '';

    usersList.forEach((user) => {
        let li = document.createElement('li');

        li.innerHTML = `
            <ul>
                <li>UserID: ${user.userId}</li>
                <li>Name: ${user.name}</li>
                <li>Email: ${user.email}</li>
                <li>Address: ${user.address.city}, ${user.address.country}</li>
            </ul>
            <hr>
        `;

        ol.appendChild(li);
    });

    container.appendChild(ol);
});

// Qs. 8 :- Get all orders with status "Delivered".

document.getElementById('getOrders').addEventListener('click', () => {
    let allOrders = db.orders;

    let ordersList = allOrders.filter((order) => order.delivery.status.toLowerCase() == 'delivered');

    let container = document.getElementById('qs-8');
    let ol = document.createElement('ol');

    container.innerHTML = '';

    ordersList.forEach((order) => {
        let li = document.createElement('li');

        li.innerHTML = `
            <ul>
                <li><b>OrderID:</b> ${order.orderId}</li>
                <li><b>Order Date:</b> ${order.orderDate}</li>
                <li><b>Order Status:</b> ${order.delivery.status}</li>
            </ul>
            <hr>
        `;
        ol.appendChild(li);
    });

    container.appendChild(ol);
});


// Qs. 9 :- Count total number of products.

document.getElementById('countProduct').addEventListener('click', () => {
    let products = db.products;

    document.getElementById('qs-9').innerHTML = `<p>Total No. of Products: ${products.length}</p>`;
});


// Qs. 10 :- Get all wishlist products of user 1.

document.getElementById('getWishlist').addEventListener('click', () => {
    let wishlist = db.users[0].wishlist;

    let wishListProduct = [];

    db.products.forEach((product) => {
        if(wishlist.includes(product.productId)) wishListProduct.push(product);
    });

    let container = document.getElementById('qs-10');
    let ol = document.createElement('ol');

    container.innerHTML = '';

    wishListProduct.forEach((product) => {
        let li = document.createElement('li');

        li.innerHTML = `
            <ul>
                <li><b>Product ID:</b> ${product.productId}</li>
                <li><b>Product Name:</b> ${product.name}</li>
            </ul>
            <hr>
        `;

        ol.appendChild(li);
    });

    container.appendChild(ol);
});

