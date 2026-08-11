/* Ghidra address: 01b0ff70 */
/* Ghidra symbol: FUN_01b0ff70 */


longlong FUN_01b0ff70(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     longlong param_5)

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
  FUN_01b0fbb0(local_res8,0,param_3,param_4);
  *(longlong *)(local_res8 + 0x70) = param_5;
  *(undefined8 *)(local_res8 + 0x40) = *(undefined8 *)(param_5 + 0x28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

