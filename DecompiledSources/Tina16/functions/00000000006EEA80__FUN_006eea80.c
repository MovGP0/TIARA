/* Ghidra address: 006eea80 */
/* Ghidra symbol: FUN_006eea80 */


void FUN_006eea80(longlong *param_1,int param_2)

{
  int iVar1;
  
  FUN_004b63c0(param_1,param_2);
  FUN_004aec30(param_1[0x10],param_2,0xffffffffffffffff);
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  param_2 = param_2 + 1;
  if (param_2 <= iVar1) {
    iVar1 = (iVar1 - param_2) + 1;
    do {
      FUN_006eeb10(param_1,param_2);
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

