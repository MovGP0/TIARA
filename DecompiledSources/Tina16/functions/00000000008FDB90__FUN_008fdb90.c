/* Ghidra address: 008fdb90 */
/* Ghidra symbol: FUN_008fdb90 */


undefined1 FUN_008fdb90(longlong param_1)

{
  longlong local_res8 [4];
  undefined1 local_9;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  if (local_res8[0] == 0) {
    local_9 = 1;
  }
  else {
    local_9 = FUN_008fdc70(local_res8[0]);
  }
  FUN_00414480(local_res8);
  return local_9;
}

