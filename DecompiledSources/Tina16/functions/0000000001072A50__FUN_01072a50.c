/* Ghidra address: 01072a50 */
/* Ghidra symbol: FUN_01072a50 */


void FUN_01072a50(longlong param_1,undefined8 param_2,int param_3)

{
  *(undefined8 *)(param_1 + 0x6e0) = param_2;
  if (param_3 < 5) {
    FUN_00409a70(param_2,param_1 + 0x6d8,(longlong)param_3);
  }
  return;
}

