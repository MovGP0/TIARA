/* Ghidra address: 01d32430 */
/* Ghidra symbol: FUN_01d32430 */


void FUN_01d32430(undefined8 param_1,longlong *param_2)

{
  int local_2c;
  undefined8 local_28;
  int local_1c [3];
  
  local_28 = 0;
  FUN_01d31720(param_1,local_1c);
  if (-1 < local_1c[0] + -1) {
    do {
      FUN_01d316c0(param_1,&local_28);
      FUN_01d31720(param_1,&local_2c);
      (**(code **)(*param_2 + 0x80))(param_2,local_28,(longlong)local_2c);
      local_1c[0] = local_1c[0] + -1;
    } while (local_1c[0] != 0);
  }
  FUN_00414480(&local_28);
  return;
}

