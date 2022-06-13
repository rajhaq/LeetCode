/**
 * @param {string} s
 * @param {number[]} indices
 * @return {string}
 */
 var restoreString = function(s, indices) {
    let result = s.split('');
    for(let i = 0; i<s.length; i++){
        result[indices[i]]=s[i];
    }
    return result.join('');
    
};
// Runtime: 156 ms, faster than 5.09% of JavaScript online submissions for Shuffle String.
// Memory Usage: 44.9 MB, less than 17.91% of JavaScript online submissions for Shuffle String.