/* Ghidra address: 00f12e70 */
/* Ghidra symbol: FUN_00f12e70 */


longlong FUN_00f12e70(longlong param_1,char param_2)

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
  FUN_00f10f20(local_res8,0);
  FUN_005fd6d0(*(undefined8 *)(local_res8 + 0x60),2);
  FUN_005fd4e0(*(undefined8 *)(local_res8 + 0x60),0xff0000);
  FUN_005fd670(*(undefined8 *)(local_res8 + 0x60),0);
  *(undefined2 *)(local_res8 + 0x88) = 0xffff;
  FUN_00f13090(local_res8,0);
  *(undefined4 *)(local_res8 + 0x98) = 0x1e;
  *(undefined1 *)(local_res8 + 0x9c) = 0;
  *(undefined8 *)(local_res8 + 0xd8) = 0;
  *(undefined8 *)(local_res8 + 0xe0) = 0;
  *(undefined8 *)(local_res8 + 0xf0) = 0;
  *(undefined8 *)(local_res8 + 0xf8) = 0;
  *(undefined8 *)(local_res8 + 0xa8) = 0;
  *(undefined8 *)(local_res8 + 0xb0) = 0;
  *(undefined8 *)(local_res8 + 0xb8) = 0;
  *(undefined8 *)(local_res8 + 0xc0) = 0;
  uVar2 = FUN_00498310(0,0);
  *(undefined8 *)(local_res8 + 200) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

