/* Ghidra address: 01c01b40 */
/* Ghidra symbol: FUN_01c01b40 */


void FUN_01c01b40(longlong *param_1)

{
  (**(code **)(*param_1 + 0x2f0))(param_1);
  if (param_1[0x9d] != 0) {
    (*(code *)param_1[0x9d])(param_1[0x9e],param_1);
  }
  return;
}

