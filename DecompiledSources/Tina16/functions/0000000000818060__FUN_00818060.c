/* Ghidra address: 00818060 */
/* Ghidra symbol: FUN_00818060 */


longlong FUN_00818060(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  longlong lVar3;
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
  FUN_00786930(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x1b) = 0;
  *(undefined4 *)(local_res8 + 0x140) = 0;
  lVar3 = FUN_008199e0(local_res8);
  if ((*(byte *)(lVar3 + 0x2c8) & 2) != 0) {
    *(undefined1 *)(local_res8 + 0x22) = 1;
  }
  cVar2 = FUN_00818440(local_res8);
  if (cVar2 != '\0') {
    *(undefined1 *)(local_res8 + 0x24) = 1;
  }
  *(undefined8 *)(local_res8 + 0xa0) = 0;
  *(undefined8 *)(local_res8 + 0xc0) = 0;
  *(undefined8 *)(local_res8 + 0xe0) = 0;
  *(undefined8 *)(local_res8 + 0xd0) = 0;
  *(undefined8 *)(local_res8 + 0xb8) = 0;
  *(undefined8 *)(local_res8 + 200) = 0;
  *(undefined8 *)(local_res8 + 0x58) = 0;
  *(undefined1 *)(local_res8 + 0x118) = 0;
  *(undefined4 *)(local_res8 + 0x100) = 0;
  *(undefined4 *)(local_res8 + 0x104) = 0;
  *(undefined1 *)(local_res8 + 0xd8) = 0;
  *(undefined1 *)(local_res8 + 0xd9) = 0;
  *(undefined1 *)(local_res8 + 0x39) = 1;
  *(undefined1 *)(local_res8 + 0x70) = 0;
  *(undefined1 *)(local_res8 + 0x50) = 0;
  *(undefined8 *)(local_res8 + 0x110) = 0;
  *(undefined4 *)(local_res8 + 0xf8) = *(undefined4 *)(*(longlong *)(local_res8 + 0x10) + 0x90);
  *(undefined4 *)(local_res8 + 300) = *(undefined4 *)(*(longlong *)(local_res8 + 0x10) + 0x94);
  *(undefined4 *)(local_res8 + 0x130) = *(undefined4 *)(*(longlong *)(local_res8 + 0x10) + 0x98);
  *(undefined4 *)(local_res8 + 0x78) = *(undefined4 *)(*(longlong *)(local_res8 + 0x10) + 0x9c);
  *(undefined1 *)(local_res8 + 0xfc) = 1;
  *(undefined8 *)(local_res8 + 0x90) = 0;
  *(undefined8 *)(local_res8 + 0x98) = 0;
  *(undefined4 *)(local_res8 + 0x74) = 0;
  *(undefined4 *)(local_res8 + 0x108) = 0;
  *(undefined1 *)(local_res8 + 0x134) = 0;
  *(undefined1 *)(local_res8 + 0x135) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

