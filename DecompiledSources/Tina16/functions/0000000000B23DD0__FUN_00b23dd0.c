/* Ghidra address: 00b23dd0 */
/* Ghidra symbol: FUN_00b23dd0 */


undefined4 FUN_00b23dd0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00415d10(&local_10,0xd1,0);
  uVar2 = FUN_00414df0(&local_10);
  FUN_00409a70(param_1 + 0x10,uVar2,0xd1);
  uVar1 = FUN_00b22dc0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xe8),local_10);
  FUN_004144d0(&local_10);
  return uVar1;
}

