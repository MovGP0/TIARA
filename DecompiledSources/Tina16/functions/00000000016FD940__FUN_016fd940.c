/* Ghidra address: 016fd940 */
/* Ghidra symbol: FUN_016fd940 */


void FUN_016fd940(longlong param_1)

{
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  if (local_res8[0] != 0) {
    FUN_016fd840(local_res8[0],1,4,0);
  }
  FUN_00414480(local_res8);
  return;
}

