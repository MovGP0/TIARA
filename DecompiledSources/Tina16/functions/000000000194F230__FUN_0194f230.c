/* Ghidra address: 0194f230 */
/* Ghidra symbol: FUN_0194f230 */


longlong * FUN_0194f230(longlong *param_1,char param_2,longlong *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  cVar2 = FUN_004113d0(param_3,&PTR_FUN_01918c28);
  if (cVar2 == '\0') {
    FUN_004d22d0(local_res8,0,param_3);
  }
  else {
    uVar4 = (**(code **)(*param_3 + 0x118))(param_3);
    FUN_004d22d0(local_res8,0,uVar4);
  }
  *(undefined1 *)((longlong)local_res8 + 0xd2) = 0;
  *(undefined1 *)(local_res8 + 0x1a) = 2;
  FUN_00410ae0(*local_res8,local_res8 + 0x20);
  uVar3 = FUN_004170c0(L"Tfrx",local_res8[0x20],1);
  FUN_00416e20(local_res8 + 0x20,uVar3,4);
  uVar3 = FUN_004170c0(L"View",local_res8[0x20],1);
  FUN_00416e20(local_res8 + 0x20,uVar3,4);
  lVar5 = (**(code **)(*local_res8 + 0x88))(*local_res8);
  lVar5 = (**(code **)(lVar5 + -0x30))(lVar5);
  local_res8[0x10] = lVar5;
  FUN_00410e60(lVar5,0xff);
  lVar5 = local_res8[0x10];
  *(undefined1 *)(lVar5 + 0x28) = 0;
  *(longlong **)(lVar5 + 0x20) = local_res8;
  *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(*local_res8 + 0x120);
  lVar5 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_res8[0x11] = lVar5;
  lVar5 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  local_res8[0xf] = lVar5;
  local_20 = local_res8[0xf];
  *(undefined4 *)(local_20 + 0x2c) = DAT_01fb7de8;
  FUN_005fcd80(local_20,L"Arial");
  FUN_005fce30(local_20,10);
  FUN_005fc860(local_20,0);
  FUN_005fcfa0(local_20,DAT_01fb7e08);
  *(longlong **)(local_20 + 0x10) = local_res8;
  *(undefined8 *)(local_20 + 8) = *(undefined8 *)(*local_res8 + 0x100);
  *(undefined1 *)((longlong)local_res8 + 0xc5) = 1;
  (**(code **)(*local_res8 + 0xf0))(local_res8,1);
  if (cVar2 != '\0') {
    (**(code **)(*local_res8 + 0xc0))(local_res8,param_3);
  }
  local_res8[0x28] = 0;
  local_res8[0x12] = 0;
  *(undefined1 *)(local_res8 + 0x1c) = 3;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

