future_value = 1000000  # Desired end value
number_of_days = 240  # Number of trading days
daily_interest_rate = 0.01  # 1% daily growth rate

# Calculate the initial (present) value needed
present_value = future_value / ((1 + daily_interest_rate) ** number_of_days)

print(f"The required starting amount is approximately ${present_value:.2f}")
