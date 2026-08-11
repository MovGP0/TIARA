/* Ghidra address: 016fd9b0 */
/* Ghidra symbol: FUN_016fd9b0 */


void FUN_016fd9b0(longlong param_1,int param_2)

{
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  if (local_res8[0] != 0) {
    if (param_2 == 0) {
      FUN_016fd840(local_res8[0],1,4,0);
    }
    else {
      FUN_016fd840(local_res8[0],1,0x404,param_2);
    }
  }
  FUN_00414480(local_res8);
  return;
}

