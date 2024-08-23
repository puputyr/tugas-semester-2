document.addEventListener('DOMContentLoaded', function () {
    const addToCartButtons = document.querySelectorAll('.keranjang');

    addToCartButtons.forEach(button => {
        button.addEventListener('click', function () {
            showNotification('Dimasukkan ke keranjang');
        });
    });

    function showNotification(message) {
        const notification = document.createElement('div');
        notification.classList.add('notification');
        notification.textContent = message;

        document.body.appendChild(notification);

        setTimeout(function () {
            document.body.removeChild(notification);
        }, 2000); // Adjust the timeout value to control how long the notification is displayed
    }
});
