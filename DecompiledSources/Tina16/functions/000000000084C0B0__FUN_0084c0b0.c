/* Ghidra address: 0084c0b0 */
/* Ghidra symbol: FUN_0084c0b0 */


void FUN_0084c0b0(longlong *param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  if (param_1[7] != 0) {
    (**(code **)(*param_1 + 0x90))(param_1);
    (**(code **)(*(longlong *)param_1[7] + -0x20))((longlong *)param_1[7],1);
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

