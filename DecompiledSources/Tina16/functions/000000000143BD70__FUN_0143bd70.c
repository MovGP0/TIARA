/* Ghidra address: 0143bd70 */
/* Ghidra symbol: FUN_0143bd70 */


void FUN_0143bd70(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 0x728) = 1;
  lVar1 = *(longlong *)(param_1 + 0x700);
  iVar4 = *(int *)(lVar1 + 0x4e0) + -1;
  if (*(int *)(lVar1 + 0x4c0) < iVar4) {
    iVar5 = *(int *)(lVar1 + 0x4ac);
    if (iVar5 <= iVar4) {
      iVar4 = (iVar4 - iVar5) + 1;
      do {
        uVar2 = *(undefined8 *)(param_1 + 0x700);
        uVar3 = FUN_0084e3c0(uVar2,iVar5 + 1);
        FUN_0084e4d0(uVar2,iVar5,uVar3);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00848a70(*(longlong *)(param_1 + 0x700),
                 *(int *)(*(longlong *)(param_1 + 0x700) + 0x4e0) + -1);
  }
  FUN_00f02610(*(undefined8 *)(param_1 + 0x700));
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x180))(*(longlong **)(param_1 + 0x700));
  *(undefined1 *)(param_1 + 0x728) = 0;
  return;
}

