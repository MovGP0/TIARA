/* Ghidra address: 0067fe90 */
/* Ghidra symbol: FUN_0067fe90 */


void FUN_0067fe90(longlong *param_1,char param_2)

{
  if (*(char *)((longlong)param_1 + 0x33c) != param_2) {
    *(char *)((longlong)param_1 + 0x33c) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

