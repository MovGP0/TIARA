/* Ghidra address: 006fed70 */
/* Ghidra symbol: FUN_006fed70 */


void FUN_006fed70(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  if (*(int *)(param_2 + 0x10) == 0) {
    FUN_006fbc50(param_1,*(undefined8 *)(param_2 + 8));
  }
  else {
    FUN_006fbb60(param_1,*(undefined8 *)(param_2 + 8));
  }
  return;
}

