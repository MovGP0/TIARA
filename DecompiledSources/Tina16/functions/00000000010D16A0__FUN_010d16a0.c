/* Ghidra address: 010d16a0 */
/* Ghidra symbol: FUN_010d16a0 */


int FUN_010d16a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res10 [3];
  int local_2c;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_00416db0(local_res10[0],&LAB_010d1764);
  if (iVar1 == 0) {
    local_2c = 0;
  }
  else {
    local_2c = 0;
    do {
      FUN_013b4b30(param_3,local_2c,local_20);
      local_2c = local_2c + 1;
      iVar1 = FUN_00416db0(local_res10[0],local_20[0]);
    } while (iVar1 != 0);
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return local_2c;
}

