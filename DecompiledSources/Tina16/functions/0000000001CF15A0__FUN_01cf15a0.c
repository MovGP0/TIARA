/* Ghidra address: 01cf15a0 */
/* Ghidra symbol: FUN_01cf15a0 */


bool FUN_01cf15a0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 local_res8 [4];
  bool local_21;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_21 = false;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2,local_20);
    iVar1 = FUN_004170c0(local_res8[0],local_20[0],1);
    local_21 = 0 < iVar1;
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res8);
  return local_21;
}

