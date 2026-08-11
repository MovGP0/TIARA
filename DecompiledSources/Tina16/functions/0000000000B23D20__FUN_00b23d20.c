/* Ghidra address: 00b23d20 */
/* Ghidra symbol: FUN_00b23d20 */


longlong FUN_00b23d20(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00b22c40(*(undefined8 *)(param_1 + 8),&local_10,param_2);
  FUN_00414bf0(param_1 + 0xe8,local_10);
  uVar1 = FUN_00414df0(param_1 + 0xe8);
  FUN_00409a70(uVar1,param_1 + 0x10,0xd1);
  FUN_004144d0(&local_10);
  return param_1 + 0x10;
}

