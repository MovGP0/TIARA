/* Ghidra address: 00b09730 */
/* Ghidra symbol: FUN_00b09730 */


longlong FUN_00b09730(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_30;
  longlong *local_28;
  uint local_1c;
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar2 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_40;
  }
  local_40 = puVar2;
  FUN_0084d420(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0x644) = 0xffffffff;
  FUN_0064c650(local_res8,0);
  FUN_00848390(local_res8,0);
  FUN_0064e030(local_res8,0xff00000f);
  *(undefined1 *)(local_res8 + 0x524) = 0;
  FUN_008485d0(local_res8,0xf);
  FUN_005fcd80(*(undefined8 *)(local_res8 + 0xb8),L"Tahoma");
  FUN_005fce30(*(undefined8 *)(local_res8 + 0xb8),8);
  FUN_005fce70(*(undefined8 *)(local_res8 + 0xb8),0);
  FUN_00848930(local_res8,0);
  FUN_00848990(local_res8,0x4080);
  FUN_0064e0c0(local_res8,0);
  plVar3 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(longlong **)(local_res8 + 0x628) = plVar3;
  (**(code **)(*plVar3 + 0x88))(plVar3,8);
  (**(code **)(**(longlong **)(local_res8 + 0x628) + 0x70))(*(longlong **)(local_res8 + 0x628),8);
  local_1c = 0;
  do {
    local_28 = (longlong *)FUN_00609e10(*(undefined8 *)(local_res8 + 0x628));
    if ((local_1c & 1) == 0) {
      FUN_005fd4e0(local_28[0xf],0xff00000f);
    }
    else {
      FUN_005fd4e0(local_28[0xf],0xff000010);
    }
    (**(code **)(*local_28 + 200))(local_28,local_1c,0);
    (**(code **)(*local_28 + 0xc0))(local_28,local_1c);
    local_1c = local_1c + 1;
  } while (local_1c != 8);
  if ((*(ushort *)(local_res8 + 0x34) & 0x10) == 0) {
    uVar4 = FUN_00b07440(&PTR_FUN_00b06d28,1,local_res8);
    *(undefined8 *)(local_res8 + 0x618) = uVar4;
    uVar4 = FUN_00b06b00(&PTR_FUN_00b05560,1,local_res8);
    *(undefined8 *)(local_res8 + 0x620) = uVar4;
    FUN_00654980(local_res8,*(undefined8 *)(local_res8 + 0x618));
    FUN_00654980(local_res8,*(undefined8 *)(local_res8 + 0x620));
    FUN_0064dbe0(*(undefined8 *)(local_res8 + 0x618),0);
    FUN_0064dbe0(*(undefined8 *)(local_res8 + 0x620),0);
    local_30 = *(longlong **)(local_res8 + 0x620);
    (**(code **)(*local_30 + 0x50))(local_30,L"FCheckBox");
    FUN_0060a8f0(local_30[0x95],PTR_IMAGE_DOS_HEADER_0200c280,L"RXSTICK");
    FUN_0064cc50(local_30,0xc);
    FUN_0064cbf0(local_30,0xc);
    lVar1 = *(longlong *)(local_res8 + 0x618);
    *(longlong *)(lVar1 + 0x4b0) = local_res8;
    *(code **)(lVar1 + 0x4a8) = FUN_00b0a960;
  }
  *(undefined4 *)(local_res8 + 0x63c) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x640) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0x669) = 1;
  uVar4 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(local_res8 + 0x630) = uVar4;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

