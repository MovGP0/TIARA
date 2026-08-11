/* Ghidra address: 013d1d20 */
/* Ghidra symbol: FUN_013d1d20 */


void FUN_013d1d20(longlong *param_1,undefined8 param_2,longlong param_3)

{
  (**(code **)(*param_1 + 0x78))(param_1,param_2);
  param_1[10] = param_3;
  (**(code **)(*param_1 + 0x78))(param_1,param_2);
  return;
}

