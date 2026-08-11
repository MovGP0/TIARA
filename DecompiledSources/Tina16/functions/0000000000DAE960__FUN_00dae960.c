/* Ghidra address: 00dae960 */
/* Ghidra symbol: FUN_00dae960 */


undefined8 FUN_00dae960(longlong param_1,int param_2,int *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  *param_3 = -1;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_01d347d0(param_1,iVar3);
      if (*(int *)(lVar1 + 8) == param_2) {
        *param_3 = iVar3;
        uVar2 = 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return uVar2;
}

