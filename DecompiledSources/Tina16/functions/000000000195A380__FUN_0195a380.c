/* Ghidra address: 0195a380 */
/* Ghidra symbol: FUN_0195a380 */


longlong FUN_0195a380(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_01953f80(local_res8,0,param_3);
  *(byte *)(local_res8 + 0xd0) = *(byte *)(local_res8 + 0xd0) | 4;
  *(undefined1 *)(local_res8 + 0x1a0) = 0;
  *(undefined1 *)(local_res8 + 0x21a) = 1;
  uVar2 = FUN_01958b10(&PTR_FUN_01921868,1);
  *(undefined8 *)(local_res8 + 0x1c0) = uVar2;
  uVar2 = FUN_01956770(&PTR_FUN_01920040,1);
  *(undefined8 *)(local_res8 + 0x210) = uVar2;
  uVar2 = FUN_01956000(&PTR_FUN_01920e40,1);
  *(undefined8 *)(local_res8 + 0x208) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_019466e0,1);
  *(undefined8 *)(local_res8 + 0x290) = uVar2;
  *(undefined1 *)(local_res8 + 0x1c8) = 1;
  *(undefined1 *)(local_res8 + 0x200) = 0;
  *(undefined1 *)(local_res8 + 0x218) = 7;
  *(undefined1 *)(local_res8 + 0x219) = 0;
  *(undefined1 *)(local_res8 + 0x298) = 0;
  *(undefined1 *)(local_res8 + 0x299) = 0;
  *(undefined8 *)(local_res8 + 0x268) = 0x3ff0000000000000;
  *(undefined8 *)(local_res8 + 0x270) = 0x3ff0000000000000;
  *(undefined8 *)(local_res8 + 0x2a0) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

