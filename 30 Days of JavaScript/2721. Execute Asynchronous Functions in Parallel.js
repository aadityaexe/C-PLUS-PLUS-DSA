/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */
function promiseAll(functions) {
  return new Promise((resolve, reject) => {
    const results = [];
    let completed = 0;

    functions.forEach((fn, index) => {
      fn()
        .then((result) => {
          results[index] = result;
          completed++;

          if (completed === functions.length) {
            resolve(results);
          }
        })
        .catch((error) => {
          reject(error);
        });
    });

    if (functions.length === 0) {
      resolve([]);
    }
  });
}

/**
 * const promise = promiseAll([() => new Promise(res => res(42))])
 * promise.then(console.log); // [42]
 */
