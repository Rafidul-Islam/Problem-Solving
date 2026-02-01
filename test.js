var removeDuplicates = function (nums) {
  if (nums.length === 0) return 0;

  let k = 1;

  for (let i = 0; i < nums.length; i++) {
    if (nums[i] !== nums[k - 1]) {
      nums[k] = nums[i];
      k++;
    }
  }
  return k;
};

let nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 4, 4, 8];
console.log(removeDuplicates(nums));

// This comment is just for the skae of green graph
