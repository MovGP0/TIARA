/* Ghidra address: 0082a750 */
/* Ghidra symbol: FUN_0082a750 */


void FUN_0082a750(longlong *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x67]) {
    *(char *)(param_1 + 0x67) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

