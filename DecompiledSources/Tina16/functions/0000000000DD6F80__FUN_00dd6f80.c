/* Ghidra address: 00dd6f80 */
/* Ghidra symbol: FUN_00dd6f80 */


void FUN_00dd6f80(longlong *param_1,uint param_2)

{
  int iVar1;
  
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0xa8))(param_1);
  FUN_00dd6e80(param_1[0x11]);
  iVar1 = FUN_00dd6b00(param_1[0x11]);
  if (iVar1 == 0) {
    FUN_00410f20(param_1[0x11]);
  }
  *(int *)(param_1[0xf] + 0x3c) = *(int *)(param_1[0xf] + 0x3c) + -1;
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

