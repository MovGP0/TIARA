/* Ghidra address: 010e3530 */
/* Ghidra symbol: FUN_010e3530 */


void FUN_010e3530(void)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = 1;
  do {
    iVar4 = 0;
    do {
      lVar5 = (longlong)iVar3;
      lVar6 = (longlong)iVar4;
      if (*(longlong *)(DAT_0202f9c0 + -0x18 + lVar5 * 0x40 + lVar6 * 8) != 0) {
        uVar2 = FUN_0065b870(*(undefined8 *)(DAT_0202f9c0 + -0x18 + lVar5 * 0x40 + lVar6 * 8));
        iVar1 = thunk_FUN_041de4d6(uVar2);
        if ((iVar1 != 0) &&
           (lVar5 = *(longlong *)(DAT_0202f9c0 + -0x18 + lVar5 * 0x40 + lVar6 * 8),
           *(char *)(lVar5 + 0x7f9) == '\x01')) {
          FUN_00805ad0(lVar5);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 4);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x11);
  return;
}

