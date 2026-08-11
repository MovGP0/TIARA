/* Ghidra address: 004479f0 */
/* Ghidra symbol: FUN_004479f0 */


ulonglong FUN_004479f0(longlong param_1)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  
  uVar1 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),1);
  if (*(short *)(param_1 + 0x3e) == 0x2b) {
    FUN_004479a0();
  }
  else if (*(short *)(param_1 + 0x3e) == 0x2d) {
    FUN_004479a0();
    uVar1 = 0xffffffff;
  }
  return uVar1 & 0xffffffff;
}

