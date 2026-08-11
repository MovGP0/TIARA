/* Ghidra address: 01c22c60 */
/* Ghidra symbol: FUN_01c22c60 */


longlong FUN_01c22c60(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_68 [40];
  code *local_40;
  longlong local_38;
  undefined1 *local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00660290(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x5c8) = 1;
  *(undefined1 *)(local_res8 + 0x5c9) = 0;
  *(undefined1 *)(local_res8 + 0x4d9) = 2;
  FUN_00414ad0(local_res8 + 0x5c0,L"Unconnected pins ( Drag the unconnected terminal to a pin. ):");
  *(undefined1 *)(local_res8 + 0x5b8) = 0;
  uVar2 = FUN_00416740(L"DRAG1");
  uVar2 = thunk_FUN_03978312(PTR_IMAGE_DOS_HEADER_0200c280,uVar2);
  FUN_00808990(*(undefined8 *)PTR_DAT_02005950,1,uVar2);
  uVar2 = FUN_00416740(L"DRAG2");
  uVar2 = thunk_FUN_03978312(PTR_IMAGE_DOS_HEADER_0200c280,uVar2);
  FUN_00808990(*(undefined8 *)PTR_DAT_02005950,2,uVar2);
  *(undefined4 *)(local_res8 + 0xa0) = 0x400cb;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x498) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x4a0) = uVar2;
  *(undefined1 *)(local_res8 + 0x4d8) = 0;
  *(undefined4 *)(local_res8 + 0x4a8) = 0;
  uVar2 = FUN_00a39860(&PTR_FUN_00a2f148,1);
  *(undefined8 *)(local_res8 + 0x4b0) = uVar2;
  FUN_00a3b840(uVar2,PTR_IMAGE_DOS_HEADER_0200c280,L"TARGET1");
  uVar2 = FUN_00a39860(&PTR_FUN_00a2f148,1);
  *(undefined8 *)(local_res8 + 0x4b8) = uVar2;
  FUN_00a3b840(uVar2,PTR_IMAGE_DOS_HEADER_0200c280,L"TARGET2");
  uVar2 = FUN_00a39860(&PTR_FUN_00a2f148,1);
  *(undefined8 *)(local_res8 + 0x4c0) = uVar2;
  FUN_00a3b840(uVar2,PTR_IMAGE_DOS_HEADER_0200c280,L"ARROW");
  uVar2 = FUN_00742bf0(&PTR_FUN_007334d8,1,local_res8);
  *(undefined8 *)(local_res8 + 0x4c8) = uVar2;
  FUN_00742ed0(uVar2,300);
  local_38 = local_res8;
  local_40 = FUN_01c25e00;
  FUN_00742ef0(*(undefined8 *)(local_res8 + 0x4c8),&local_40);
  FUN_00742eb0(*(undefined8 *)(local_res8 + 0x4c8),1);
  uVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(local_res8 + 0x4d0) = uVar2;
  *(undefined8 *)(local_res8 + 0x560) = 0x3ff0000000000000;
  local_20 = 0;
  uStack_1c = 0;
  *(undefined8 *)(local_res8 + 0x568) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

