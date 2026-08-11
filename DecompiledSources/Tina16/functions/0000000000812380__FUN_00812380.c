/* Ghidra address: 00812380 */
/* Ghidra symbol: FUN_00812380 */


int * FUN_00812380(longlong *param_1,int *param_2)

{
  int iVar1;
  
  FUN_00811e70(param_1,param_2);
  iVar1 = FUN_004230a0(param_2);
  if (iVar1 < 1) {
    FUN_004238d0(param_2,0,0,0,0);
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1,10);
    *param_2 = *param_2 + iVar1;
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1,10);
    param_2[2] = param_2[2] - iVar1;
  }
  return param_2;
}

