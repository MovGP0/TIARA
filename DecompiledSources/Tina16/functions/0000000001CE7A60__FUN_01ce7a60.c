/* Ghidra address: 01ce7a60 */
/* Ghidra symbol: FUN_01ce7a60 */


bool FUN_01ce7a60(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  bool local_19;
  
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  iVar1 = FUN_01ce7920(local_res8);
  iVar2 = FUN_01ce7920(local_res10);
  if (iVar1 < iVar2) {
    local_19 = false;
  }
  else {
    iVar1 = FUN_01ce7920(local_res8);
    iVar2 = FUN_01ce7920(local_res10);
    if (iVar2 < iVar1) {
      local_19 = true;
    }
    else {
      iVar1 = FUN_00416d10(local_res8,local_res10);
      local_19 = 0 < iVar1;
    }
  }
  FUN_00414560(&local_res8,2);
  return local_19;
}

