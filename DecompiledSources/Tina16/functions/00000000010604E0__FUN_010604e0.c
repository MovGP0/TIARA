/* Ghidra address: 010604e0 */
/* Ghidra symbol: FUN_010604e0 */


void FUN_010604e0(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong *local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (param_3 == 1) {
    FUN_004b4b10(plVar5,*(undefined8 *)(param_1 + 0x40));
    FUN_00414b50(&local_38,*(undefined8 *)(param_1 + 0x18));
    local_b0 = *(longlong **)(param_1 + 0xf0);
  }
  else if (param_3 == 2) {
    FUN_004b4b10(plVar5,*(undefined8 *)(param_1 + 0x48));
    FUN_00414b50(&local_38,*(undefined8 *)(param_1 + 0x10));
    local_b0 = *(longlong **)(param_1 + 0xf8);
    FUN_00416ba0(&local_40,*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x38),L"main.cpp");
    plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    cVar2 = FUN_00440a20(local_40,1);
    if (cVar2 != '\0') {
      (**(code **)(*plVar6 + 0xd8))(plVar6,local_40);
      FUN_01b22620(plVar6,L"USBCON",&local_2c,0);
      if (-1 < local_2c) {
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_48,local_2c);
        FUN_00450070(&local_50,local_48,L"USBCON",L"USBCON_",1);
        FUN_00414b50(&local_48,local_50);
        (**(code **)(*plVar6 + 0x40))(plVar6,local_2c,local_48);
      }
      FUN_00416ba0(&local_58,*(undefined8 *)(param_1 + 0x70),L"\\main.cpp");
      (**(code **)(*plVar6 + 0x100))(plVar6,local_58);
    }
    FUN_00410f20(plVar6);
  }
  iVar3 = (**(code **)(*plVar5 + 0x28))();
  iVar7 = 0;
  if (-1 < iVar3 + -1) {
    do {
      FUN_00414480(param_1 + 0x78);
      (**(code **)(*local_b0 + 0x18))(local_b0,&local_60,iVar7);
      iVar4 = FUN_00416db0(local_60,L"<dir not found>");
      if (iVar4 != 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_68,iVar7);
        iVar4 = FUN_00416db0(local_68,L"main.cpp");
        if (iVar4 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_70,iVar7);
          FUN_00416cd0(&local_40,3,*(undefined8 *)(param_1 + 0x70),&DAT_01060b90,local_70);
        }
        else {
          (**(code **)(*local_b0 + 0x18))(local_b0,&local_78,iVar7);
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_80,iVar7);
          FUN_00416ba0(&local_40,local_78,local_80);
        }
        lVar1 = *(longlong *)(param_1 + 0x98);
        FUN_0105ff90(param_1,&local_88,local_40);
        FUN_00416cd0(param_1 + 0x78,6,&DAT_01060ba0,*(undefined8 *)(param_1 + 0x78),
                     *(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x30),local_88,
                     &DAT_01060ba0);
        FUN_00416cd0(&local_40,3,&DAT_01060ba0,local_40,&DAT_01060ba0);
        FUN_00416ad0(param_1 + 0x78,&DAT_01060bb0);
        FUN_0105e6d0(param_1,&local_90,local_38,&DAT_01060bc0,0x2c);
        FUN_00416ad0(param_1 + 0x78,local_90);
        FUN_00416ad0(param_1 + 0x78,&DAT_01060bb0);
        FUN_0105e6d0(param_1,&local_98,*(undefined8 *)(param_1 + 8),&PTR_LAB_01060bd0,0x2c);
        FUN_00416ad0(param_1 + 0x78,local_98);
        FUN_00416ad0(param_1 + 0x78,&DAT_01060bb0);
        FUN_0105e6d0(param_1,&local_a0,*(undefined8 *)(param_1 + 0x38),&PTR_DAT_01060be4,0x2c);
        FUN_00416ad0(param_1 + 0x78,local_a0);
        FUN_00416ad0(param_1 + 0x78,&DAT_01060bb0);
        FUN_00416cd0(param_1 + 0x78,3,*(undefined8 *)(param_1 + 0x78),local_40,&DAT_01060bb0);
        FUN_00416ad0(param_1 + 0x78,&DAT_01060bf8);
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_40,iVar7);
        FUN_00416cd0(param_1 + 0x78,4,*(undefined8 *)(param_1 + 0x78),L"Debug\\",local_40,
                     &LAB_01060c28);
        (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(param_1 + 0x78));
      }
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(plVar5);
  FUN_00414560(&local_a0,0xe);
  return;
}

