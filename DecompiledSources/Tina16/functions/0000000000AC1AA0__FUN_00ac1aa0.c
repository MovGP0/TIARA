/* Ghidra address: 00ac1aa0 */
/* Ghidra symbol: FUN_00ac1aa0 */


int FUN_00ac1aa0(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x430) + 0xd8 + (param_4 & 0xff) * 4);
  if ((0 < iVar1) && (iVar1 <= param_2)) {
    param_2 = iVar1;
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x430) + 0xd8 + (param_3 & 0xff) * 4);
  if ((0 < iVar1) && (param_2 <= iVar1)) {
    param_2 = iVar1;
  }
  return param_2;
}

