/* Ghidra address: 01a88bf0 */
/* Ghidra symbol: FUN_01a88bf0 */


void FUN_01a88bf0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if (-1 < *(int *)(param_1 + 0x1070)) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x1068) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x1068),iVar3);
        FUN_01ab4370(uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0x80),
                     (double)*(int *)(param_1 + 0x1070) / 1000.0);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  uVar1 = FUN_016d6f90();
  *(undefined4 *)(param_1 + 0x1070) = uVar1;
  iVar3 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x1068) + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x1068),iVar3);
      FUN_01ab4370(uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0x80),
                   (double)*(int *)(param_1 + 0x1070) / 1000.0);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

