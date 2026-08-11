/* Ghidra address: 0181b630 */
/* Ghidra symbol: FUN_0181b630 */


void FUN_0181b630(longlong *param_1,int param_2)

{
  FUN_007fce60(param_1,param_2);
  if ((param_2 != (int)param_1[0xd6]) && ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0)) {
    (**(code **)(*param_1 + 0x350))(param_1,param_2);
    *(int *)(param_1 + 0xd6) = param_2;
  }
  return;
}

