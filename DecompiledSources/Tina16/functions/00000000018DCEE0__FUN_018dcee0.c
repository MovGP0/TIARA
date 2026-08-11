/* Ghidra address: 018dcee0 */
/* Ghidra symbol: FUN_018dcee0 */


void FUN_018dcee0(longlong *param_1)

{
  (**(code **)(*param_1 + -0x38))(param_1);
  if (param_1[0xdb] != 0) {
    (*(code *)param_1[0xdb])(param_1[0xdc],param_1);
  }
  return;
}

