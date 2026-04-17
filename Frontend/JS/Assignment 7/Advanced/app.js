import db from '../db.js';

console.log(db);

// Qs.1 : Calculate total revenue generated from all orders.

document.getElementById('qs-1-btn').addEventListener('click', () => {
    let allOrders = db.orders;
    let allProducts = db.products;

    let totalRevanue = 0;

    allOrders.forEach((order) => {
        order.items.forEach((item) => {
            let product = allProducts.find((product) => product.productId == item.productId);

            totalRevanue += product.price * item.quantity;
        });
    });

    // console.log(totalRevanue);

    document.getElementById('qs-1').innerHTML = `<p>Total Revanue generated from all orders : ${totalRevanue.toLocaleString('en-IN',{currency: 'INR', style: 'currency'})}</p>`;
});


// Qs.2 : Get most expensive product.

document.getElementById('qs-2-btn').addEventListener('click', () => {
    let allProducts = db.products;

    let expensiveProduct = null;
    let maxPrice = 0;

    allProducts.forEach((product) => {
        if(maxPrice < product.price) {
            maxPrice = product.price;
            expensiveProduct = product;
        };
    });

    document.getElementById('qs-2').innerHTML = `
        <p>Most Expensive Product</p>
        <p><b>ProductID:</b> ${expensiveProduct.productId}</p>
        <p><b>Product Name:</b> ${expensiveProduct.name}</p>
        <p><b>Product Price:</b> ${expensiveProduct.price}</p>
    `;
});


// Qs.3 : Find most sold product (based on order quantity).

document.getElementById('qs-3-btn').addEventListener('click', () => {
    let allOrders = db.orders;

    let ordersQuantity = {};
    
    allOrders.forEach((order) => {
        order.items.forEach((item) => {
            ordersQuantity[item.productId] = (ordersQuantity[item.productId]) ? ordersQuantity[item.productId] + item.quantity : item.quantity;
        });
    });
    
    let mostSoldProductId = null;
    let maxSold = 0;

    for(let [id, quantity] of Object.entries(ordersQuantity)){
        if(maxSold < quantity){
            maxSold = quantity;
            mostSoldProductId = id;
        }
    };

    let mostSoldProduct = db.products.find((product) => product.productId == mostSoldProductId);

    document.getElementById('qs-3').innerHTML = `
        <h4>Most Sold Product</h4>
        <p><b>ProductID:</b> ${mostSoldProduct.productId}</p>
        <p><b>Product Name:</b> ${mostSoldProduct.name}</p>
        <p><b>Total Orders:</b> ${maxSold}</p>
    `;
});


// Qs.4 : Get user who placed the highest number of orders.

document.getElementById('qs-4-btn').addEventListener('click', () => {
    let allUsers = db.users;

    let maxUser = null;
    let maxOrder = 0;

    allUsers.forEach((user) => {
        if(user.orders.length > maxOrder) {
            maxOrder = user.orders.length;
            maxUser = user;
        }
    });

    document.getElementById('qs-4').innerHTML = `
        <h4>User with Highest Order</h4>
        <p><b>UserID:</b> ${maxUser.userId}</p>
        <p><b>Name:</b> ${maxUser.name}</p>
        <p><b>Email:</b> ${maxUser.email}</p>
        <p><b>Total Orders:</b> ${maxOrder}</p>
    `;
});


// Qs.5 : Find total quantity sold per product.

document.getElementById('qs-5-btn').addEventListener('click', () => {
    let allOrders = db.orders;

    let productOrders = {};

    allOrders.forEach((order) => {
        order.items.forEach((item) => {
            productOrders[item.productId] = (productOrders[item.productId]) ? productOrders[item.productId] + item.quantity : item.quantity;
        });
    });

    let allProducts = db.products;

    let table = document.createElement('table');
    table.style.border = '2px solid black';
    table.style.margin = '1rem';
    table.style.textAlign = 'center';

    table.innerHTML = `
        <thead>
            <tr>
                <th>ProductID</th>
                <th>Product Name</th>
                <th>Product Sold</th>
            </tr>
        </thead>
        <tbody></tbody>
    `;

    let container = document.getElementById('qs-5');
    container.innerHTML = '';

    allProducts.forEach((product) => {
        if(productOrders[product.productId]){
            let tr = document.createElement('tr');

            tr.innerHTML = `
                <td>${product.productId}</td>
                <td>${product.name}</td>
                <td>${productOrders[product.productId]}</td>
            `;

            table.querySelector('tbody').appendChild(tr);
        }
    });

    container.appendChild(table);
});


// Qs.6 : Get top-rated product.

