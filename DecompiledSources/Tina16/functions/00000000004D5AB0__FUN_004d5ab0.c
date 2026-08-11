/* Ghidra address: 004d5ab0 */
/* Ghidra symbol: FUN_004d5ab0 */


void FUN_004d5ab0(longlong *param_1)

{
  (**(code **)(*DAT_020115f0 + 0x28))(DAT_020115f0);
  FUN_004d2c10(param_1);
  FUN_004bdcb0(param_1,0);
  if ((char)param_1[0x15] == '\0') {
    (**(code **)(*param_1 + 0x90))(param_1);
  }
  return;
}

