#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    return (left - right) * (left - right);
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    int t;
    if (mask < 0) {
      t = (mask & (1 << (bit_pos+1)));
    }
    else {
      t = (mask & (1 << (bit_pos)));
    }
    t = t >> bit_pos;
    if (t % 2 == 1){
      return true;
    }
    return false;
  }

  // Task 3
  int max3(int left, int middle, int right) {
    if (left >= middle) {
      if (left >= right) {
        return left;
      }
      return right;
    }
    if (middle >= right) {
      return middle;
    }
    return right;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if (left != NULL) {
      if (right != NULL) {
        int t = *left;
        *left = *right;
        *right = t;
      }
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    int rez = 0;
    if (arr != NULL) {
      if (length > 0) {
        for (int i = 0; i < length; i++) {
          rez += arr[i];
        }
      }
    }
    return rez;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    int *adds = nullptr;
    if ((arr != NULL) && (length > 0)) {
      int max = arr[0];
      adds = &arr[0];
      for (int i = 1; i < length; i++) {
        if (max < arr[i]) {
          max = arr[i];
          adds = &arr[i];
        }
      }
    }
    return adds;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if (length > 0) {
      int *arr = new int[length];
      for (int i = 0; i < length; i++) {
        arr[i] = init_value;
      }
      return arr;
    }
    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if ((arr_in != NULL) && (length > 0)) {
      int *new_arr = new int[length];
      for (int i = 0; i < length; i++) {
        new_arr[i] = arr_in[i];
      }
      return new_arr;
    }
    else {
      return nullptr;
    }
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == NULL) {
      os << "Invalid argument: arr\n";
    }
    else {
      if (length <= 0) {
        os << "Invalid argument: length\n";
      }
      else {
        if (k <= 0) {
          os << "Invalid argument: k\n";
        }
        else {
          for (int i = 0; i < length; i += k) {
            os << arr[i] << "\t";
          }
        }
      }
    }
  }

}  // namespace assignment
