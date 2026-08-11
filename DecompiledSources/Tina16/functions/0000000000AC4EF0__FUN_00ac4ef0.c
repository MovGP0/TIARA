/* Ghidra address: 00ac4ef0 */
/* Ghidra symbol: FUN_00ac4ef0 */


int FUN_00ac4ef0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
  return *(int *)((longlong)param_1 + 0xb4) + iVar1 + (int)param_1[0x17];
}

