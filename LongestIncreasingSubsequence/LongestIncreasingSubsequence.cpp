#include "LongestIncreasingSubsequence.hpp"

#include <algorithm>

std::vector<int> longestIncreasingSubsequence(const std::vector<int>& sequence) {
    std::vector<int> increasing_subseq_length(sequence.size(), 1);
    std::vector<int> increasing_subseq_prev_elem_pos(sequence.size(), -1);
    std::vector<int> longest_incr_subsequence;
    int LIS_last_element_pos = 0;

    for (int i = 1; i < sequence.size(); ++i)
    {
        for (int j = 0; j < i; j++) {
            if (sequence[i] > sequence[j]) {
                if (increasing_subseq_length[i] < increasing_subseq_length[j] + 1) {
                    increasing_subseq_length[i] = increasing_subseq_length[j] + 1;
                    increasing_subseq_prev_elem_pos[i] = j;
                }
            }
        }

        if (increasing_subseq_length[LIS_last_element_pos] < increasing_subseq_length[i]) {
            LIS_last_element_pos = i;
        }
    }
    while (LIS_last_element_pos >= 0) {
        longest_incr_subsequence.push_back( sequence[LIS_last_element_pos] );
        LIS_last_element_pos = increasing_subseq_prev_elem_pos[LIS_last_element_pos];
    }

    std::reverse(longest_incr_subsequence.begin(), longest_incr_subsequence.end());
    return longest_incr_subsequence;
}