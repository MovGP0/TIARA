/* Ghidra address: 00b06960 */
/* Ghidra symbol: FUN_00b06960 */


void FUN_00b06960(longlong *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x94]) {
    *(char *)(param_1 + 0x94) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

