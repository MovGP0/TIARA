/* Ghidra address: 017c3640 */
/* Ghidra symbol: FUN_017c3640 */


void FUN_017c3640(longlong *param_1,undefined8 param_2)

{
  FUN_01cf0ee0(param_1,param_2);
  if (*(char *)((longlong)param_1 + 10) != '\0') {
    (**(code **)(*param_1 + 0x168))(param_1,param_2,1);
    if (-1 < *(int *)((longlong)param_1 + 0x1c)) {
      FUN_017c30d0(param_1);
      (**(code **)(*param_1 + 0x168))(param_1,param_2,1);
    }
  }
  return;
}

