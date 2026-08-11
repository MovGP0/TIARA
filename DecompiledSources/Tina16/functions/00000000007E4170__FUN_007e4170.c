/* Ghidra address: 007e4170 */
/* Ghidra symbol: FUN_007e4170 */


ulonglong FUN_007e4170(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 unaff_RSI;
  
  iVar1 = FUN_004170c0(param_2,*(undefined8 *)(param_1 + 200),1);
  if (iVar1 != 0) {
    FUN_00416e20(param_1 + 200,iVar1,1);
  }
  return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),iVar1 != 0) & 0xffffffff;
}

