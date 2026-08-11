/* Ghidra address: 01bbdf80 */
/* Ghidra symbol: FUN_01bbdf80 */


void FUN_01bbdf80(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 local_res10 [3];
  undefined8 local_30 [2];
  int local_1c [3];
  
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_01b22620(param_3,local_res10[0],local_1c,0);
  if (local_1c[0] == -1) {
    FUN_00416ba0(local_30,local_res10[0],L": not found in the template file");
    FUN_01bbc400(param_1,local_30[0]);
  }
  (**(code **)(*param_3 + 0x98))(param_3,local_1c[0]);
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return;
}

