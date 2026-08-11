/* Ghidra address: 00d212d0 */
/* Ghidra symbol: FUN_00d212d0 */


void FUN_00d212d0(longlong *param_1,longlong param_2)

{
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x58))(param_1,param_1[0xb]);
  }
  else {
    FUN_00409a70(param_2,param_1[0xb],(longlong)*(int *)((longlong)param_1 + 0x44));
  }
  FUN_00409a70(param_1[0xb],param_1[0xc],(longlong)*(int *)((longlong)param_1 + 0x44));
  (**(code **)(*param_1 + 0x38))(param_1,1,1);
  return;
}

