/* Ghidra address: 0164a620 */
/* Ghidra symbol: FUN_0164a620 */


void FUN_0164a620(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(param_2,iVar2);
      FUN_0164a490(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(lVar1 + 0x14),
                   *(undefined4 *)(lVar1 + 0x18));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

