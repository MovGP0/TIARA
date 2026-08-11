/* Ghidra address: 00b54140 */
/* Ghidra symbol: FUN_00b54140 */


undefined8 FUN_00b54140(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  undefined8 local_res20;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_res20 = param_4;
  FUN_00414630(param_4);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00b54080(local_res8,0,param_3);
  local_20 = (longlong *)FUN_00b21840(local_res20);
  if (local_20 != (longlong *)0x0) {
    FUN_00b222c0(local_res8,local_20);
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_004144d0(&local_res20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

