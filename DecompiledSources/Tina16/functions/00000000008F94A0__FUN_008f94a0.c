/* Ghidra address: 008f94a0 */
/* Ghidra symbol: FUN_008f94a0 */


void FUN_008f94a0(longlong *param_1,char param_2)

{
  if (param_2 == '\0') {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  return;
}

