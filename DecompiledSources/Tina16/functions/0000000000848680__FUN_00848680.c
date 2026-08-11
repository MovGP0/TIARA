/* Ghidra address: 00848680 */
/* Ghidra symbol: FUN_00848680 */


void FUN_00848680(longlong *param_1,int param_2)

{
  if (*(int *)((longlong)param_1 + 0x4c4) != param_2) {
    *(int *)((longlong)param_1 + 0x4c4) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

