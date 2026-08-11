/* Ghidra address: 0082bc00 */
/* Ghidra symbol: FUN_0082bc00 */


void FUN_0082bc00(longlong *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xa5]) {
    *(char *)(param_1 + 0xa5) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

