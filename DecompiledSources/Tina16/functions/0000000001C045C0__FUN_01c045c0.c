/* Ghidra address: 01c045c0 */
/* Ghidra symbol: FUN_01c045c0 */


void FUN_01c045c0(longlong *param_1)

{
  FUN_006512e0(param_1);
  if (param_1[100] != 0) {
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  return;
}

