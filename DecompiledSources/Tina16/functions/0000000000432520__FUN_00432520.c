/* Ghidra address: 00432520 */
/* Ghidra symbol: FUN_00432520 */


ulonglong FUN_00432520(uint param_1)

{
  ulonglong uVar1;
  
  if (param_1 < 0x100) {
    uVar1 = (ulonglong)(byte)PTR_DAT_0200c3f0[param_1];
  }
  else {
    uVar1 = FUN_00431e30();
  }
  return uVar1;
}

