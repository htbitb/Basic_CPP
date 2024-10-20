## Hash Table
**Functionality**: Maps keys to values for efficient lookups using a hash function. Supports insert(), lookup(), and delete() in average constant time.

**Why We Need Them**: Ideal for quick lookups and data retrieval based on keys.

**Use Case**: Used for dictionaries, caching, databases (indexing), or managing user sessions.

**Real-Life Application**: 
* Caching in Web Browsers
  
    * **Use Case**: Web browsers use hash tables to cache web pages. Each URL is the key, and the corresponding page content is the value. This allows browsers to quickly retrieve cached pages, significantly improving browsing speed.

* Autocorrect/Autocomplete

    * **Use Case**: Smartphones and search engines use hash tables to implement autocorrect and autocomplete. When a user types a word, the hash table quickly finds possible corrections or suggestions based on a dictionary.