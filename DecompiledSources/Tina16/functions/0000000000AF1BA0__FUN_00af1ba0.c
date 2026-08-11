/* Ghidra address: 00af1ba0 */
/* Ghidra symbol: FUN_00af1ba0 */


void FUN_00af1ba0(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4)

{
  if (param_3 < *(int *)(param_2 + 0x49c)) {
    FUN_0068e9b0(param_2,param_3);
    FUN_0068eaa0(param_2,param_4);
  }
  else {
    FUN_0068eaa0(param_2,param_4);
    FUN_0068e9b0(param_2,param_3);
  }
  return;
}

