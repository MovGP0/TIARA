/* Ghidra address: 008123f0 */
/* Ghidra symbol: FUN_008123f0 */


int * FUN_008123f0(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00811e70(param_1,param_2);
  iVar1 = FUN_004230a0(param_2);
  if (iVar1 < 1) {
    FUN_004238d0(param_2,0,0,0,0);
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x48))(param_1,10);
    iVar3 = FUN_004230a0(param_2);
    iVar1 = iVar3 / 2;
    if (iVar2 < iVar3 / 2) {
      iVar1 = iVar2;
    }
    param_2[2] = *param_2 + iVar1;
  }
  return param_2;
}

