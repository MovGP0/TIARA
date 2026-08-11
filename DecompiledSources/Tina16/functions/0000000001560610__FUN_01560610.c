/* Ghidra address: 01560610 */
/* Ghidra symbol: FUN_01560610 */


void FUN_01560610(undefined8 param_1,longlong param_2,undefined1 *param_3,undefined1 *param_4)

{
  if (*(char *)(param_2 + 0x3f9) == '\0') {
    *param_3 = 1;
  }
  else {
    *param_3 = 2;
  }
  if (*(char *)(param_2 + 0x3dc) == '\0') {
    *param_4 = 3;
  }
  else {
    *param_4 = 2;
  }
  return;
}

