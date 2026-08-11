/* Ghidra address: 00be7410 */
/* Ghidra symbol: FUN_00be7410 */


void FUN_00be7410(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30) - param_2;
  if (0 < param_3) {
    iVar1 = iVar1 - param_3;
  }
  FUN_00409a70(*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 4,
               *(longlong *)(param_1 + 0x18) + (longlong)(int)(param_2 + param_3) * 4,
               (longlong)(iVar1 * 4));
  return;
}

