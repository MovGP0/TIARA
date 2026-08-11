/* Ghidra address: 00809300 */
/* Ghidra symbol: FUN_00809300 */


ulonglong FUN_00809300(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  iVar1 = FUN_008080c0(*(undefined8 *)(param_1 + 0x50));
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      lVar2 = FUN_008080a0(*(undefined8 *)(param_1 + 0x50),iVar1);
      if ((((*(longlong *)(lVar2 + 0x78) == 0) && ((*(ushort *)(lVar2 + 0x34) & 0x10) == 0)) &&
          (*(char *)(lVar2 + 0xad) != '\0')) &&
         ((*(char *)(lVar2 + 0xa9) != '\0' && (*(char *)(lVar2 + 0x4d2) != '\x01'))))
      goto LAB_00809368;
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  uVar3 = 0;
LAB_00809368:
  return uVar3 & 0xffffffff;
}

