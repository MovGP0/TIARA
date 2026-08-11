/* Ghidra address: 00d00470 */
/* Ghidra symbol: FUN_00d00470 */


longlong FUN_00d00470(longlong param_1,char param_2,undefined4 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00cbbf00(local_res8,0,param_3,param_4);
  FUN_00414ad0(local_res8 + 0x38,param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

