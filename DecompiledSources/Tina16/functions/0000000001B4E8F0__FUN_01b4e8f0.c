/* Ghidra address: 01b4e8f0 */
/* Ghidra symbol: FUN_01b4e8f0 */


bool FUN_01b4e8f0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  int local_c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_01b22620(*(undefined8 *)(param_1 + 8),local_res10[0],&local_c,1);
  FUN_00414480(local_res10);
  return -1 < local_c;
}

