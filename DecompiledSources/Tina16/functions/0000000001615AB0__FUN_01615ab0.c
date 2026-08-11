/* Ghidra address: 01615ab0 */
/* Ghidra symbol: FUN_01615ab0 */


double FUN_01615ab0(longlong param_1,int param_2)

{
  double local_18;
  int local_c;
  
  if (*(int *)(param_1 + 0x14) == 5) {
    FUN_00409a70(*(longlong *)(param_1 + 8) + (longlong)(param_2 * 8),&local_18,8);
  }
  else {
    FUN_00409a70(*(longlong *)(param_1 + 8) + (longlong)(param_2 * 4),&local_c,4);
    local_18 = (double)local_c;
  }
  return local_18;
}

