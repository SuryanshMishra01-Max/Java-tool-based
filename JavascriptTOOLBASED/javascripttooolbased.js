console.log('javascript playground ready')

// can use single quotes either double quote
function add(a,b){
    return a+b;
}
console.log(add(5,4))
const Arrow = (a,b) => a+b

// variable_name = (params) => defenitions 

console.log('add arrows:',Arrow(6,7))
console.log('add Arrow:',Arrow)

// create an arrow function to get the square of the given parameter 

const square = (a,b) => a*a;
console.log('square of 6 is',square(6))
    
//function with the formatted string

const greetings = (name) => {
    //backtick symbol
    return 'hello, SURYANSH MISHRA'
}
 console.log(greetings())

 //ARROW FUNCTION WITH ARRAY
 const number = [1,2,3,4,5]
 const doubled = number.map(n=>n*2)

 //in map function, we pass arrow function 
 //here, will take each element one by one in

 const checkAge = age => age =>18 ? 'Adult' : 'minor'
 console.log(checkAge(16))
