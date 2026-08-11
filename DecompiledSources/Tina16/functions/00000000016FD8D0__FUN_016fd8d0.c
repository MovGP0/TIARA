/* Ghidra address: 016fd8d0 */
/* Ghidra symbol: FUN_016fd8d0 */


void FUN_016fd8d0(longlong param_1)

{
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  if (local_res8[0] != 0) {
    FUN_016fd840(local_res8[0],2,4,0);
  }
  FUN_00414480(local_res8);
  return;
}

