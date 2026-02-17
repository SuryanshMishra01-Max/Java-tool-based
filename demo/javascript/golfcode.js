var names = ["hole in one", "eagle", "birdie", "par", "bogey", "double bogey", "home"];
function golfscore(par, strokes) {
    if (strokes == 1) {
        return names[0];
    }
    else if (strokes <= par - 2) {
        return names[1];
    }
    else if (strokes == par - 1) {
        return names[2];
    } else if (strokes == par) {
        return names[3];
    }
    else if (strokes == par + 1) {
        return names[4];
    }
    return "change me";
}
console.log(golfscore(5,0));
