/* Ghidra address: 01b3b510 */
/* Ghidra symbol: FUN_01b3b510 */


int FUN_01b3b510(longlong param_1,longlong param_2,int param_3)

{
  longlong local_res10 [3];
  int local_c;
  
  local_res10[0] = param_2;
  FUN_00419500(param_2);
  local_c = param_3;
  if ((*(longlong *)(param_1 + 1000) != 0) && (local_res10[0] != 0)) {
    local_c = *(int *)(local_res10[0] + (longlong)param_3 * 4);
  }
  FUN_00419430(local_res10,&DAT_004066f0);
  return local_c;
}

