/* Ghidra address: 008fc050 */
/* Ghidra symbol: FUN_008fc050 */


undefined1 FUN_008fc050(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined1 local_9;
  
  local_res8[0] = param_1;
  FUN_00414650(local_res8);
  iVar1 = FUN_00416420(local_res8[0],0);
  if (iVar1 == 0) {
    local_9 = 1;
  }
  else {
    local_9 = FUN_008fc130(local_res8[0]);
  }
  FUN_00414520(local_res8);
  return local_9;
}

