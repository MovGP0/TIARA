/* Ghidra address: 005b8960 */
/* Ghidra symbol: FUN_005b8960 */


undefined8 FUN_005b8960(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_00414480(param_1);
  if (0 < param_4) {
    iVar3 = 0;
    if (param_2 != 0) {
      iVar3 = *(int *)(param_2 + -4);
    }
    if (0 < iVar3) {
      iVar1 = 1;
      if (0 < param_3) {
        iVar1 = FUN_005b88b0(param_2,1,param_3 + -1);
        iVar1 = iVar1 + 1;
      }
      if (iVar1 <= iVar3) {
        uVar2 = FUN_005b88b0(param_2,iVar1,param_4);
        FUN_00416dc0(param_1,param_2,iVar1,uVar2);
      }
    }
  }
  return param_1;
}

