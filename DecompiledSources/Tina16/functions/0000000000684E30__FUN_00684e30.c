/* Ghidra address: 00684e30 */
/* Ghidra symbol: FUN_00684e30 */


void FUN_00684e30(longlong *param_1)

{
  FUN_00651da0(param_1);
  if (*(int *)((longlong)param_1 + 0x4a4) != -1) {
    (**(code **)(*param_1 + 0x268))(param_1,*(int *)((longlong)param_1 + 0x4a4));
  }
  return;
}

