/* Ghidra address: 00be7460 */
/* Ghidra symbol: FUN_00be7460 */


void FUN_00be7460(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00be7fe0(param_1);
  iVar1 = iVar1 - param_2;
  if (0 < param_3) {
    iVar1 = iVar1 - param_3;
  }
  FUN_00409a70(*(longlong *)(param_1 + 0x20) + (ulonglong)param_2 * 2,
               *(longlong *)(param_1 + 0x20) + (longlong)(int)(param_2 + param_3) * 2,
               (longlong)(iVar1 * 2));
  return;
}

