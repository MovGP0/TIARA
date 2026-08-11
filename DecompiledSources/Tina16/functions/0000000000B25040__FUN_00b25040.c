/* Ghidra address: 00b25040 */
/* Ghidra symbol: FUN_00b25040 */


undefined4 FUN_00b25040(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00415d10(&local_10,0x17,0);
  uVar2 = FUN_00414df0(&local_10);
  FUN_00409a70(param_1 + 0x10,uVar2,0x17);
  uVar1 = FUN_00b22d20(*(undefined8 *)(param_1 + 8),local_10);
  FUN_004144d0(&local_10);
  return uVar1;
}

