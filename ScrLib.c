#include "scrlib_ScrLib.h"
#include <jni.h>
#include <ncurses.h>

JNIEXPORT void JNICALL Java_ScrLib_init
  (JNIEnv * env, jclass claz) {
  init();
}

JNIEXPORT void JNICALL Java_ScrLib_endwin
  (JNIEnv * env, jclass claz) {
  endwin();
}

JNIEXPORT void JNICALL Java_ScrLib_mvprint
  (JNIEnv * env, jobject claz, jint x, jint y, jstring s) {
  const char* utfStr = (*env)->GetStringUTFChars(env, s, 0);
  mvprint((int) y, (int) x, s);
  (*env)->ReleaseStringUTFChars(env, s, utfStr);
}

JNIEXPORT void JNICALL Java_ScrLib_clear
  (JNIEnv * env, jobject claz) {
  clear();
}

JNIEXPORT jint JNICALL Java_ScrLib_getch
  (JNIEnv * env, jobject claz){
  return (long) getch();
}

JNIEXPORT void JNICALL Java_ScrLib_refresh
  (JNIEnv * env, jobject claz) {
  refresh();
}

JNIEXPORT jint JNICALL Java_ScrLib_scrWidth
  (JNIEnv * env, jobject claz) {
  int width, height;
  getmaxyx(stdscr, width, height);
  return (long) width;
}

JNIEXPORT jint JNICALL Java_ScrLib_scrHeight
  (JNIEnv * env, jobject claz) {
  int width, height;
  getmaxyx(stdscr, width, height);
  return (long) height;
}
