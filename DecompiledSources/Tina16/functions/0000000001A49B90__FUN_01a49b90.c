/* Ghidra address: 01a49b90 */
/* Ghidra symbol: FUN_01a49b90 */


bool FUN_01a49b90(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  int local_c;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_01b22620(param_2,local_res8[0],&local_c,1);
  FUN_00414480(local_res8);
  return -1 < local_c;
}

