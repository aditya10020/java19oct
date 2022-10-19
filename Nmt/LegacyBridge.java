class LegacyBridge {

	public native static long gcdOfTwo(long first, long second);
	static{
		System.loadLibrary("legacybridgesup");
	}
}
