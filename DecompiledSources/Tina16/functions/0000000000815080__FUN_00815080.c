/* Ghidra address: 00815080 */
/* Ghidra symbol: FUN_00815080 */


ulonglong FUN_00815080(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  iVar1 = FUN_007e2ef0();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x80),iVar4);
      if (*(char *)(param_2 + 0x87) == *(char *)(lVar2 + 0x87)) {
        uVar3 = 0;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return uVar3 & 0xffffffff;
}

