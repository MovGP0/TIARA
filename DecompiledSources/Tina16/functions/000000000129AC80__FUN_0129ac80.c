/* Ghidra address: 0129ac80 */
/* Ghidra symbol: FUN_0129ac80 */


int FUN_0129ac80(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (iVar1 = FUN_004170c0(param_2,param_3,1); iVar1 != 0;
      iVar1 = FUN_004170c0(param_2,param_3,iVar1 + iVar2)) {
    iVar3 = iVar3 + 1;
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = *(int *)(param_2 + -4);
    }
  }
  return iVar3;
}

