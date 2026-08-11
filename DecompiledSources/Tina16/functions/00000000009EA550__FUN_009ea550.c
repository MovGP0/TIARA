/* Ghidra address: 009ea550 */
/* Ghidra symbol: FUN_009ea550 */


void FUN_009ea550(longlong *param_1,char param_2)

{
  if (param_2 == '\0') {
    (**(code **)(*param_1 + 0x128))(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x130))(param_1);
  }
  return;
}

