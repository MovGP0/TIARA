/* Ghidra address: 016353e0 */
/* Ghidra symbol: FUN_016353e0 */


void FUN_016353e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),iVar4);
      if (*(char *)(lVar2 + 8) == '\x16') {
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),iVar4 + *(int *)(lVar2 + 0x20) + 1);
        uVar3 = FUN_01618f80(&DAT_01616f80,1,lVar2,uVar3);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x40),uVar3);
      }
      else if (*(char *)(lVar2 + 8) == '\x18') {
        iVar1 = iVar4 + *(int *)(lVar2 + 0x20);
        if (iVar1 < *(int *)(*(longlong *)(param_1 + 0x38) + 0x10)) {
          uVar3 = FUN_004aeac0(*(longlong *)(param_1 + 0x38),iVar1);
          uVar3 = FUN_01618f80(&DAT_01616f80,1,lVar2,uVar3);
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x40),uVar3);
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

