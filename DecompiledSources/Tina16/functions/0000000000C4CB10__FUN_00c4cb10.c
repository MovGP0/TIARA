/* Ghidra address: 00c4cb10 */
/* Ghidra symbol: FUN_00c4cb10 */


byte FUN_00c4cb10(longlong param_1,longlong *param_2,byte param_3)

{
  byte bVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_2 + 0x38))(param_2,local_20);
  bVar1 = FUN_00c4c7b0(param_1,local_20[0]);
  if ((param_3 & bVar1) != 0) {
    FUN_00c493e0((&DAT_02019c90)[*(int *)(param_1 + 0x80)]);
  }
  FUN_00414480(local_20);
  return bVar1;
}

