/* Ghidra address: 01baffe0 */
/* Ghidra symbol: FUN_01baffe0 */


void FUN_01baffe0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  param_2 = param_2 + *(int *)(param_1 + 0x18);
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + -8);
  }
  if (lVar1 < param_2) {
    uVar2 = FUN_0040c770((double)param_2 * 1.5);
    FUN_00419260(param_1 + 0x10,&DAT_00406578,1,uVar2);
  }
  return;
}

