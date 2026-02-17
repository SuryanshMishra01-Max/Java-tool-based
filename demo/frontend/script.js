const colors = ["lightblue", "lightgreen", "lightpink", "lightyellow", "#ffcccc"];
const btn = document.getElementById("colorBtn");

btn.addEventListener("click", () => {
    const randomColor = colors[Math.floor(Math.random() * colors.length)];
    document.body.style.backgroundColor = randomColor;
});
