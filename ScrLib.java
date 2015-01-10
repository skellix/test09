package scrlib;

public class ScrLib {
	public static void initScr() {
		System.loadLibrary("scrlib");
	}
	public static native void init();
	public static native void endwin();
	public static native void mvprint(int x, int y, String s);
	public static native void clear();
	public static native int getch();
	public static native void refresh();
	public static native int scrWidth();
	public static native int scrHeight();
}
