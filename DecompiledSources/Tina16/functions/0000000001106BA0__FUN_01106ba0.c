/* Ghidra address: 01106ba0 */
/* Ghidra symbol: FUN_01106ba0 */


longlong FUN_01106ba0(longlong param_1,char param_2)

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
  FUN_00414480(local_res8 + 8);
  *(undefined1 *)(local_res8 + 0x11) = 0;
  *(undefined1 *)(local_res8 + 0x10) = 1;
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined8 *)(local_res8 + 0x20) = 0;
  *(undefined1 *)(local_res8 + 0x28) = 0;
  *(undefined1 *)(local_res8 + 0x29) = 0;
  *(undefined1 *)(local_res8 + 0x2a) = 0;
  *(undefined1 *)(local_res8 + 0x2b) = 0;
  *(undefined1 *)(local_res8 + 0x2c) = 1;
  *(undefined2 *)(local_res8 + 0x2e) = 0xffff;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

