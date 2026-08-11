/* Ghidra address: 00c4ca50 */
/* Ghidra symbol: FUN_00c4ca50 */


byte FUN_00c4ca50(longlong param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_004167a0(&local_10,param_2);
  bVar1 = FUN_00c4c7b0(param_1,local_10);
  if ((param_3 & bVar1) != 0) {
    FUN_00c493e0((&DAT_02019c90)[*(int *)(param_1 + 0x80)]);
  }
  FUN_00414480(&local_10);
  return bVar1;
}

