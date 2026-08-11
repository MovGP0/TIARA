/* Ghidra address: 00bcf580 */
/* Ghidra symbol: FUN_00bcf580 */


void FUN_00bcf580(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined1 local_50 [48];
  
  FUN_00417580(local_50,&DAT_00bcca10);
  if ((param_2 < 0) || (*(int *)(param_1 + 0x40) <= param_2)) {
    FUN_00bceea0(param_2);
  }
  if ((param_3 < 0) || (*(int *)(param_1 + 0x40) <= param_3)) {
    FUN_00bceea0(param_3);
  }
  FUN_004b3260(param_1);
  lVar1 = *(longlong *)(param_1 + 0x38);
  FUN_00417c40(local_50,lVar1 + (longlong)param_2 * 0x28,&DAT_00bcca10);
  FUN_00417c40(lVar1 + (longlong)param_2 * 0x28,
               *(longlong *)(param_1 + 0x38) + (longlong)param_3 * 0x28,&DAT_00bcca10);
  FUN_00417c40(lVar1 + (longlong)param_3 * 0x28,local_50,&DAT_00bcca10);
  if (*(int *)(param_1 + 0x58) == param_2) {
    *(int *)(param_1 + 0x58) = param_3;
  }
  else if (*(int *)(param_1 + 0x58) == param_3) {
    *(int *)(param_1 + 0x58) = param_2;
  }
  FUN_004b3390(param_1);
  FUN_00417740(local_50,&DAT_00bcca10);
  return;
}

