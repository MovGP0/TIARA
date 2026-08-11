/* Ghidra address: 00aa65c0 */
/* Ghidra symbol: FUN_00aa65c0 */


void FUN_00aa65c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x10);
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = FUN_00ac5690(*(undefined8 *)(param_1 + 0x1b8),iVar3);
      iVar4 = 0;
      iVar6 = *(int *)(*(longlong *)(lVar1 + 0x30) + 0x10);
      if (-1 < iVar6 + -1) {
        do {
          lVar2 = FUN_00ac1a90(*(undefined8 *)(lVar1 + 0x30),iVar4);
          *(undefined1 *)(lVar2 + 0x118) = 0;
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x238) + 0x10);
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = FUN_00ac56b0(*(undefined8 *)(param_1 + 0x238),iVar3);
      *(undefined1 *)(lVar1 + 0x198) = 0;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

