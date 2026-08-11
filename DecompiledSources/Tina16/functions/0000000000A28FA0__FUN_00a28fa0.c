/* Ghidra address: 00a28fa0 */
/* Ghidra symbol: FUN_00a28fa0 */


ulonglong FUN_00a28fa0(void)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_38 [40];
  
  uVar2 = FUN_00a28d60(auStack_38);
  if ((uVar2 & 0x80) != 0) {
    uVar4 = (uint)uVar2 & 0x3f;
    if ((uVar2 & 0x20) != 0) {
      uVar1 = FUN_00a28d60(auStack_38);
      if ((uVar1 & 0xc0) != 0x80) {
        uVar3 = FUN_0044d490(&PTR_FUN_00436080,1,L"Invalid 3 octet UTF sequence.");
        uVar1 = FUN_004134c0(uVar3);
      }
      uVar4 = uVar4 << 6 | uVar1 & 0x3f;
    }
    uVar1 = FUN_00a28d60(auStack_38);
    if ((uVar1 & 0xc0) != 0x80) {
      uVar3 = FUN_0044d490(&PTR_FUN_00436080,1,L"Invalid UTF sequence.");
      uVar1 = FUN_004134c0(uVar3);
    }
    uVar2 = (ulonglong)(uVar4 << 6 | uVar1 & 0x3f);
  }
  return uVar2;
}

