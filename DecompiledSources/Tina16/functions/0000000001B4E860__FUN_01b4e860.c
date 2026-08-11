/* Ghidra address: 01b4e860 */
/* Ghidra symbol: FUN_01b4e860 */


bool FUN_01b4e860(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  int local_1c [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_01b22620(*(undefined8 *)(param_1 + 8),local_res10[0],local_1c,1);
  if (-1 < local_1c[0]) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),local_1c[0]);
  }
  FUN_00414480(local_res10);
  return -1 < local_1c[0];
}

