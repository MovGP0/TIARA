/* Ghidra address: 0044ff00 */
/* Ghidra symbol: FUN_0044ff00 */


void FUN_0044ff00(void)

{
  ulonglong uVar1;
  undefined1 auStack_58 [72];
  
  DAT_0200c440 = 0x409;
  DAT_0200c444 = 9;
  DAT_0200c448 = 1;
  uVar1 = thunk_FUN_04195d02();
  if ((int)uVar1 != 0) {
    DAT_0200c440 = (int)uVar1;
  }
  if ((ushort)uVar1 != 0) {
    DAT_0200c444 = (uint)((ushort)uVar1 & 0x3ff);
    DAT_0200c448 = (undefined4)((uVar1 & 0xffff) >> 10);
  }
  DAT_01dbe7b8 = 0;
  DAT_01dbe7c0 = 0;
  DAT_01dbe7c8 = 0;
  DAT_01dbe7d0 = 0;
  DAT_0200c44d = 1;
  DAT_0200c44c = 1;
  FUN_0044fe70(auStack_58);
  return;
}

