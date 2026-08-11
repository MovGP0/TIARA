/* Ghidra address: 00c230d0 */
/* Ghidra symbol: FUN_00c230d0 */


void FUN_00c230d0(longlong *param_1,undefined8 param_2,int param_3)

{
  FUN_00c22da0(param_1);
  if (param_3 != 0) {
    FUN_00c22fb0(param_1,param_3);
    *(int *)(param_1 + 2) = param_3;
    FUN_00409a70(param_2,param_1[1],(longlong)(param_3 * 3));
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}

