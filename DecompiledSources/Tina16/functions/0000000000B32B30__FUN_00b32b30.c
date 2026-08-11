/* Ghidra address: 00b32b30 */
/* Ghidra symbol: FUN_00b32b30 */


void FUN_00b32b30(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  undefined4 local_c;
  
  local_20[0] = 0;
  **(undefined1 **)(param_1 + 0x38) = 3;
  FUN_00415ad0(*(longlong *)(param_1 + 0x38) + 2,
               *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10),*(int *)(param_1 + 0x34) + 1,2)
  ;
  local_c = 0;
  uVar1 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(uVar1,&local_c,2);
  FUN_0043f750(local_20,local_c);
  FUN_00415dd0(*(longlong *)(param_1 + 0x38) + 10,local_20[0],0);
  FUN_00414480(local_20);
  return;
}

