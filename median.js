/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function (nums1, nums2) {
  const mergedArray = [...nums1, ...nums2];
  mergedArray.sort((a, b) => a - b);
  const l = mergedArray.length;

  if (l % 2 !== 0) {
    const mid = Math.floor(l / 2);
    console.log(`Median = ${mergedArray[mid]}`);
  } else {
    const mid1 = l / 2 - 1;
    const mid2 = l / 2;

    const median = (mergedArray[mid1] + mergedArray[mid2]) / 2;
    console.log(`Median = ${median}`);
  }
};

const nums1 = [1, 2];
const nums2 = [3, 4];
const median = findMedianSortedArrays(nums1, nums2);
