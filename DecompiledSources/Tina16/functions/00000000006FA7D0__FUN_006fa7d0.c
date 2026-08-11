/* Ghidra address: 006fa7d0 */
/* Ghidra symbol: FUN_006fa7d0 */


void FUN_006fa7d0(longlong *param_1,char param_2)

{
  if ((*(char *)((longlong)param_1 + 0x339) != param_2) &&
     (*(char *)((longlong)param_1 + 0x339) = param_2, param_1[0x68] != 0)) {
    (**(code **)(*param_1 + 0x1c0))(param_1);
  }
  return;
}

