/* Ghidra address: 01972f10 */
/* Ghidra symbol: FUN_01972f10 */


undefined8 FUN_01972f10(longlong param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    FUN_0080dcf0(*(undefined8 *)PTR_DAT_02004030,&local_18);
    FUN_00441640(param_2,local_18);
  }
  else {
    FUN_004423c0(&local_10);
    FUN_00416ba0(param_2,local_10,&LAB_01972fc8);
  }
  FUN_00414560(&local_18,2);
  return param_2;
}

