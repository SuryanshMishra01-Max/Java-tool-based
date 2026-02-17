const express = require("express");
const cors = require("cors");
const app = express();
const PORT = 3000;

app.use(cors()); // Allow frontend to call backend

// API route to get colors
app.get("/api/colors", (req, res) => {
    const colors = ["lightblue", "lightgreen", "lightpink", "lightyellow", "#ffcccc"];
    res.json(colors);
});

app.listen(PORT, () => {
    console.log(`✅ Server running at http://localhost:${PORT}`);
});
