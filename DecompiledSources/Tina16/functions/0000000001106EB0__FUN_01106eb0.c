/* Ghidra address: 01106eb0 */
/* Ghidra symbol: FUN_01106eb0 */


longlong FUN_01106eb0(longlong param_1,char param_2)

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
  FUN_01106ba0(local_res8,0);
  *(undefined1 *)(local_res8 + 0x2a) = 0;
  *(undefined4 *)(local_res8 + 0x80) = 0;
  *(undefined1 *)(local_res8 + 0x38) = 0;
  *(undefined8 *)(local_res8 + 0x50) = 0;
  *(undefined8 *)(local_res8 + 0x40) = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x48) = uVar2;
  FUN_004b67b0(uVar2,0);
  *(undefined8 *)(local_res8 + 0x58) = 0;
  *(undefined8 *)(local_res8 + 0x70) = 0;
  *(undefined8 *)(local_res8 + 0x68) = 0;
  *(undefined8 *)(local_res8 + 0x60) = 0;
  *(undefined8 *)(local_res8 + 0x78) = 0;
  *(undefined4 *)(local_res8 + 0x94) = 0;
  *(undefined8 *)(local_res8 + 0x98) = 0;
  *(undefined8 *)(local_res8 + 0xa8) = 0;
  *(undefined8 *)(local_res8 + 0xa0) = 0;
  *(undefined8 *)(local_res8 + 0xb0) = 0;
  *(undefined4 *)(local_res8 + 0xb8) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0xbc) = 0xffffffff;
  *(undefined8 *)(local_res8 + 0xd8) = 0;
  *(undefined2 *)(local_res8 + 0xe0) = 0;
  *(undefined1 *)(local_res8 + 0xe2) = 0;
  *(undefined8 *)(local_res8 + 0xe8) = 0;
  *(undefined8 *)(local_res8 + 0xf0) = 0x3ff0000000000000;
  *(undefined8 *)(local_res8 + 0xf8) = 0;
  *(undefined8 *)(local_res8 + 0x100) = 0x3ff0000000000000;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

