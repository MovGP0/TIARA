/* Ghidra address: 01751480 */
/* Ghidra symbol: FUN_01751480 */


ulonglong FUN_01751480(longlong param_1,undefined8 param_2)

{
  undefined8 unaff_RSI;
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x3c);
  if (bVar1) {
    FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
  }
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
  return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar1) & 0xffffffff;
}

