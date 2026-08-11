/* Ghidra address: 017c5250 */
/* Ghidra symbol: FUN_017c5250 */


void FUN_017c5250(ulonglong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_00409570((longlong)(param_3 * 8 + *(int *)PTR_DAT_020036d8 * 2));
  *param_2 = lVar1;
  *param_1 = *param_2 + (longlong)(*(int *)PTR_DAT_020036d8 + -1) &
             (longlong)-*(int *)PTR_DAT_020036d8;
  return;
}

