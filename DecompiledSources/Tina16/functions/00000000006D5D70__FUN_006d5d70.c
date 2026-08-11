/* Ghidra address: 006d5d70 */
/* Ghidra symbol: FUN_006d5d70 */


void FUN_006d5d70(longlong *param_1,undefined4 *param_2)

{
  FUN_0065a540(param_1,param_2);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) {
    *param_2 = 0x15;
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  return;
}

