/* Ghidra address: 01bfa910 */
/* Ghidra symbol: FUN_01bfa910 */


void FUN_01bfa910(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 != 0) {
    if (0 < *(int *)(*(longlong *)(lVar1 + 0x10) + 0x10)) {
      iVar4 = *(int *)(*(longlong *)(lVar1 + 0x10) + 0x10);
      iVar3 = 0;
      if (-1 < iVar4 + -1) {
        do {
          lVar1 = FUN_01bfb960(*(undefined8 *)(param_1 + 0x50),iVar3);
          if (*(longlong *)(lVar1 + 0x50) != 0) {
            uVar2 = FUN_01bfb960(*(undefined8 *)(param_1 + 0x50),iVar3);
            FUN_01bfa910(uVar2);
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}

