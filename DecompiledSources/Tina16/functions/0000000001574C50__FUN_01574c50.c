/* Ghidra address: 01574c50 */
/* Ghidra symbol: FUN_01574c50 */


void FUN_01574c50(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x28));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x30));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

