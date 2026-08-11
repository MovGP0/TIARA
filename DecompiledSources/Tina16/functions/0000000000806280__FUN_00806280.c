/* Ghidra address: 00806280 */
/* Ghidra symbol: FUN_00806280 */


void FUN_00806280(longlong *param_1,longlong param_2)

{
  FUN_00658280(param_1,param_2);
  if (*(longlong *)(param_2 + 8) == 0x2f) {
    (**(code **)(*param_1 + 0x108))(param_1);
  }
  return;
}

