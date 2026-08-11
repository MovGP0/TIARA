/* Ghidra address: 00965f30 */
/* Ghidra symbol: FUN_00965f30 */


void FUN_00965f30(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  while (0 < *(int *)(*(longlong *)(param_1 + 0x38) + 0x10)) {
    FUN_00965fb0(param_1);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

