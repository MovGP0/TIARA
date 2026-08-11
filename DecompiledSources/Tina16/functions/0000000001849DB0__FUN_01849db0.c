/* Ghidra address: 01849db0 */
/* Ghidra symbol: FUN_01849db0 */


longlong FUN_01849db0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_38 = 0;
  FUN_01847460(local_res8,0,param_3,4);
  *(undefined8 *)(local_res8 + 0xb8) = param_4;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

