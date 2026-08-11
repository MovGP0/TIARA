/* Ghidra address: 01bd4300 */
/* Ghidra symbol: FUN_01bd4300 */


longlong FUN_01bd4300(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_01bd3d70(local_res8,0,param_3);
  FUN_0041ddd0(local_res8 + 0xf0,PTR_PTR_020027a8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

