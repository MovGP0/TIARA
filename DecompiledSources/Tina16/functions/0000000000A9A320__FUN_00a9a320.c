/* Ghidra address: 00a9a320 */
/* Ghidra symbol: FUN_00a9a320 */


longlong FUN_00a9a320(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

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
  FUN_00a99690(local_res8,0,param_3,param_4);
  *(undefined8 *)(local_res8 + 0x140) = *(undefined8 *)(param_4 + 0x140);
  *(undefined8 *)(local_res8 + 0x148) = *(undefined8 *)(param_4 + 0x148);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

