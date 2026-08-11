/* Ghidra address: 00876b00 */
/* Ghidra symbol: FUN_00876b00 */


ulonglong FUN_00876b00(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + -8);
  }
  uVar2 = lVar1 - param_3;
  if ((longlong)uVar2 < 0) {
    uVar2 = 0;
  }
  if ((-1 < (int)param_2) && ((int)param_2 < (int)uVar2)) {
    uVar2 = (ulonglong)param_2;
  }
  return uVar2;
}

