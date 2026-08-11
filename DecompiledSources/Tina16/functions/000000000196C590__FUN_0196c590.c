/* Ghidra address: 0196c590 */
/* Ghidra symbol: FUN_0196c590 */


longlong FUN_0196c590(longlong param_1,char param_2)

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
  FUN_0196c760(local_res8);
  *(undefined1 *)(local_res8 + 8) = 1;
  *(undefined4 *)(local_res8 + 10) = 0x28fff;
  *(undefined1 *)(local_res8 + 0xe) = 1;
  *(undefined1 *)(local_res8 + 0xf) = 1;
  *(undefined1 *)(local_res8 + 0x10) = 0;
  *(undefined1 *)(local_res8 + 0x11) = 1;
  *(undefined4 *)(local_res8 + 0x18) = 0x32;
  *(undefined1 *)(local_res8 + 0x1c) = 0;
  *(undefined8 *)(local_res8 + 0x20) = 0x3ff0000000000000;
  *(undefined1 *)(local_res8 + 0x28) = 0;
  *(undefined1 *)(local_res8 + 0x29) = 0;
  *(undefined1 *)(local_res8 + 9) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

