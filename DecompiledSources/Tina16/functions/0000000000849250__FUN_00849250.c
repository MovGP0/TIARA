/* Ghidra address: 00849250 */
/* Ghidra symbol: FUN_00849250 */


void FUN_00849250(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 local_28 [16];
  
  FUN_00658970(param_1,param_2);
  thunk_FUN_04169939();
  FUN_008482c0(param_1,local_28);
  FUN_00844240(param_1,local_28);
  if (*(longlong *)(param_1 + 0x510) != 0) {
    lVar1 = FUN_0065b870(*(longlong *)(param_1 + 0x510));
    if (*(longlong *)(param_2 + 8) != lVar1) {
      FUN_00848db0(param_1);
    }
  }
  return;
}

