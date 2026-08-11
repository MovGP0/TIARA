/* Ghidra address: 00c85dd0 */
/* Ghidra symbol: FUN_00c85dd0 */


undefined4 FUN_00c85dd0(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined4 local_c;
  
  local_res10[0] = param_2;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res20);
  if (param_3 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x18);
  }
  if (lVar1 == 0) {
    local_c = 0xffffffff;
  }
  else {
    local_c = FUN_00c7f2d0(lVar1,local_res10[0],local_res20);
  }
  FUN_00414480(local_res10);
  FUN_00414480(&local_res20);
  return local_c;
}

