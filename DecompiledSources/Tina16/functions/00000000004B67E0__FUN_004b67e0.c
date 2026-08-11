/* Ghidra address: 004b67e0 */
/* Ghidra symbol: FUN_004b67e0 */


void FUN_004b67e0(longlong *param_1,char param_2)

{
  if (param_2 == '\0') {
    (**(code **)(*param_1 + 0x128))(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x130))(param_1);
  }
  return;
}

