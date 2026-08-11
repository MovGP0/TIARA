/* Ghidra address: 00849450 */
/* Ghidra symbol: FUN_00849450 */


void FUN_00849450(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_28 [16];
  
  FUN_00658930(param_1,param_2);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_0416d265(uVar1,0,0,0);
  if ((*(longlong *)(param_1 + 0x510) != 0) &&
     (lVar2 = FUN_0065b870(*(longlong *)(param_1 + 0x510)), *(longlong *)(param_2 + 8) == lVar2)) {
    return;
  }
  FUN_008482c0(param_1,local_28);
  FUN_00844240(param_1,local_28);
  FUN_00848f80(param_1);
  return;
}

