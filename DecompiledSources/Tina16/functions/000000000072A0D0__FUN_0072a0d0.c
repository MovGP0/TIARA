/* Ghidra address: 0072a0d0 */
/* Ghidra symbol: FUN_0072a0d0 */


longlong FUN_0072a0d0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_68 [40];
  int local_40 [2];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_28 = 0;
  local_30 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00729d30(local_res8,0,param_3);
  FUN_0041ddd0(&local_30,PTR_PTR_02003918);
  local_40[0] = *(int *)(local_res8 + 0x10) + 1;
  local_38 = 0;
  FUN_00442f70(&local_28,local_30,local_40,0);
  FUN_00729ff0(local_res8,local_28);
  *(undefined1 *)(local_res8 + 0x40) = 0;
  FUN_00414560(&local_30,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

