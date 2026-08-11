/* Ghidra address: 01cc7d00 */
/* Ghidra symbol: FUN_01cc7d00 */


void FUN_01cc7d00(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = true;
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_01d347d0(param_1,iVar4);
      if (bVar1) {
        FUN_01cc77d0(param_1,*(undefined8 *)(param_1 + 0x438),*(undefined8 *)(lVar2 + 0x160),
                     *(undefined4 *)(lVar2 + 0x2c),0xffffffff,*(undefined4 *)(lVar2 + 0x150),0);
      }
      if ((iVar4 == *(int *)(param_1 + 0x10) + -1) ||
         (lVar3 = FUN_01d347d0(param_1,iVar4 + 1),
         *(longlong *)(lVar3 + 0x160) != *(longlong *)(lVar2 + 0x160))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      FUN_01cc77d0(param_1,*(undefined8 *)(param_1 + 0x438),*(undefined8 *)(lVar2 + 0x160),
                   *(undefined4 *)(lVar2 + 0x2c),*(undefined4 *)(lVar2 + 0x154),
                   *(undefined4 *)(lVar2 + 0x150),bVar1);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

