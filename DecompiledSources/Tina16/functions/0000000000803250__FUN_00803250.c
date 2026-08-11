/* Ghidra address: 00803250 */
/* Ghidra symbol: FUN_00803250 */


void FUN_00803250(longlong *param_1)

{
  if (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) || (param_1[0xf] == 0)) {
    FUN_00659e90();
  }
  else {
    (**(code **)(*param_1 + -0x38))(param_1);
  }
  return;
}

