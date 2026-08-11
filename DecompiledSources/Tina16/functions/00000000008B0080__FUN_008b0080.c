/* Ghidra address: 008b0080 */
/* Ghidra symbol: FUN_008b0080 */


undefined1 FUN_008b0080(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_11;
  undefined8 local_10;
  
  local_10 = 0;
  iVar1 = FUN_004170c0(&DAT_008b0124,param_2,1);
  if (iVar1 < 1) {
    FUN_00416ba0(&local_10,param_2,&DAT_008b0124);
    local_11 = FUN_00879090(param_1,local_10);
  }
  else {
    local_11 = FUN_00879070(param_1,param_2);
  }
  FUN_00414480(&local_10);
  return local_11;
}

