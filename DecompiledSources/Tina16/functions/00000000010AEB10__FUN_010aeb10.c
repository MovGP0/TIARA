/* Ghidra address: 010aeb10 */
/* Ghidra symbol: FUN_010aeb10 */


void FUN_010aeb10(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x10),(longlong)(*(int *)(param_1 + 8) * 4));
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x18),(longlong)(*(int *)(param_1 + 0xc) * 4));
  }
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x40));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

