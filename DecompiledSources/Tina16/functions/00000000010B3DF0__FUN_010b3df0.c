/* Ghidra address: 010b3df0 */
/* Ghidra symbol: FUN_010b3df0 */


void FUN_010b3df0(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

