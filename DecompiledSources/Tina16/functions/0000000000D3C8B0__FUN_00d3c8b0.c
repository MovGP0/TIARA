/* Ghidra address: 00d3c8b0 */
/* Ghidra symbol: FUN_00d3c8b0 */


int * FUN_00d3c8b0(longlong *param_1,int *param_2)

{
  int iVar1;
  
  FUN_00d3c580(param_1,param_2);
  iVar1 = FUN_004230a0(param_2);
  if (iVar1 < 1) {
    FUN_004238d0(param_2,0,0,0,0);
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x50))(param_1,10);
    *param_2 = *param_2 + iVar1;
    iVar1 = (**(code **)(*param_1 + 0x50))(param_1,10);
    param_2[2] = param_2[2] - iVar1;
  }
  return param_2;
}

