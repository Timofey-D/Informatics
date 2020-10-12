def factorial(number):
	if number == 0 or number == 1:
		return 1
	result = 1
	for i in range(1, number + 1):
		result *= i
	return result

print(factorial(20))
