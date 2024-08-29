

# C++ STL Quick Reference

## 1. **Containers**

### **1.1 Sequence Containers**
- **`vector`**: Dynamic array.
  - **Usage**:
    ```cpp
    vector<int> v;            // Create an empty vector
    v.push_back(1);           // Add element to the end
    v.push_back(2);
    cout << v[0];             // Access element at index 0
    cout << v.size();         // Get the number of elements
    ```
  - Methods: `push_back()`, `pop_back()`, `size()`, `capacity()`, `resize()`, `empty()`.
  - Access: `v[i]`, `at()`, `front()`, `back()`.

- **`deque`**: Double-ended queue.
  - **Usage**:
    ```cpp
    deque<int> dq;
    dq.push_front(1);         // Add element to the front
    dq.push_back(2);          // Add element to the back
    dq.pop_front();           // Remove element from the front
    dq.pop_back();            // Remove element from the back
    ```
  - Methods: `push_front()`, `push_back()`, `pop_front()`, `pop_back()`.

- **`list`**: Doubly linked list.
  - **Usage**:
    ```cpp
    list<int> l;
    l.push_back(1);           // Add element to the end
    l.push_front(2);          // Add element to the front
    l.insert(l.begin(), 3);   // Insert element at the beginning
    l.erase(l.begin());       // Remove the first element
    ```
  - Methods: `push_back()`, `push_front()`, `pop_back()`, `pop_front()`, `insert()`, `erase()`.

### **1.2 Associative Containers**
- **`set`**: Unique, sorted elements.
  - **Usage**:
    ```cpp
    set<int> s;
    s.insert(1);              // Insert element
    s.insert(2);
    s.insert(1);              // Duplicate elements are ignored
    cout << s.count(1);       // Check if element exists (1 if true, 0 if false)
    ```
  - Methods: `insert()`, `erase()`, `find()`, `count()`, `size()`.

- **`multiset`**: Sorted elements (duplicates allowed).
  - **Usage**:
    ```cpp
    multiset<int> ms;
    ms.insert(1);             // Insert element
    ms.insert(1);             // Duplicates are allowed
    cout << ms.count(1);      // Count occurrences of an element
    ```

- **`map`**: Key-value pairs, sorted by key.
  - **Usage**:
    ```cpp
    map<int, string> m;
    m[1] = "apple";           // Insert key-value pair
    m.insert({2, "banana"});  // Alternative insert method
    cout << m[1];             // Access value by key
    ```
  - Methods: `insert()`, `erase()`, `find()`, `operator[]`, `at()`.

- **`multimap`**: Key-value pairs (duplicates allowed).
  - **Usage**:
    ```cpp
    multimap<int, string> mm;
    mm.insert({1, "apple"});
    mm.insert({1, "orange"}); // Same key with different values
    for (auto &p : mm) {
        cout << p.first << " -> " << p.second << endl;
    }
    ```

### **1.3 Unordered Containers**
- **`unordered_set`**: Unique elements, unsorted.
  - **Usage**:
    ```cpp
    unordered_set<int> us;
    us.insert(3);
    us.insert(1);
    us.insert(2);
    cout << us.count(1);      // Check if element exists
    ```

- **`unordered_map`**: Key-value pairs, unsorted.
  - **Usage**:
    ```cpp
    unordered_map<int, string> um;
    um[1] = "apple";
    um[3] = "banana";
    um[2] = "cherry";
    for (auto &p : um) {
        cout << p.first << " -> " << p.second << endl;
    }
    ```

### **1.4 Container Adapters**
- **`stack`**: LIFO data structure.
  - **Usage**:
    ```cpp
    stack<int> st;
    st.push(1);               // Push element onto stack
    st.push(2);
    cout << st.top();         // Access top element
    st.pop();                 // Remove top element
    ```
  - Methods: `push()`, `pop()`, `top()`, `size()`, `empty()`.

