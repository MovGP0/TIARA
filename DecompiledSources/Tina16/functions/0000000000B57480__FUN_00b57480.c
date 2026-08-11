/* Ghidra address: 00b57480 */
/* Ghidra symbol: FUN_00b57480 */


longlong FUN_00b57480(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  *(undefined8 *)(local_res8 + 8) = param_3;
  *(undefined1 *)(local_res8 + 0x28) = 0;
  *(undefined1 *)(local_res8 + 0x29) = 1;
  *(undefined2 *)(local_res8 + 0x2a) = 100;
  *(undefined2 *)(local_res8 + 0x2c) = 0xffff;
  *(undefined2 *)(local_res8 + 0x2e) = 1;
  *(undefined2 *)(local_res8 + 0x30) = 1;
  *(undefined1 *)(local_res8 + 0x32) = 0;
  *(undefined1 *)(local_res8 + 0x33) = 1;
  *(undefined8 *)(local_res8 + 0x38) = 0x3fe0000000000000;
  *(undefined8 *)(local_res8 + 0x40) = 0x3fe0000000000000;
  *(undefined8 *)(local_res8 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)(local_res8 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)(local_res8 + 0x58) = 0x3fe999999999999a;
  *(undefined8 *)(local_res8 + 0x60) = 0x3fe999999999999a;
  *(undefined1 *)(local_res8 + 0x68) = 0;
  *(undefined1 *)(local_res8 + 0x69) = 0;
  *(undefined1 *)(local_res8 + 0x6a) = 0;
  *(undefined1 *)(local_res8 + 0x6b) = 0;
  *(undefined1 *)(local_res8 + 0x6c) = 0;
  *(undefined1 *)(local_res8 + 0x6d) = 0;
  FUN_00414520(local_res8 + 0x70);
  FUN_00414520(local_res8 + 0x80);
  FUN_00414520(local_res8 + 0x78);
  FUN_00414520(local_res8 + 0x88);
  FUN_00414520(local_res8 + 0x98);
  FUN_00414520(local_res8 + 0x90);
  *(undefined1 *)(local_res8 + 0xa0) = 0;
  *(undefined1 *)(local_res8 + 0xa1) = 0;
  uVar2 = FUN_00b54080(&DAT_00b48580,1,param_3);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  *(undefined4 *)(local_res8 + 0x18) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x1c) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x20) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x24) = 0xffffffff;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

