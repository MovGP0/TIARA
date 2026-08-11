/* Ghidra address: 016a6c10 */
/* Ghidra symbol: FUN_016a6c10 */


void FUN_016a6c10(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  if (*(char *)(param_1 + 0x38) == '\0') {
    FUN_016a94d0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x18),0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

