/* Ghidra address: 01750740 */
/* Ghidra symbol: FUN_01750740 */


ulonglong FUN_01750740(longlong param_1,undefined8 param_2)

{
  undefined8 unaff_RSI;
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0x38);
  if (bVar1) {
    FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x3c);
  return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar1) & 0xffffffff;
}

