/* Ghidra address: 00af6100 */
/* Ghidra symbol: FUN_00af6100 */


void FUN_00af6100(longlong *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  iVar1 = *(int *)(param_1[0xea] + 0x49c) - *(int *)(param_1[0xe8] + 0x98);
  if (iVar1 <= param_2) {
    param_2 = iVar1;
  }
  FUN_0068e980(param_1[0xea],param_2);
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

