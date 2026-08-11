/* Ghidra address: 0096f920 */
/* Ghidra symbol: FUN_0096f920 */


undefined8 *
FUN_0096f920(undefined8 *param_1,char param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
            undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined1 *puVar1;
  undefined8 *local_res8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_a8;
  local_res8 = param_1;
  puVar1 = auStack_a8;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  local_88 = param_6;
  local_80 = param_7;
  local_78 = param_8;
  local_70 = param_9;
  local_68 = param_10;
  local_60 = param_11;
  local_58 = param_12;
  local_50 = param_13;
  local_48 = param_14;
  local_40 = param_15;
  local_38 = param_16;
  (**(code **)*local_res8)(local_res8,param_3,param_4,param_5);
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

