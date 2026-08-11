/* Ghidra address: 006221c0 */
/* Ghidra symbol: FUN_006221c0 */


void FUN_006221c0(longlong *param_1)

{
  if (param_1[1] == 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  else {
    (**(code **)(*(longlong *)param_1[1] + 0x10))((longlong *)param_1[1]);
  }
  return;
}

