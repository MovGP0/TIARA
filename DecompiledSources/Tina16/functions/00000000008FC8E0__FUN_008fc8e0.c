/* Ghidra address: 008fc8e0 */
/* Ghidra symbol: FUN_008fc8e0 */


undefined1 FUN_008fc8e0(short *param_1)

{
  short *local_res8 [4];
  undefined1 local_9;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  if (local_res8[0] == (short *)0x0) {
    local_9 = 0;
  }
  else if (*local_res8[0] == 0x2f) {
    local_9 = 0;
  }
  else {
    local_9 = FUN_008fdc70(local_res8[0]);
  }
  FUN_00414480(local_res8);
  return local_9;
}

