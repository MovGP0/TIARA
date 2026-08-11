/* Ghidra address: 011115d0 */
/* Ghidra symbol: FUN_011115d0 */


void FUN_011115d0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = FUN_011115a0(param_1);
  FUN_0064cbf0(param_1,iVar1 * (*(int *)((longlong)param_1 + 0x5d4) + -1) + 1);
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

