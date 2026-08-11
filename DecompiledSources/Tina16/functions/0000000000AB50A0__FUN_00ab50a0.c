/* Ghidra address: 00ab50a0 */
/* Ghidra symbol: FUN_00ab50a0 */


void FUN_00ab50a0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x108) + -8);
  }
  if (lVar1 < param_2) {
    FUN_00419260(param_1 + 0x108,&DAT_00a84998,1,(longlong)param_2);
  }
  return;
}

