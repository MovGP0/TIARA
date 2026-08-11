/* Ghidra address: 00c742d0 */
/* Ghidra symbol: FUN_00c742d0 */


void FUN_00c742d0(longlong *param_1,char param_2)

{
  if (param_2 != *(char *)((longlong)param_1 + 0x53e)) {
    *(char *)((longlong)param_1 + 0x53e) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

