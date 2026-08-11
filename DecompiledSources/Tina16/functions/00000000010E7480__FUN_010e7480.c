/* Ghidra address: 010e7480 */
/* Ghidra symbol: FUN_010e7480 */


longlong FUN_010e7480(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_010e6f30(local_res8,0,param_3,param_4);
  *(undefined8 *)(local_res8 + 0x130) = 0;
  *(undefined8 *)(local_res8 + 0x140) = 0;
  *(undefined1 *)(local_res8 + 0x138) = 0;
  *(undefined1 *)(local_res8 + 0x148) = 0;
  *(undefined4 *)(local_res8 + 0x14c) = 10;
  *(undefined4 *)(local_res8 + 0x150) = 10;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

