/* Ghidra address: 006fa460 */
/* Ghidra symbol: FUN_006fa460 */


void FUN_006fa460(longlong *param_1,char param_2)

{
  if (*(char *)((longlong)param_1 + 0x31b) != param_2) {
    *(char *)((longlong)param_1 + 0x31b) = param_2;
    (**(code **)(*param_1 + 0x1c8))(param_1);
  }
  return;
}

