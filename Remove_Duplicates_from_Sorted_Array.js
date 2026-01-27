var removeDuplicates = function (nums) {
  let k = nums.length;

  for (let i = 0; i < nums.length; i++) {
    for (let j = i + 1; j < nums.length; j++) {
      if (nums[i] === nums[j]) {
        k--;
        nums.splice();
      }
    }
  }

  console.log(k);
};

removeDuplicates([1, 2, 3, 4, 5, 6, 6, 7, 3, 3, 3, 3, 3, 3]);
