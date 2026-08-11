/* Ghidra address: 004d6be0 */
/* Ghidra symbol: FUN_004d6be0 */


longlong FUN_004d6be0(longlong param_1,char param_2,undefined8 *param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined1 *local_30;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_48 = param_6;
  local_40 = param_7;
  FUN_004d6670(local_res8,0,param_4,param_5);
  *(undefined8 *)(local_res8 + 0x58) = *param_3;
  *(undefined8 *)(local_res8 + 0x60) = param_3[1];
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

