const futureValue = 1000000; // Desired end value
const numberOfDays = 240; // Number of trading days
const dailyInterestRate = 0.01; // 1% daily growth rate

// Calculate the initial (present) value needed
const presentValue = futureValue / Math.pow((1 + dailyInterestRate), numberOfDays);

console.log(`The required starting amount is approximately $${presentValue.toFixed(2)}`);
