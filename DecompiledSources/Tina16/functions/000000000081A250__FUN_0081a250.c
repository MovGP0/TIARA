/* Ghidra address: 0081a250 */
/* Ghidra symbol: FUN_0081a250 */


undefined8 FUN_0081a250(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  
  iVar2 = FUN_007ff9d0();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = FUN_007ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10),iVar5);
      lVar4 = FUN_0065b870(uVar3);
      if (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x58) == lVar4) {
        cVar1 = '\0';
      }
      else {
        lVar4 = FUN_007ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10),iVar5);
        cVar1 = *(char *)(lVar4 + 0xa9);
      }
      if ((cVar1 != '\0') &&
         (lVar4 = FUN_007ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10),iVar5),
         *(char *)(lVar4 + 0x4d2) == '\x02')) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

