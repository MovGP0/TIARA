/* Ghidra address: 0189a300 */
/* Ghidra symbol: FUN_0189a300 */


void FUN_0189a300(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    if (0 < *(int *)(*(longlong *)(param_1 + 0x4b8) + 0x10)) {
      uVar1 = FUN_004aeac0(*(longlong *)(param_1 + 0x4b8),0);
      FUN_0064cb30(uVar1,0);
    }
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x4b8) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b8),iVar4);
        if (0 < iVar4) {
          lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b8),iVar4 + -1);
          lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b8),iVar4 + -1);
          FUN_0064cb30(uVar1,*(int *)(lVar2 + 0x90) + *(int *)(lVar3 + 0x98));
        }
        FUN_0064cbf0(uVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x4c0) + 0x90));
        FUN_0064cc50(uVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x4c0) + 0x90));
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

