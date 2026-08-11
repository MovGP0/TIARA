/* Ghidra address: 01b36bb0 */
/* Ghidra symbol: FUN_01b36bb0 */


longlong FUN_01b36bb0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  uint local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_0084d420(local_res8,0,param_3);
  *(undefined8 *)(local_res8 + 0x618) = 0;
  local_1c = *(uint *)(local_res8 + 0xa4) | 4;
  *(uint *)(local_res8 + 0xa4) = local_1c;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

