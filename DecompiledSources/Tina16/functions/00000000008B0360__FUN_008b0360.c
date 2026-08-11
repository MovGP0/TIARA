/* Ghidra address: 008b0360 */
/* Ghidra symbol: FUN_008b0360 */


undefined8 FUN_008b0360(void)

{
  int iVar1;
  undefined6 uVar2;
  
  iVar1 = *(int *)(PTR_DAT_02005bd0 + 4);
  if (iVar1 < 0x13) {
    if (iVar1 == 0x12) {
      return 0x3e;
    }
    if (iVar1 == 4) {
      uVar2 = (undefined6)((ulonglong)PTR_DAT_02005bd0 >> 0x10);
      if (*(int *)(PTR_DAT_02005bd0 + 8) == 2) {
        return CONCAT62(uVar2,0x36f);
      }
      return CONCAT62(uVar2,0x371);
    }
    iVar1 = iVar1 + -0x11;
    if (iVar1 == 0) {
      return 0x3f;
    }
  }
  else {
    if (iVar1 == 0x19) {
      return 0x270;
    }
    iVar1 = iVar1 + -0x22;
    if (iVar1 == 0) {
      return 0x385;
    }
  }
  return CONCAT62((uint6)(ushort)((uint)iVar1 >> 0x10),0x333);
}

