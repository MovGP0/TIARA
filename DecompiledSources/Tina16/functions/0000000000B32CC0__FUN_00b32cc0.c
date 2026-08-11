/* Ghidra address: 00b32cc0 */
/* Ghidra symbol: FUN_00b32cc0 */


void FUN_00b32cc0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  **(undefined1 **)(param_1 + 0x38) = 3;
  FUN_00415ad0(*(longlong *)(param_1 + 0x38) + 2,
               *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10),*(int *)(param_1 + 0x34) + 1,8)
  ;
  local_18 = 0;
  uVar1 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(uVar1,&local_18,8);
  FUN_00414480(&local_10);
  FUN_00448450(&local_10,local_18,PTR_DAT_02004830);
  FUN_00415dd0(*(longlong *)(param_1 + 0x38) + 10,local_10,0);
  FUN_00414480(&local_10);
  FUN_00414480(&local_10);
  return;
}

