/* Ghidra address: 00c29d30 */
/* Ghidra symbol: FUN_00c29d30 */


void FUN_00c29d30(longlong *param_1,longlong param_2)

{
  FUN_00c28ba0(param_1);
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x10))(param_1,param_2);
  }
  return;
}

