/* Ghidra address: 008fcaf0 */
/* Ghidra symbol: FUN_008fcaf0 */


undefined1 FUN_008fcaf0(short *param_1)

{
  int iVar1;
  short *local_res8 [4];
  undefined1 local_11;
  undefined8 local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  if (local_res8[0] == (short *)0x0) {
    local_11 = 0;
  }
  else if (*local_res8[0] == 0x2f) {
    iVar1 = 0;
    if (local_res8[0] != (short *)0x0) {
      iVar1 = *(int *)(local_res8[0] + -2);
    }
    FUN_00416dc0(&local_10,local_res8[0],2,iVar1 + -1);
    local_11 = FUN_008fda10(local_10);
  }
  else {
    local_11 = 0;
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res8);
  return local_11;
}

