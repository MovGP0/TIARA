/* Ghidra address: 0160a050 */
/* Ghidra symbol: FUN_0160a050 */


undefined4 FUN_0160a050(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined4 local_c;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_c = 0;
  iVar1 = FUN_00416db0(local_res8[0],&DAT_0160a0e4);
  if (iVar1 == 0) {
    local_c = 0;
  }
  else {
    iVar1 = FUN_00416db0(local_res8[0],&LAB_0160a0f4);
    if (iVar1 == 0) {
      local_c = 1;
    }
  }
  FUN_00414480(local_res8);
  return local_c;
}

