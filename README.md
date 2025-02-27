# Hashmaps Project - Text Generation

### Overview
This project involves implementing a Hashmap that stores word sequences from a given dataset and uses them to generate text based on word prediction. 
The core idea is to analyze an input text corpus, track word sequences, and use the collected data to generate text by predicting the next likely word.
The project includes implementing key methods in the HashNode and HashMap classes to support hashing, collision resolution, and dynamic resizing.

### Files Included
- mainHash.cpp: The main function that loads input data from a text file.
- MakeModel.cpp/.hpp: Handles input processing and initiates text generation.
- HashNode.hpp: Header file containing the class declaration for HashNode.
- HashNode.cpp: Contains definitions for the HashNode class methods.
- HashMap.hpp: Header file containing the class declaration for HashMap.
- HashMap.cpp: Contains definitions for the HashMap class methods.

### Input Files:
- DrSeuss.txt: Text corpus of Dr. Seuss books.
- GEChap.txt: First three chapters of Great Expectations by Charles Dickens.

### Example Output Files:
- Seussout_example.txt
- GEout_example.txt

### Implementation Details
1. HashNode Class Methods
  - addValue(string): Adds a new word to the dynamically allocated values array.
  - dblArray(): Doubles the size of the values array when full.
  - getRandValue(): Randomly selects a word from the values array for text generation.
2. HashMap Class Methods
  - Constructor: Initializes the Hashmap with a base size.
  - addKeyValue(string, string): Adds a key-value pair where the key is a word and the value is a list of possible next words.
  - getIndex(string): Determines the index of a key using the hash function.
3. Hash Functions:
  - calcHash1(string): First hash function for indexing.
  - calcHash2(string): Second hash function for indexing (different approach for comparison).
4. Collision Handling:
  - coll1(int, int, string): First collision resolution strategy.
  - coll2(int, int, string): Second collision resolution strategy.
  - getClosestPrime(): Finds the closest prime number for resizing.
  - rehash(): Resizes and redistributes keys in the Hashmap when load factor exceeds 70%.

### Hashing and Collision Resolution
##### Collision Handling Methods
Two different collision resolution strategies are implemented:
- Linear probing or quadratic probing to find an available slot.
- Double hashing or chaining for improved collision resolution.

### Resizing and Rehashing
- Dynamic Resizing: If the load factor exceeds 70%, the hashmap size is increased, and keys are rehashed to maintain efficiency.
- Value Array Resizing: The array storing word sequences dynamically expands when full to accommodate more words.

### Output and Testing
The program generates four output files:
1. Hash Function 1 + Collision Function 1
2. Hash Function 1 + Collision Function 2
3. Hash Function 2 + Collision Function 1
4. Hash Function 2 + Collision Function 2

The generated text is examined for coherence and effectiveness of word prediction.

Debugging is performed by printing key-value pairs and checking hash function efficiency.

Conclusion

This project provides insight into hashmaps, hash functions, collision handling, and text generation using word prediction models. By analyzing different hashing and collision resolution techniques, we can evaluate their efficiency in handling real-world datasets.
