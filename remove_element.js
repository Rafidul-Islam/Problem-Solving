var removeElement = function (nums, val) {
  let k = 0;
  for (let i = 0; i < nums.length; i++) {
    if (nums[i] !== val) {
      nums[k] = nums[i];
      k++;
    }
  }

  console.log(nums);
  console.log(k);

  return k;
};

const nums = [1, 2, 3, 4, 5, 6];
const val = 5;

console.log(removeElement(nums, val));
