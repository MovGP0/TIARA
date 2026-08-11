/* Ghidra address: 01a49b00 */
/* Ghidra symbol: FUN_01a49b00 */


bool FUN_01a49b00(undefined8 param_1,longlong *param_2)

{
  undefined8 local_res8 [4];
  int local_1c [3];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_01b22620(param_2,local_res8[0],local_1c,1);
  if (-1 < local_1c[0]) {
    (**(code **)(*param_2 + 0x98))(param_2,local_1c[0]);
  }
  FUN_00414480(local_res8);
  return -1 < local_1c[0];
}

