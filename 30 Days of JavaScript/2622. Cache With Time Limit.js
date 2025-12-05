var TimeLimitedCache = function () {
  this.counter = 0;
};

/**
 * @param {number} key
 * @param {number} value
 * @param {number} duration time until expiration in ms
 * @return {boolean} if un-expired key already existed
 */
TimeLimitedCache.prototype.set = function (key, value, duration) {
  const flag = !!this[key];
  // clear old value if it exists
  if (flag) {
    clearTimeout(this[key].timerId);
    this.counter--;
  }
  // setup new value
  const timerId = setTimeout(() => {
    this[key] = undefined;
    this.counter--;
  }, duration);
  this[key] = { value, timerId };
  this.counter++;
  return flag;
};

/**
 * @param {number} key
 * @return {number} value associated with key
 */
TimeLimitedCache.prototype.get = function (key) {
  return this[key]?.value ?? -1;
};

/**
 * @return {number} count of non-expired keys
 */
TimeLimitedCache.prototype.count = function () {
  return this.counter;
};
