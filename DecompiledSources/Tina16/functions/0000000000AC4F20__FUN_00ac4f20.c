/* Ghidra address: 00ac4f20 */
/* Ghidra symbol: FUN_00ac4f20 */


int FUN_00ac4f20(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 200))(param_1);
  return *(int *)((longlong)param_1 + 0xac) + iVar1 + (int)param_1[0x16];
}

