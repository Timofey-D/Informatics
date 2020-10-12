class Main {
	public static void main(String[] args) {
		System.out.println(getHypotenuse(179, 971));
	}
	
	public static double getHypotenuse(int a, int b) {
		return Math.pow((a * a + b * b), 0.5);
	}
}
