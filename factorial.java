class Main {
	public static void main(String[] args) {
		System.out.println(getFactorial(20));
	}

	public static long getFactorial(int number) {
		if (number == 0 || number == 1)
			return 1;
		long result = 1;
		for (int i = 1; i <= number; i++)
			result *= i;
		return result;
	}
}
