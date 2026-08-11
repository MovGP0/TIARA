/* Ghidra address: 01754a90 */
/* Ghidra symbol: FUN_01754a90 */


ulonglong FUN_01754a90(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 unaff_RSI;
  
  bVar1 = *(double *)(param_1 + 0x40) != *(double *)(param_1 + 0x38);
  if (bVar1) {
    FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x40);
  }
  return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar1) & 0xffffffff;
}

