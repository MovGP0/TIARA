/* Ghidra address: 004b9c30 */
/* Ghidra symbol: FUN_004b9c30 */


int FUN_004b9c30(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (((lVar1 < 0) || (param_3 < 0)) ||
     (lVar2 = *(longlong *)(param_1 + 0x10), lVar2 == lVar1 || lVar2 - lVar1 < 0)) {
    param_3 = 0;
  }
  else {
    if (lVar2 <= param_3 + lVar1) {
      param_3 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x18);
    }
    FUN_00409a70(*(longlong *)(param_1 + 8) + lVar1,param_2,(longlong)param_3);
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + (longlong)param_3;
  }
  return param_3;
}

