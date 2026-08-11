/* Ghidra address: 0044daa0 */
/* Ghidra symbol: FUN_0044daa0 */


longlong FUN_0044daa0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00442f70(&local_28,param_3,param_4,param_5);
  FUN_00414ad0(local_res8 + 8,local_28);
  *(undefined4 *)(local_res8 + 0x10) = param_6;
  FUN_00414480(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

