/* Ghidra address: 0104f660 */
/* Ghidra symbol: FUN_0104f660 */


void FUN_0104f660(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  undefined8 local_98;
  undefined8 local_90 [2];
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  local_90[0] = 0;
  local_98 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  PTR_DAT_02002068[1] = 0;
  plVar3 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  plVar4 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_00f63650(*(undefined8 *)(param_1 + 0x980),&local_74,&local_78);
  FUN_00f63690(*(undefined8 *)(param_1 + 0x980),&local_7c,&local_80);
  iVar8 = local_74 - local_7c;
  iVar9 = local_78 - local_80;
  (**(code **)(*plVar3 + 0x88))(plVar3,local_74 + 10);
  (**(code **)(*plVar3 + 0x70))(plVar3,local_78 + 10);
  (**(code **)(*plVar4 + 0x88))(plVar4,iVar8 + 10);
  (**(code **)(*plVar4 + 0x70))(plVar4,iVar9 + 10);
  uVar5 = FUN_00609e10(plVar3);
  FUN_00f653c0(*(undefined8 *)(param_1 + 0x980),uVar5);
  uVar5 = FUN_00609e10(plVar3);
  FUN_00f62b00(*(undefined8 *)(param_1 + 0x980),uVar5);
  FUN_00f653d0(*(undefined8 *)(param_1 + 0x980),L"Courier New",7);
  uVar5 = FUN_00f62a60(*(undefined8 *)(param_1 + 0x980));
  FUN_00f74f10(uVar5,8);
  FUN_00f63b50(*(undefined8 *)(param_1 + 0x980));
  local_48 = local_7c + -6;
  local_44 = local_80 + -6;
  local_40 = local_74 + 4;
  local_3c = local_78 + 4;
  local_58 = 0;
  local_54 = 0;
  local_50 = iVar8 + 9;
  local_4c = iVar9 + 9;
  uVar5 = FUN_00609e10(plVar4);
  uVar6 = FUN_00609e10(plVar3);
  FUN_005fead0(uVar5,&local_58,uVar6,&local_48);
  if (param_2 == *(int *)(param_1 + 0x91c)) {
    lVar1 = *(longlong *)(param_1 + 0x710);
    FUN_00414b50(&local_68,*(undefined8 *)(lVar1 + 0xe0));
    FUN_00414b50(&local_70,*(undefined8 *)(lVar1 + 0x100));
    FUN_00414ad0(lVar1 + 0xe0,L"JPEG (*.jpg)|*.jpg|Bitmap (*.bmp)|*.bmp");
    FUN_00414ad0(*(longlong *)(param_1 + 0x710) + 0x100,&DAT_0104fb0c);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0xa8))(*(longlong **)(param_1 + 0x710));
    if (cVar2 != '\0') {
      FUN_00724270(*(undefined8 *)(param_1 + 0x710),&local_60);
      FUN_00441a10(&local_98,local_60);
      FUN_0043e130(local_90,local_98);
      iVar8 = FUN_00416db0(local_90[0],L".BMP");
      if (iVar8 == 0) {
        (**(code **)(*plVar4 + 0xb0))(plVar4,local_60);
      }
      else {
        plVar7 = (longlong *)FUN_00a09e20(&PTR_FUN_00a09250,1);
        (**(code **)(*plVar7 + 0x10))(plVar7,plVar4);
        (**(code **)(*plVar7 + 0xb0))(plVar7,local_60);
        FUN_00410f20(plVar7);
      }
    }
    FUN_00414ad0(*(longlong *)(param_1 + 0x710) + 0xe0,local_68);
    FUN_00414ad0(*(longlong *)(param_1 + 0x710) + 0x100,local_70);
  }
  else {
    plVar7 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar7 + 0x10))(plVar7,plVar4);
  }
  FUN_00410f20(plVar3);
  FUN_00410f20(plVar4);
  PTR_DAT_02002068[1] = 1;
  FUN_00f653c0(*(undefined8 *)(param_1 + 0x980),
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x928) + 0x4d8) + 0x310));
  FUN_00f62b00(*(undefined8 *)(param_1 + 0x980),
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x928) + 0x4d8) + 0x310));
  FUN_00414560(&local_98,2);
  FUN_00414560(&local_70,3);
  return;
}

