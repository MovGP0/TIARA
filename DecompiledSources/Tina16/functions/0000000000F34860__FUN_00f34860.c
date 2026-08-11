/* Ghidra address: 00f34860 */
/* Ghidra symbol: FUN_00f34860 */


int FUN_00f34860(longlong param_1,longlong param_2,int param_3)

{
  ulonglong uVar1;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = (ulonglong)param_3;
    if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar1)) {
      uVar1 = FUN_00410a90();
    }
    FUN_00409a70(s_falsetrue_01efb790,param_2 + uVar1,5);
    param_3 = param_3 + 5;
  }
  else {
    uVar1 = (ulonglong)param_3;
    if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar1)) {
      uVar1 = FUN_00410a90();
    }
    FUN_00409a70(s_falsetrue_01efb790 + 5,param_2 + uVar1,4);
    param_3 = param_3 + 4;
  }
  return param_3;
}

