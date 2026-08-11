/* Ghidra address: 01bd3b40 */
/* Ghidra symbol: FUN_01bd3b40 */


void FUN_01bd3b40(longlong *param_1,char param_2)

{
  if (*(char *)((longlong)param_1 + 0x365) != param_2) {
    *(char *)((longlong)param_1 + 0x365) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

