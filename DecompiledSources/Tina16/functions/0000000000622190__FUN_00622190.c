/* Ghidra address: 00622190 */
/* Ghidra symbol: FUN_00622190 */


void FUN_00622190(longlong *param_1)

{
  if (param_1[1] == 0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  else {
    (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1]);
  }
  return;
}

