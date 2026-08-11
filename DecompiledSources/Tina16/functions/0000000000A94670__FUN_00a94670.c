/* Ghidra address: 00a94670 */
/* Ghidra symbol: FUN_00a94670 */


void FUN_00a94670(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  FUN_00a94620(param_1,param_3);
  iVar1 = FUN_004aeba0(param_2,param_1);
  iVar4 = iVar1;
  if (-1 < iVar1) {
    while ((iVar4 = iVar4 + 1, iVar4 < *(int *)(param_2 + 0x10) &&
           (lVar2 = FUN_00a94970(param_2,iVar4),
           *(int *)(*(longlong *)(param_1 + 8) + 0x18) == *(int *)(*(longlong *)(lVar2 + 8) + 0x18))
           )) {
      uVar3 = FUN_00a94970(param_2,iVar4);
      FUN_00a94620(uVar3,param_3);
    }
    while ((iVar1 = iVar1 + -1, -1 < iVar1 &&
           (lVar2 = FUN_00a94970(param_2,iVar1),
           *(int *)(*(longlong *)(param_1 + 8) + 0x18) == *(int *)(*(longlong *)(lVar2 + 8) + 0x18))
           )) {
      uVar3 = FUN_00a94970(param_2,iVar1);
      FUN_00a94620(uVar3,param_3);
    }
  }
  return;
}