document.getElementById('qs-6-btn').addEventListener('click', () => {
    let allProducts = db.products;

    let topRatedProduct = null;
    let highestRating = 0;

    allProducts.forEach((product) => {
        if(highestRating < product.rating) {
            highestRating = product.rating;
            topRatedProduct = product;
        };
    });

    document.getElementById('qs-6').innerHTML = `
        <h4>Top Rated Product</h4>
        <p><b>ProductID:</b> ${topRatedProduct.productId}</p>
        <p><b>Product Name:</b> ${topRatedProduct.name}</p>
        <p><b>Product Rating:</b> ${topRatedProduct.rating}</p>
    `;
});


// Qs.7 : Find all products with no reviews.

document.getElementById('qs-7-btn').addEventListener('click', () => {
    let allReviews = db.reviews;
    let allProducts = db.products;

    let productList = allProducts.filter((product) => {
        let hasNoReview = true;
        allReviews.forEach((review) => {
            if(review.productId == product.productId) {
                hasNoReview = false;
                return;
            }
        });

        return hasNoReview;
    });

    let table = document.createElement('table');
    table.style.border = '2px solid black';
    table.style.margin = '1rem';
    table.style.textAlign = 'center';

    table.innerHTML = `
        <thead>
            <tr>
                <th>ProductID</th>
                <th>Product Name</th>
                <th>Product Price</th>
            </tr>
        </thead>
        <tbody></tbody>
    `;

    let container = document.getElementById('qs-7');
    container.innerHTML = '';

    productList.forEach((product) => {
        let tr = document.createElement('tr');
        tr.innerHTML = `
            <td>${product.productId}</td>
            <td>${product.name}</td>
            <td>${product.price}</td>
        `;

        table.querySelector('tbody').appendChild(tr);
    });

    container.appendChild(table);
});


// Qs.8 : Get all users who used a coupon.

document.getElementById('qs-8-btn').addEventListener('click', () => {
    let allOrders = db.orders;
    let allUsers = db.users;

    let users = [];

    allOrders.forEach((order) => {
        if(order.coupon) {
            users.push(allUsers.find((user) => user.userId == order.userId));
        }
    });

    let table = document.createElement('table');
    table.style.border = '2px solid black';
    table.style.margin = '1rem';
    table.style.textAlign = 'center';

    table.innerHTML = `
        <thead>
            <tr>
                <th>UserID</th>
                <th>User Name</th>
            </tr>
        </thead>
        <tbody></tbody>
    `;

    let container = document.getElementById('qs-8');
    container.innerHTML = '';

    users.forEach((user) => {
        let tr = document.createElement('tr');

        tr.innerHTML = `
            <td>${user.userId}</td>
            <td>${user.name}</td>
        `;

        table.querySelector('tbody').appendChild(tr);
    });

    container.appendChild(table);
});


// Qs.9 : Find total discount applied using coupons.

document.getElementById('qs-9-btn').addEventListener('click', () => {
    let allOrders = db.orders;
    let allProducts = db.products;

    let totalDiscountApplied = 0;
    let totalAmount = 0;

    allOrders.forEach((order) => {
        if(order.coupon) {
            order.items.forEach((item) => {
                let product = allProducts.find((product) => product.productId == item.productId);
                totalAmount += product.price * item.quantity;
            });

            let coupon = db.coupons.find((coupon) => coupon.code == order.coupon);
            
            totalDiscountApplied += totalAmount * coupon.discount / 100;
        }
    });

    document.getElementById('qs-9').innerHTML = `<p>Total Discount Applied to all orders using coupon: ${totalDiscountApplied.toLocaleString('en-IN', {currency: "INR", style: "currency"})}</p>`;
});


// Qs.10 : Get orders that are still pending delivery.

document.getElementById('qs-10-btn').addEventListener('click', () => {
    let allOrders = db.orders;

    let pendingOrders = allOrders.filter((order) => order.delivery.status.toLowerCase() == 'pending');

    let container = document.getElementById('qs-10');
    container.innerHTML = '';

    if(pendingOrders.length == 0){
        container.innerHTML = `<p>No orders with pending delivery!</p>`;
        return;
    }

    let table = document.createElement('table');
    table.style.border = '2px solid black';
    table.style.margin = '1rem';
    table.style.textAlign = 'center';

    table.innerHTML = `
        <thead>
            <tr>
                <th>OrderID</th>
                <th>Order Date</th>
                <th>Order Status</th>
            </tr>
        </thead>
        <tbody>
        </tbody>
    `;

    pendingOrders.forEach((order) => {
        let tr = document.createElement('tr');
        tr.innerHTML = `
            <td>${order.orderId}</td>
            <td>${order.orderDate}</td>
            <td>${order.delivery.status}</td>
        `;

        table.querySelector('tbody').appendChild(tr);
    });

    container.appendChild(table);
});

