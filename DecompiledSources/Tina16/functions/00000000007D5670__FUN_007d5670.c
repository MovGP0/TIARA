/* Ghidra address: 007d5670 */
/* Ghidra symbol: FUN_007d5670 */


void FUN_007d5670(longlong *param_1,longlong param_2)

{
  FUN_007d57e0(param_1);
  if (param_2 != 0) {
    FUN_007d5550(param_1,param_2);
    param_1[0x14] = param_2;
    (**(code **)(*param_1 + 0x98))(param_1);
  }
  return;
}

