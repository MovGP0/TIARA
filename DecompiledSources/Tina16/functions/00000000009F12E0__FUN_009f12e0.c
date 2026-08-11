/* Ghidra address: 009f12e0 */
/* Ghidra symbol: FUN_009f12e0 */


ulonglong FUN_009f12e0(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = param_2 * 0x54 + param_3;
  if (iVar1 < 0xc36) {
    if (param_3 < 0x2a) {
      uVar2 = (ulonglong)
              (ushort)(*(short *)(PTR_DAT_02005800 + (longlong)(param_2 * 2) * 2) +
                      (ushort)(byte)PTR_DAT_02005b40[iVar1]);
    }
    else {
      uVar2 = (ulonglong)
              (ushort)(*(short *)(PTR_DAT_02005800 + (longlong)(param_2 * 2 + 1) * 2) +
                      (ushort)(byte)PTR_DAT_02005b40[iVar1]);
    }
  }
  else {
    uVar2 = CONCAT62((uint6)(ushort)((uint)iVar1 >> 0x10),0xfffd);
  }
  return uVar2;
}

