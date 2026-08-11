/* Ghidra address: 008fad00 */
/* Ghidra symbol: FUN_008fad00 */


undefined1 FUN_008fad00(short *param_1)

{
  int iVar1;
  short *local_res8 [4];
  undefined1 local_9;
  
  local_res8[0] = param_1;
  FUN_00414650(local_res8);
  iVar1 = FUN_00416420(local_res8[0],0);
  if (iVar1 == 0) {
    local_9 = 0;
  }
  else if (*local_res8[0] == 0x2f) {
    local_9 = 0;
  }
  else {
    local_9 = FUN_008fc130(local_res8[0]);
  }
  FUN_00414520(local_res8);
  return local_9;
}

