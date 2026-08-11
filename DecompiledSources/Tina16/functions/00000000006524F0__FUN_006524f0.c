/* Ghidra address: 006524f0 */
/* Ghidra symbol: FUN_006524f0 */


void FUN_006524f0(longlong *param_1,longlong param_2)

{
  FUN_0064ee80(param_1,param_2);
  if (*(longlong *)(param_2 + 0x18) == 0) {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  return;
}

