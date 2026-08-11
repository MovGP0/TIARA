/* Ghidra address: 015bf400 */
/* Ghidra symbol: FUN_015bf400 */


int FUN_015bf400(longlong param_1)

{
  longlong local_res8 [4];
  int local_10;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_10 = 0;
  if (local_res8[0] != 0) {
    local_10 = *(int *)(local_res8[0] + -4);
  }
  FUN_00414480(local_res8);
  return local_10 * 2;
}

