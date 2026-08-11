/* Ghidra address: 01a33560 */
/* Ghidra symbol: FUN_01a33560 */


void FUN_01a33560(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x20));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x28));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0xa8));
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

