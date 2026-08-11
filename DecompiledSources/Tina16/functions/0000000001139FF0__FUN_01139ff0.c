/* Ghidra address: 01139ff0 */
/* Ghidra symbol: FUN_01139ff0 */


void FUN_01139ff0(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  if (*(char *)(param_1 + 0x7f9) == '\0') {
    *(undefined1 *)(param_1 + 0x8d1) = 1;
    if (*(char *)(param_1 + 0xa09) == '\0') {
      *param_3 = 2;
    }
    else {
      FUN_01139800();
      *param_3 = 0;
    }
  }
  else if (*(char *)(param_1 + 0x7f9) == '\x01') {
    *(undefined1 *)(param_1 + 0x8d1) = 1;
    if (*(char *)(param_1 + 0xa09) == '\0') {
      *param_3 = 2;
    }
    else {
      FUN_01139800();
      *param_3 = 0;
    }
  }
  else {
    *param_3 = 2;
  }
  return;
}

