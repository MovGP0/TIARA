/* Ghidra address: 007f9bd0 */
/* Ghidra symbol: FUN_007f9bd0 */


longlong FUN_007f9bd0(longlong param_1,char param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8);
  *(undefined8 *)(local_res8 + 8) = param_3;
  *(undefined1 *)(local_res8 + 0x20) = param_4;
  *(undefined2 *)(local_res8 + 0x12) = 0x50;
  *(undefined2 *)(local_res8 + 0x10) = 8;
  *(undefined1 *)(local_res8 + 0x24) = 1;
  *(undefined4 *)(local_res8 + 0x28) = 10;
  *(undefined4 *)(local_res8 + 0x48) = 4;
  *(undefined4 *)(local_res8 + 0x44) = 0xc;
  *(undefined4 *)(local_res8 + 0x30) = 0xff000014;
  *(undefined1 *)(local_res8 + 0x34) = 1;
  *(undefined1 *)(local_res8 + 0x4c) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8,0);
  }
  return local_res8;
}