- **`queue`**: FIFO data structure.
  - **Usage**:
    ```cpp
    queue<int> q;
    q.push(1);                // Push element onto queue
    q.push(2);
    cout << q.front();        // Access front element
    q.pop();                  // Remove front element
    ```
  - Methods: `push()`, `pop()`, `front()`, `back()`, `size()`, `empty()`.

- **`priority_queue`**: Heap-based priority queue.
  - **Usage**:
    ```cpp
    priority_queue<int> pq;
    pq.push(3);               // Push element onto queue
    pq.push(1);
    pq.push(2);
    cout << pq.top();         // Access top element (max by default)
    pq.pop();                 // Remove top element
    ```
  - Methods: `push()`, `pop()`, `top()`, `size()`, `empty()`.

## 2. **Iterators**
- **Usage**:
  ```cpp
  vector<int> v = {1, 2, 3, 4};
  auto it = v.begin();        // Iterator to the first element
  cout << *it;                // Access the value at the iterator
  advance(it, 2);             // Advance the iterator by 2 positions
  cout << *it;                // Now it points to the 3rd element
  ```
- **`begin()`**, **`end()`**: Return iterators to the start and end of the container.
- **`rbegin()`**, **`rend()`**: Return reverse iterators.
- **`advance(it, n)`**: Advances the iterator `it` by `n` positions.
- **`distance(it1, it2)`**: Returns the number of elements between `it1` and `it2`.

## 3. **Algorithms**
- **Searching**:
  ```cpp
  vector<int> v = {1, 3, 5, 7};
  cout << binary_search(v.begin(), v.end(), 5);  // 1 if found, 0 otherwise
  ```
- **Sorting**:
  ```cpp
  vector<int> v = {4, 2, 3, 1};
  sort(v.begin(), v.end());   // Sorts in ascending order
  ```
- **Min/Max**:
  ```cpp
  vector<int> v = {4, 2, 3, 1};
  cout << min(3, 7);          // Outputs 3
  cout << max(3, 7);          // Outputs 7
  cout << *min_element(v.begin(), v.end()); // Minimum element in vector
  ```
- **Set Operations**:
  ```cpp
  vector<int> v1 = {1, 2, 3};
  vector<int> v2 = {2, 3, 4};
  vector<int> result(3);
  set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), result.begin()); // Union of v1 and v2
  ```
- **Miscellaneous**:
  ```cpp
  vector<int> v = {1, 2, 3, 4};
  reverse(v.begin(), v.end());  // Reverses the vector
  cout << accumulate(v.begin(), v.end(), 0); // Sum of all elements
  cout << count(v.begin(), v.end(), 2);      // Counts occurrences of 2
  auto it = find(v.begin(), v.end(), 3);     // Finds the first occurrence of 3
  ```

## 4. **Utility Functions**
- **`pair`**: Used to combine two values.
  - **Usage**:
    ```cpp
    pair<int, string> p = make_pair(1, "apple");
    cout << p.first << " " << p.second;
    ```
- **`make_pair()`**: Creates a pair.
- **`tie()`**: Unpacks a tuple/pair.
  - **Usage**:
    ```cpp
    int a, b;
    tie(a, b) = make_pair(1, 2); // a=1, b=2
    ```

## 5. **Common STL Practices**
- **Iterating**:
  ```cpp
  vector<int> v = {1, 2, 3, 4};
  for(auto it = v.begin(); it != v.end(); ++it) {
      cout << *it << " ";
  }
  ```
- **Range-based

## Lower Bound (lower_bound):
The lower_bound function returns an iterator pointing to the first element in the range [first, last) that is not less than (i.e., greater than or equal to) the value you are searching for.
If the value is found, it returns an iterator to the first occurrence of the value.
If the value is not found, it returns an iterator to the position where this value could be inserted while maintaining the sorted order.



## Upper Bound (upper_bound):
The upper_bound function returns an iterator pointing to the first element in the range [first, last) that is greater than the value you are searching for.
If the value is found, it returns an iterator to the first element that is greater than the searched value.
If the value is not found, it returns an iterator to the position where the value could be inserted to maintain the sorted order, but after all existing occurrences of elements equal to the value.



 