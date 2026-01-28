var mySqrt = function (x) {
  let count = 0;
  for (let i = 1; i * i <= x; i++) {
    count = i;
  }
  return count;
};

console.log(mySqrt(32));
