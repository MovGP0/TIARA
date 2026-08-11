/* Ghidra address: 01b4e700 */
/* Ghidra symbol: FUN_01b4e700 */


bool FUN_01b4e700(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18;
  int local_1c [3];
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_01b22620(*(undefined8 *)(param_1 + 8),local_res10,local_1c,1);
  if (-1 < local_1c[0]) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x40))
              (*(longlong **)(param_1 + 8),local_1c[0],local_res18);
  }
  FUN_00414560(&local_res10,2);
  return -1 < local_1c[0];
}

