/* Ghidra address: 00e13bd0 */
/* Ghidra symbol: FUN_00e13bd0 */


longlong FUN_00e13bd0(longlong param_1,char param_2)

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
  FUN_00410e60(local_res8,0);
  *(undefined1 *)(local_res8 + 8) = 0;
  *(undefined8 *)(local_res8 + 0x10) = 0;
  *(undefined4 *)(local_res8 + 0x18) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x1c) = 0;
  *(undefined4 *)(local_res8 + 0x20) = 0;
  FUN_00414480(local_res8 + 0x28);
  *(undefined4 *)(local_res8 + 0x24) = 0xffffffff;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

