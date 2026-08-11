/* Ghidra address: 00c315d0 */
/* Ghidra symbol: FUN_00c315d0 */


void FUN_00c315d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = FUN_00c1aa10();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_00c2fce0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50),iVar4);
      if (*(longlong *)(lVar2 + 0x40) != 0) {
        lVar2 = FUN_00c2fce0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50),iVar4);
        FUN_00c22da0(*(undefined8 *)(lVar2 + 0x40));
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  uVar3 = FUN_00c360e0(*(undefined8 *)(param_1 + 8));
  FUN_00c230d0(uVar3,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  lVar2 = FUN_00c360e0(*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(lVar2 + 0x14) = 1;
  return;
}

