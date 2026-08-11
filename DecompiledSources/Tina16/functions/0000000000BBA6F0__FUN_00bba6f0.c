/* Ghidra address: 00bba6f0 */
/* Ghidra symbol: FUN_00bba6f0 */


longlong FUN_00bba6f0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar2 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  FUN_00410e60(local_res8,0);
  uVar3 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(local_res8 + 8) = uVar3;
  FUN_005fcd80(uVar3,L"Courier New");
  FUN_005fce30(*(undefined8 *)(local_res8 + 8),8);
  FUN_005fce70(*(undefined8 *)(local_res8 + 8),0);
  *(undefined1 *)(local_res8 + 0x4b) = 1;
  lVar1 = *(longlong *)(local_res8 + 8);
  *(longlong *)(lVar1 + 0x10) = local_res8;
  *(code **)(lVar1 + 8) = FUN_00bbace0;
  *(undefined4 *)(local_res8 + 0x10) = 0xff00000f;
  *(undefined1 *)(local_res8 + 0x4a) = 1;
  *(undefined4 *)(local_res8 + 0x18) = 0x1e;
  *(undefined4 *)(local_res8 + 0x28) = 0x10;
  *(undefined4 *)(local_res8 + 0x20) = 4;
  *(undefined4 *)(local_res8 + 0x50) = 4;
  *(undefined4 *)(local_res8 + 0x2c) = 2;
  *(undefined4 *)(local_res8 + 0x30) = 2;
  *(undefined4 *)(local_res8 + 0x14) = 0xff000005;
  *(undefined1 *)(local_res8 + 0x54) = 1;
  *(undefined4 *)(local_res8 + 0x58) = 1;
  *(undefined1 *)(local_res8 + 0x25) = 0;
  *(undefined1 *)(local_res8 + 0x5c) = 0;
  *(undefined4 *)(local_res8 + 0x60) = 0xff000005;
  *(undefined4 *)(local_res8 + 100) = 0xff00000f;
  *(undefined4 *)(local_res8 + 0x68) = 0x30;
  *(undefined1 *)(local_res8 + 0x1d) = 0;
  *(undefined4 *)(local_res8 + 0x6c) = 4;
  *(undefined4 *)(local_res8 + 0x70) = 0xffff;
  *(undefined4 *)(local_res8 + 0x74) = 0xff00;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

