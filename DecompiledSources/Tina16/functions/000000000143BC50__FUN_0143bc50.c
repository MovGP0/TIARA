/* Ghidra address: 0143bc50 */
/* Ghidra symbol: FUN_0143bc50 */


void FUN_0143bc50(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 0x728) = 1;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4e0);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4ac) + 1;
  if (iVar4 <= iVar1) {
    iVar5 = (iVar4 - iVar1) + -1;
    iVar4 = iVar1;
    do {
      uVar2 = *(undefined8 *)(param_1 + 0x700);
      uVar3 = FUN_0084e3c0(uVar2,iVar4);
      FUN_0084e4d0(uVar2,iVar4 + 1,uVar3);
      iVar4 = iVar4 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0);
  }
  FUN_00848a70(*(longlong *)(param_1 + 0x700),*(int *)(*(longlong *)(param_1 + 0x700) + 0x4e0) + 1);
  FUN_0084e3e0(*(longlong *)(param_1 + 0x700),0,*(int *)(*(longlong *)(param_1 + 0x700) + 0x4ac) + 1
               ,0);
  FUN_0084e3e0(*(longlong *)(param_1 + 0x700),1,*(int *)(*(longlong *)(param_1 + 0x700) + 0x4ac) + 1
               ,0);
  if (iVar1 < *(int *)(*(longlong *)(param_1 + 0x700) + 0x4e0)) {
    FUN_0143d630(param_1,*(int *)(*(longlong *)(param_1 + 0x700) + 0x4ac) + 1,1);
  }
  FUN_00f02610(*(undefined8 *)(param_1 + 0x700));
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x180))(*(longlong **)(param_1 + 0x700));
  *(undefined1 *)(param_1 + 0x728) = 0;
  return;
}

