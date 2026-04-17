import db from '../db.js';

// Qs.1: Get total cart value of user 1.

document.querySelector("#qs-1-btn").addEventListener('click', () => {
    let user1 = db.users[0];
    let products = db.products;

    let totalCartVal = 0;
    user1.cart.forEach((item) => {
        // console.log(item);
        let product = products.find((product) => product.productId == item.productId);
        // console.log(product);

        totalCartVal += product.price * item.quantity;
    });

    document.getElementById('qs-1').innerHTML = `<p>Total Cart Value of User 1: ${totalCartVal}</p>`;
});


// Qs.2: Find all products in "Electronics" category.

document.getElementById('qs-2-btn').addEventListener('click', () => {
    let allProducts = db.products;

    let category = db.categories.find((category) => category.name.toLowerCase() == 'electronics');

    let productList = allProducts.filter((product) => product.categoryId == category.categoryId);

    let container = document.getElementById('qs-2');
    container.innerHTML = '';

    productList.forEach((product) => {
        let divEl = document.createElement('div');

        divEl.style.margin = '1rem';
        divEl.innerHTML = `
            <p><b>ProductID</b>: ${product.productId}</p>
            <p><b>Product Name:</b> ${product.name}</p>
            <p><b>Product Category:</b> ${category.name}</p>
            <hr>
        `;

        container.appendChild(divEl);
    });
});


// Qs.3: Get vendor name for each product.

document.getElementById('qs-3-btn').addEventListener('click', () => {
    let products = db.products;
    let vendors = db.vendors;

    let container = document.getElementById('qs-3');
    container.innerHTML = '';

    let table = document.createElement('table');
    table.style.border = '2px solid black';
    table.style.margin = '0.5rem';
    table.style.textAlign = 'center';

    table.innerHTML = `
        <thead>
            <tr>
                <th>Vendor ID</th>
                <th>Vendor Name</th>
                <th>Product ID</th>
                <th>Product Name</th>
            </tr>
        </thead>
        <tbody></tbody>
    `;

    products.forEach((product) => {
        let vendor = vendors.find((vendor) => vendor.vendorId == product.vendorId);
        console.table(vendor.name, product);

        let trow = document.createElement('tr');

        trow.innerHTML = `
            <td>${vendor.vendorId}</td>
            <td>${vendor.name}</td>
            <td>${product.productId}</td>
            <td>${product.name}</td>
        `;

        table.querySelector('tbody').appendChild(trow);
    });

    container.appendChild(table);
});


// Qs.4. Find total number of orders per user.

document.getElementById('qs-4-btn').addEventListener('click', () => {
    let allUsers = db.users;

    let container = document.getElementById('qs-4');
    container.innerHTML = '';

    let table = document.createElement('table');
    table.style.border = "2px solid black";
    table.style.margin = "0.5rem";
    table.style.textAlign = "center";

    table.innerHTML = `
        <thead>
            <tr>
                <th>UserID</th>
                <th>User Name</th>
                <th>Total Order</th>
            </tr>
        </thead>
        <tbody></tbody>
    `;

    allUsers.forEach((user) => {
        let tr = document.createElement('tr');

        tr.innerHTML = `
            <td>${user.userId}</td>
            <td>${user.name}</td>
            <td>${user.orders.length}</td>
        `;

        table.querySelector('tbody').appendChild(tr);
    });

    container.appendChild(table);
});


// Qs.5: Get all products with rating above 4.5.

document.getElementById('qs-5-btn').addEventListener('click', () => {
    let allProducts = db.products;

    let productList = allProducts.filter((product) => product.rating > 4.5);

    let container = document.getElementById('qs-5');
    container.innerHTML = '';

    let table = document.createElement('table');
    table.style.border = '2px solid black';
    table.style.margin = '0.5rem';
    table.style.textAlign = 'center';

    table.innerHTML = `
        <thead>
            <tr>
                <th>ProductID</th>
                <th>Product Name</th>
                <th>Rating</th>
            </tr>
        </thead>
        <tbody></tbody>
    `;

    productList.forEach((product) => {
        let tr = document.createElement('tr');

        tr.innerHTML = `
            <td>${product.productId}</td>
            <td>${product.name}</td>
            <td>${product.rating}</td>
        `;

        table.querySelector('tbody').appendChild(tr);
    });

    container.appendChild(table);
});


// Qs. 6: Find all orders where payment method is "UPI".

