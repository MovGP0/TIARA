/* Ghidra address: 00f33330 */
/* Ghidra symbol: FUN_00f33330 */


undefined8 FUN_00f33330(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00f33100(local_res8,0);
  local_20 = FUN_00f2e9d0(&LAB_00f22a90,1,param_3);
  FUN_00f335b0(local_res8,local_20);
  local_28 = FUN_00f2e9d0(&LAB_00f22a90,1,param_4);
  FUN_00f335b0(local_res8,local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

