/* Ghidra address: 013c1550 */
/* Ghidra symbol: FUN_013c1550 */


undefined8 FUN_013c1550(undefined8 param_1,int param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414b50(&local_10,&DAT_013c1624);
  if (param_2 == 0) {
    FUN_00414b50(&local_10,&DAT_013c1624);
  }
  else if (param_2 == 1) {
    FUN_00414b50(&local_10,&DAT_013c1634);
  }
  else if (param_2 == 2) {
    FUN_00414b50(&local_10,&DAT_013c1644);
  }
  else if (param_2 == 3) {
    FUN_00414b50(&local_10,&DAT_013c1634);
  }
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  return param_1;
}

