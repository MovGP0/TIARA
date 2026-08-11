/* Ghidra address: 01891510 */
/* Ghidra symbol: FUN_01891510 */


void FUN_01891510(longlong *param_1,undefined8 param_2)

{
  longlong local_20 [2];
  
  local_20[0] = 0;
  FUN_0064dd90(param_1[0x98],local_20);
  if ((local_20[0] != 0) != (bool)*(char *)((longlong)param_1 + 0x4b9)) {
    *(bool *)((longlong)param_1 + 0x4b9) = local_20[0] != 0;
    FUN_01891a50();
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  if (param_1[0x9b] != 0) {
    (*(code *)param_1[0x9b])(param_1[0x9c],param_2);
  }
  FUN_00414480(local_20);
  return;
}

