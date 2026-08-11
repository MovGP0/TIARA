/* Ghidra address: 007d7850 */
/* Ghidra symbol: FUN_007d7850 */


void FUN_007d7850(longlong *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x15]) {
    *(char *)(param_1 + 0x15) = param_2;
    (**(code **)(*param_1 + 0x98))(param_1);
  }
  return;
}

