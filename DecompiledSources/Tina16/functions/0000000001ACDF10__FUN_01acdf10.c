/* Ghidra address: 01acdf10 */
/* Ghidra symbol: FUN_01acdf10 */


undefined8
FUN_01acdf10(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined1 *local_30;
  undefined8 local_20 [2];
  
  local_30 = auStack_68;
  local_20[0] = *param_6;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_48 = param_5;
  local_40 = local_20;
  FUN_01acd9b0(local_res8,0,param_3,param_4);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

