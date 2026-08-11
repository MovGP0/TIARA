/* Ghidra address: 00c31c50 */
/* Ghidra symbol: FUN_00c31c50 */


void FUN_00c31c50(longlong *param_1,int param_2)

{
  if (param_2 != (int)param_1[8]) {
    (**(code **)(*param_1 + 0x20))(param_1);
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}

