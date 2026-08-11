/* Ghidra address: 0138de60 */
/* Ghidra symbol: FUN_0138de60 */


undefined8
FUN_0138de60(undefined8 param_1,char param_2,undefined8 param_3,undefined1 param_4,
            undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
            undefined1 param_9,undefined1 param_10,undefined8 param_11)

{
  undefined8 local_res8;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_88;
  FUN_00414610(param_7);
  FUN_00414610(param_8);
  FUN_00414610(param_11);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  local_68 = param_5;
  local_60 = param_6;
  local_58 = param_7;
  local_50 = param_8;
  local_48 = param_9;
  local_40 = param_10;
  local_38 = param_11;
  FUN_01b06050(local_res8,0,param_3,param_4);
  FUN_00414560(&param_7,2);
  FUN_00414480(&param_11);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

