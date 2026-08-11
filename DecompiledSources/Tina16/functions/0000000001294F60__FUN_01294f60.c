/* Ghidra address: 01294f60 */
/* Ghidra symbol: FUN_01294f60 */


void FUN_01294f60(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong *local_res8;
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined4 local_60;
  int local_5c;
  longlong *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20 [2];
  
  local_70 = auStack_108;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_58 = (longlong *)0x0;
  local_20[0] = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_1);
  FUN_00414610(local_res18);
  if (local_res8 != (longlong *)0x0) {
    (**(code **)(*local_res8 + 0x100))(local_res8,&local_78,L"position");
    FUN_00416ba0(&local_40,local_78,&DAT_012957cc);
    if (local_res20 != 0) {
      local_5c = 0;
      if (local_40 != 0) {
        local_5c = *(int *)(local_40 + -4);
      }
      if (1 < local_5c) {
        local_4c = FUN_012421e0(&local_40);
        local_50 = FUN_012421e0(&local_40);
        *(undefined4 *)(local_res20 + 0xc) = local_4c;
        *(undefined4 *)(local_res20 + 0x10) = local_50;
      }
    }
    *(undefined1 *)(local_res10 + 0x98) = 0;
    *(undefined1 *)(*(longlong *)(local_res10 + 0x90) + 0x98) = 1;
    (**(code **)(*local_res8 + 0x100))(local_res8,&local_80,L"type");
    local_44 = FUN_0043fc50(local_80,1);
    if (local_44 < 1) {
      *(undefined1 *)(*(longlong *)(local_res10 + 0x90) + 0x98) = 0;
    }
    else {
      *(char *)(local_res10 + 0x98) = (char)local_44 + -1;
    }
    (**(code **)(*local_res8 + 0x100))(local_res8,&local_88,L"fontname");
    FUN_005fcd80(*(undefined8 *)(*(longlong *)(local_res10 + 0x90) + 0x80),local_88);
    (**(code **)(*local_res8 + 0x100))(local_res8,&local_90,L"fontsize");
    iVar5 = FUN_0043fc50(local_90,0xb);
    FUN_005fcc80(*(undefined8 *)(*(longlong *)(local_res10 + 0x90) + 0x80),-iVar5);
    FUN_005fce70(*(undefined8 *)(*(longlong *)(local_res10 + 0x90) + 0x80),0);
    (**(code **)(*local_res8 + 0x100))(local_res8,&local_98,L"bold");
    iVar5 = FUN_00416db0(local_98,&DAT_0129584c);
    if (iVar5 == 0) {
      uVar1 = *(undefined8 *)(*(longlong *)(local_res10 + 0x90) + 0x80);
      uVar6 = FUN_005fce60(uVar1);
      FUN_005fce70(uVar1,uVar6 | 1);
    }
    (**(code **)(*local_res8 + 0x100))(local_res8,&local_a0,L"italic");
    iVar5 = FUN_00416db0(local_a0,&DAT_0129584c);
    if (iVar5 == 0) {
      uVar1 = *(undefined8 *)(*(longlong *)(local_res10 + 0x90) + 0x80);
      uVar6 = FUN_005fce60(uVar1);
      FUN_005fce70(uVar1,uVar6 | 2);
    }
    (**(code **)(*local_res8 + 0x100))(local_res8,&local_a8,L"color");
    uVar7 = FUN_0043fd00(local_a8,0xff000000);
    uVar7 = FUN_01242280(uVar7);
    FUN_005fc860(*(undefined8 *)(*(longlong *)(local_res10 + 0x90) + 0x80),uVar7);
    (**(code **)(*local_res8 + 0x100))(local_res8,&local_28,L"fill");
    if (local_28 == 0) {
      *(undefined1 *)(local_res10 + 0x99) = 0;
    }
    else {
      *(undefined1 *)(local_res10 + 0x99) = 1;
      uVar7 = FUN_0043fcb0(local_28);
      uVar7 = FUN_01242280(uVar7);
      *(undefined4 *)(local_res10 + 0x9c) = uVar7;
    }
    (**(code **)(*local_res8 + 0x100))(local_res8,&local_b0,L"border");
    uVar3 = FUN_0043fc50(local_b0,0);
    *(undefined1 *)(local_res10 + 0xa0) = uVar3;
    (**(code **)(*local_res8 + 0x28))(local_res8,&local_58);
    while (local_58 != (longlong *)0x0) {
      cVar4 = (**(code **)(*local_58 + 0x48))(local_58);
      if (cVar4 == '\x04') {
        (**(code **)(*local_58 + 0xb8))(local_58,&local_b8);
        FUN_0043ea00(&local_30,local_b8);
        break;
      }
      (**(code **)(*local_58 + 0x38))(local_58,&local_c0);
      FUN_0041b840(&local_58,local_c0);
    }
    plVar2 = *(longlong **)(*(longlong *)(local_res10 + 0x90) + 0xa0);
    (**(code **)(*plVar2 + 0x60))(plVar2,local_30);
    if (*(char *)(local_res10 + 0x98) == '\x01') {
      FUN_010d0700(local_res8,*(undefined8 *)(*(longlong *)(local_res10 + 0x90) + 0xa0),1);
    }
    else if (*(char *)(local_res10 + 0x98) == '\x02') {
      plVar2 = *(longlong **)(*(longlong *)(local_res10 + 0x90) + 0xa0);
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      local_48 = FUN_004170c0(L"@ Configuration begin",local_30,1);
      local_48 = local_48 + -1;
      if (0 < local_48) {
        FUN_00414480(local_20);
        FUN_00414b50(local_20,local_30);
        local_60 = 0;
        if (local_20[0] != 0) {
          local_60 = *(undefined4 *)(local_20[0] + -4);
        }
        FUN_00416e20(local_20,local_48 + 1,local_60);
        FUN_00414b50(&local_30,local_20[0]);
        FUN_00414480(local_20);
        FUN_0043eb80(&local_c8,local_30);
        plVar2 = *(longlong **)(*(longlong *)(local_res10 + 0x90) + 0xa0);
        (**(code **)(*plVar2 + 0x60))(plVar2,local_c8);
      }
      (**(code **)(*local_res8 + 0x100))(local_res8,&local_38,L"hideParams");
      if (local_38 != 0) {
        local_e8 = L".@ Configuration end";
        FUN_00416cd0(&local_d0,3,L"@ Configuration begin",local_38);
        plVar2 = *(longlong **)(*(longlong *)(local_res10 + 0x90) + 0xa0);
        (**(code **)(*plVar2 + 0x78))(plVar2,local_d0);
      }
    }
  }
  FUN_00414560(&local_d0,2);
  FUN_0041b800(&local_c0);
  FUN_00414560(&local_b8,9);
  FUN_0041b800(&local_58);
  FUN_00414560(&local_40,5);
  FUN_0041b800(&local_res8);
  FUN_00414480(&local_res18);
  return;
}

