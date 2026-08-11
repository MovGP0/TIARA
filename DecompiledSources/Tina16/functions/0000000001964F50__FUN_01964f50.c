/* Ghidra address: 01964f50 */
/* Ghidra symbol: FUN_01964f50 */


longlong FUN_01964f50(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_0195e780(local_res8,0,param_3);
  *(byte *)(local_res8 + 0xd0) = *(byte *)(local_res8 + 0xd0) & 0xfb;
  *(undefined4 *)(local_res8 + 0x2d0) = 5;
  *(undefined4 *)(local_res8 + 0x2c8) = 0x14;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

