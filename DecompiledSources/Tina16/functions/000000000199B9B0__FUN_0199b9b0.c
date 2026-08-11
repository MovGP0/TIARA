/* Ghidra address: 0199b9b0 */
/* Ghidra symbol: FUN_0199b9b0 */


void FUN_0199b9b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x3b8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x3b8),iVar3);
      lVar2 = *(longlong *)(lVar2 + 0xd8);
      iVar1 = FUN_019954d0(*(undefined8 *)(param_1 + 0x50));
      FUN_0164a4e0(*(undefined8 *)(lVar2 + 0x78),iVar1 + 1);
      FUN_0164a620(lVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x3c0));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(local_30);
  return;
}

