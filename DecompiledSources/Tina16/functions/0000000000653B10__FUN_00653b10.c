/* Ghidra address: 00653b10 */
/* Ghidra symbol: FUN_00653b10 */


ulonglong FUN_00653b10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  iVar1 = FUN_00654c00(*(undefined8 *)(param_1 + 0x70));
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      lVar2 = FUN_00654bc0(*(undefined8 *)(param_1 + 0x70),iVar1);
      if (*(char *)(lVar2 + 0xad) != '\0') goto LAB_00653b6e;
      lVar2 = FUN_00654bc0(*(undefined8 *)(param_1 + 0x70),iVar1);
      if (*(char *)(lVar2 + 0xb3) != '\x03') goto LAB_00653b6e;
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  uVar3 = 0;
LAB_00653b6e:
  return uVar3 & 0xffffffff;
}

