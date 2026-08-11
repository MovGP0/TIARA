/* Ghidra address: 004614d0 */
/* Ghidra symbol: FUN_004614d0 */


undefined8 FUN_004614d0(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = 1;
  lVar4 = (longlong)param_2;
  piVar1 = (int *)(param_1 + 0x260 + lVar4 * 4);
  *piVar1 = *piVar1 + 1;
  iVar2 = *(int *)(param_1 + 100 + lVar4 * 8);
  if (iVar2 + *(int *)(param_1 + 0x60 + lVar4 * 8) <= *(int *)(param_1 + 0x260 + lVar4 * 4)) {
    if (param_2 == 0) {
      uVar3 = 0;
    }
    else {
      *(int *)(param_1 + 0x260 + lVar4 * 4) = iVar2;
      uVar3 = FUN_004614d0(param_1,param_2 + -1);
    }
  }
  return uVar3;
}

