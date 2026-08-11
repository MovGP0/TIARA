/* Ghidra address: 00d75900 */
/* Ghidra symbol: FUN_00d75900 */


longlong FUN_00d75900(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_004d22d0(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0xe0) = 1;
  *(undefined1 *)(local_res8 + 0x8c) = 1;
  *(undefined1 *)(local_res8 + 0xfb) = 0;
  *(undefined4 *)(local_res8 + 0x114) = 0xffffff;
  uVar2 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(local_res8 + 0x118) = uVar2;
  FUN_005fcd80(uVar2,L"Tahoma");
  FUN_005fce30(*(undefined8 *)(local_res8 + 0x118),8);
  *(undefined1 *)(local_res8 + 0xc0) = 3;
  *(undefined1 *)(local_res8 + 0xf5) = 1;
  *(undefined4 *)(local_res8 + 0xfc) = 0;
  *(undefined1 *)(local_res8 + 0x100) = 0;
  FUN_00414480(local_res8 + 0x108);
  *(undefined1 *)(local_res8 + 0x110) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

