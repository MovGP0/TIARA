/* Ghidra address: 00f2c770 */
/* Ghidra symbol: FUN_00f2c770 */


undefined8
FUN_00f2c770(undefined8 param_1,char param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined *local_40;
  undefined1 **local_38;
  undefined4 local_30;
  undefined1 *local_20 [2];
  
  local_20[0] = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20[0];
  }
  local_20[0] = puVar1;
  local_48 = param_5;
  local_40 = PTR_PTR_02005a40;
  local_38 = local_20;
  local_30 = 0xffffffff;
  FUN_00f2c2b0(local_res8,0,param_3,param_4);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

