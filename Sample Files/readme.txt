Robert Koenig
Section 011

1. Collison Ratios:
    a. hash1 + collision1: about 1 collision per every 6.73 keys
    b. hash2 + collision1: about 1 collision per every 8.1 keys
    c. hash1 + collision2: about 1 collision per every 7.1 keys
    d. hash2 + collision2: about 1 collision per every 8.55 keys

2. Hash Functions:
    a. The first hash function (hash2) I did was a basic, universal hash where i added up the
       ASCII values of the character in the input and modulated it with the size of
       the map. I expected this to preform pretty well due to the simplicty and it certianly
       delivered.
    b. The second hash function (hash1) I did used polynomial hashing to calculate the values.
       I thought this would be slightly slower than my first hashing function but it still
       did slightly worse than I thought it would.

3. Collision Functions:
    a. The first function I did for handling collisions used linear probing. I expected this
       method to be the faster one and that appears to be the case.
    b. For the second collision function, I used double hashing. I expected this would be a
       slightly slower method but better otherwise.

4. Quotes:
    a. "Congratulations! Today is wet to go!"
    b. "Some are slow. Some have fallen apart, I've worried away."
    c. "Would stand in their tufts of all, Decided he'd taken enough. That's the cake."
    d. "Shut up, of Who-hash! Then the mighty King Yertle."