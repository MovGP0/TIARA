/* Ghidra address: 0055abe0 */
/* Ghidra symbol: FUN_0055abe0 */


void FUN_0055abe0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 local_38 [16];
  
  FUN_0055ac30(param_1);
  lVar1 = *(longlong *)(param_1 + 0x28);
  FUN_0055b540(local_38,param_2,param_3,param_4);
  FUN_005980d0(lVar1 + 8,local_38);
  return;
}

