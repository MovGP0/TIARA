/* Ghidra address: 00f05360 */
/* Ghidra symbol: FUN_00f05360 */


ulonglong FUN_00f05360(int param_1,int param_2)

{
  ulonglong uVar1;
  
  if (param_1 < 0) {
    uVar1 = (longlong)-param_1 % (longlong)param_2;
  }
  else {
    uVar1 = (longlong)param_1 % (longlong)param_2;
  }
  return uVar1 & 0xffffffff;
}

