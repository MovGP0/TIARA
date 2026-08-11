/* Ghidra address: 00c735d0 */
/* Ghidra symbol: FUN_00c735d0 */


longlong * FUN_00c735d0(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  lVar2 = FUN_00c72150(&DAT_00c71a00,1);
  local_res8[0xa5] = lVar2;
  lVar2 = local_res8[0xa5];
  *(longlong **)(lVar2 + 0x38) = local_res8;
  *(code **)(lVar2 + 0x30) = FUN_00c741d0;
  FUN_00687cb0(local_res8,0,param_3);
  (**(code **)(*local_res8 + 0x148))(local_res8,0);
  lVar2 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
  local_res8[0xa4] = lVar2;
  *(undefined1 *)(local_res8 + 0xa6) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x531) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x534) = 4;
  *(undefined4 *)(local_res8 + 0xa7) = 0xffffffff;
  *(uint *)(local_res8 + 0x14) = *(uint *)(local_res8 + 0x14) | 0x4000;
  local_20 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060a8f0(local_20,PTR_IMAGE_DOS_HEADER_0200c280,L"DROPDOWNBUTTON");
  FUN_00c72390(local_res8[0xa5],local_20);
  local_res8[0xa8] = 0;
  *(undefined4 *)(local_res8 + 0xa9) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0xab) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x559) = 0;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

