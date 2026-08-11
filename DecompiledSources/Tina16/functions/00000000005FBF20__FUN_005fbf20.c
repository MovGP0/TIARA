/* Ghidra address: 005fbf20 */
/* Ghidra symbol: FUN_005fbf20 */


ulonglong FUN_005fbf20(uint param_1)

{
  ulonglong uVar1;
  
  if ((int)param_1 < 0) {
    uVar1 = thunk_FUN_041cde23(param_1 & 0xff);
  }
  else {
    uVar1 = (ulonglong)param_1;
  }
  return uVar1;
}

