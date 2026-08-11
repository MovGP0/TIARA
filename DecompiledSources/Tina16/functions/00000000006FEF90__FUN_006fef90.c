/* Ghidra address: 006fef90 */
/* Ghidra symbol: FUN_006fef90 */


void FUN_006fef90(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  if (**(int **)(param_2 + 0x10) == 0xb046) {
    FUN_0065ec00(param_1,(char)(*(int **)(param_2 + 0x10))[4]);
  }
  return;
}

