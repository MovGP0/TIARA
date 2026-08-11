/* Ghidra address: 010e2bf0 */
/* Ghidra symbol: FUN_010e2bf0 */


void FUN_010e2bf0(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  if (*(char *)((longlong)param_1 + 0x7ed) == '\0') {
    *param_3 = 2;
  }
  else {
    *param_3 = 0;
    *(undefined1 *)((longlong)param_1 + 0x8d1) = 1;
    (**(code **)(*param_1 + 0x448))(param_1);
  }
  return;
}

