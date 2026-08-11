/* Ghidra address: 01bf9640 */
/* Ghidra symbol: FUN_01bf9640 */


ulonglong FUN_01bf9640(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 unaff_RSI;
  
  iVar1 = FUN_0044f900(param_2,*(undefined8 *)(param_1 + 200));
  if (iVar1 != 0) {
    FUN_00416e20(param_1 + 200,iVar1,1);
  }
  return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),iVar1 != 0) & 0xffffffff;
}

