/* Ghidra address: 00742640 */
/* Ghidra symbol: FUN_00742640 */


void FUN_00742640(longlong *param_1,char param_2)

{
  if (param_2 != (char)param_1[99]) {
    *(char *)(param_1 + 99) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