document.getElementById('qs-6-btn').addEventListener('click', () => {
    let allOrders = db.orders;

    let orderList = allOrders.filter((order) => order.payment.method.toLowerCase() == 'upi');

    let container = document.getElementById('qs-6');
    container.innerHTML = '';

    let table = document.createElement('table');
    table.style.border = '2px solid black';
    table.style.margin = '1rem';
    table.style.textAlign = 'center';

    table.innerHTML = `
        <thead>
            <tr>
                <th>OrderID</th>
                <th>UserID</th>
                <th>Payment Mode</th>
                <th>Status</th>
            </tr>
        </thead>
        <tbody></tbody>
    `;

    orderList.forEach((order) => {
        let tr = document.createElement('tr');
        tr.innerHTML = `
            <td>${order.orderId}</td>
            <td>${order.userId}</td>
            <td>${order.payment.method}</td>
            <td>${order.payment.status}</td>
        `;

        table.querySelector('tbody').appendChild(tr);
    });

    container.appendChild(table);
});


// Qs.7: Get all items from order "ORD1001"

document.getElementById('qs-7-btn').addEventListener('click', () => {
    let order = db.orders.find((order) => order.orderId == 'ORD1001');

    let container = document.getElementById('qs-7');
    container.innerHTML = '';

    let table = document.createElement('table');
    table.style.border = '2px solid black';
    table.style.margin = '1rem';
    table.style.textAlign = 'center';

    table.innerHTML = `
        <thead>
            <tr>
                <th>ProductID</th>
                <th>Product Name</th>
                <th>Order Quantity</th>
            </tr>
        </thead>
        <tbody></tbody>
    `;

    order.items.forEach((item) => {
        let product = db.products.find((product) => product.productId == item.productId);

        let tr = document.createElement('tr');
        tr.innerHTML = `
            <td>${product.productId}</td>
            <td>${product.name}</td>
            <td>${item.quantity}</td>
        `;

        table.querySelector('tbody').appendChild(tr);
    });

    container.appendChild(table);
});


// Qs.8: Find products that are out of stock.

document.getElementById('qs-8-btn').addEventListener('click', () => {
    let allProducts = db.products;
    let productList = allProducts.filter((product) => product.stock <= 0);

    let container = document.getElementById('qs-8');
    container.innerHTML = '';

    if(productList){
        container.innerHTML = '<p>No product is out of stock</p>';
        return;
    }

    let table = document.createElement('table');
    table.style.border = '2px solid black';
    table.style.margin = '1rem';
    table.style.textAlign = 'center';

    table.innerHTML = `
        <thead>
            <tr>
                <th>ProductID</th>
                <th>Name</th>
                <th>Stock</th>
            </tr>
        </thead>
        <tbody></tbody>
    `;

    productList.forEach((product) => {
        let tr = document.createElement('tr');

        tr.innerHTML = `
            <td>${product.productId}</td>
            <td>${product.name}</td>
            <td>${product.stock}</td>
        `;

        table.querySelector('tbody').appendChild(tr);
    });

    container.appendChild(table);
});


// Qs.9: Get all reviews for productId = 1.

document.getElementById('qs-9-btn').addEventListener('click', () => {
    // let product = db.products.find((product) => product.productId == 1);

    let reviewsList = db.reviews.filter((review) => review.productId == 1);

    let container = document.getElementById('qs-9');
    container.innerHTML = '';

    let table = document.createElement('table');
    table.style.border = '2px solid black';
    table.style.margin = '1rem';
    table.style.textAlign = 'center';

    table.innerHTML = `
        <thead>
            <tr>
                <th>UserID</th>
                <th>comment</th>
                <th>Rating</th>
                <th>Date</th>
            </tr>
        </thead>
        <tbody></tbody>
    `;

    reviewsList.forEach((review) => {
        let tr = document.createElement('tr');

        tr.innerHTML = `
            <td>${review.userId}</td>
            <td>${review.comment}</td>
            <td>${review.rating}</td>
            <td>${review.date}</td>
        `;

        table.querySelector('tbody').appendChild(tr);
    });

    container.appendChild(table);
});


// Qs.10: Find average rating of all products.

document.getElementById('qs-10-btn').addEventListener('click', () => {
    let allProducts = db.products;

    let totalRating = 0;

    allProducts.forEach((product) => {
        totalRating += product.rating;
    });

    let average = totalRating/allProducts.length;

    document.getElementById('qs-10').innerHTML = `<p>Average Rating of all Products: ${average.toPrecision(2)}</p>`;
});
