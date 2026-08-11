/* Ghidra address: 00624440 */
/* Ghidra symbol: FUN_00624440 */


longlong FUN_00624440(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00624210(&local_28,param_3);
  local_38 = param_7;
  FUN_006242c0(local_res8,0,local_28,param_4);
  FUN_00414ad0(local_res8 + 0x38,param_5);
  FUN_00414ad0(local_res8 + 0x40,param_6);
  FUN_00414480(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

