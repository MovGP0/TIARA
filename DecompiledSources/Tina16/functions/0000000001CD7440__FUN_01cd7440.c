/* Ghidra address: 01cd7440 */
/* Ghidra symbol: FUN_01cd7440 */


void FUN_01cd7440(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 local_res10 [3];
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
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
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
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_58 = 0;
  local_50 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar2 = FUN_01ada080(*(undefined8 *)(param_1 + 0x60));
  if ((cVar2 != '\0') && (0 < *(int *)(*(longlong *)(param_1 + 0xf8) + 0x10))) {
    uVar6 = FUN_004aeac0(*(longlong *)(param_1 + 0xf8),0);
    uVar4 = FUN_01ae9510(*(undefined8 *)(param_1 + 0x60),0,uVar6);
    FUN_01ae94a0(*(undefined8 *)(param_1 + 0x60),&local_20);
    FUN_01cd6e90(param_1,&local_50);
    FUN_01ce7c10(&local_48,local_50);
    FUN_004168e0(&local_58,local_48);
    FUN_00b0cea0(local_40,local_58,0xfde9);
    FUN_004155b0(local_40,&DAT_01cd7cc4);
    FUN_00416880(&local_28,local_40[0]);
    cVar2 = FUN_01cd6670(param_1);
    if (cVar2 == '\0') {
      FUN_0043f750(&local_60,uVar4);
      FUN_00416ba0(&local_30,&DAT_01cd7cd4,local_60);
    }
    else {
      uVar6 = FUN_01cd6670(param_1);
      if ((byte)uVar6 < 8) {
        bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << ((byte)uVar6 & 0x1f) & 6U) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        FUN_0043f750(&local_68,uVar4);
        FUN_00416ba0(&local_30,&DAT_01cd7ce8,local_68);
      }
      else {
        FUN_00414b50(&local_30,&DAT_01cd7cfc);
      }
    }
    iVar5 = FUN_00416db0(local_30,&DAT_01cd7cfc);
    if (iVar5 != 0) {
      plVar7 = (longlong *)FUN_01ae9310(*(undefined8 *)(param_1 + 0x60),local_res10[0],0);
      FUN_00416cd0(&local_70,3,local_28,L"scale",local_30);
      uVar3 = (**(code **)(*plVar7 + 0x20))
                        (plVar7,local_20,local_70,*(undefined1 *)(param_1 + 0x70));
      *(undefined1 *)(param_1 + 0x70) = uVar3;
      FUN_01cd6800();
      lVar1 = *(longlong *)(param_1 + 0x98);
      FUN_00416cd0(&local_78,3,local_28,L"color",local_30);
      uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,local_20,local_78,*(undefined4 *)(lVar1 + 0x28));
      FUN_005fc860(lVar1,uVar4);
      FUN_00416cd0(&local_80,3,local_28,L"color",local_30);
      cVar2 = (**(code **)(*plVar7 + 0xd0))(plVar7,local_20,local_80);
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x110) + 0x28))
                  (*(longlong **)(param_1 + 0x110),L"main",L"color",
                   *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x28));
      }
      FUN_00416cd0(&local_88,3,local_28,&DAT_01cd7d54,local_30);
      uVar6 = (**(code **)(*plVar7 + 0x58))
                        (plVar7,local_20,local_88,*(undefined8 *)(param_1 + 0xb8));
      *(undefined8 *)(param_1 + 0xb8) = uVar6;
      FUN_00416cd0(&local_90,3,local_28,&DAT_01cd7d54,local_30);
      cVar2 = (**(code **)(*plVar7 + 0xd0))(plVar7,local_20,local_90);
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x110) + 0x80))
                  (*(longlong **)(param_1 + 0x110),L"main",&DAT_01cd7d54,
                   *(undefined8 *)(param_1 + 0xb8));
      }
      FUN_00416cd0(&local_98,3,local_28,&DAT_01cd7d68,local_30);
      uVar6 = (**(code **)(*plVar7 + 0x58))
                        (plVar7,local_20,local_98,*(undefined8 *)(param_1 + 0xc0));
      *(undefined8 *)(param_1 + 0xc0) = uVar6;
      FUN_00416cd0(&local_a0,3,local_28,&DAT_01cd7d68,local_30);
      cVar2 = (**(code **)(*plVar7 + 0xd0))(plVar7,local_20,local_a0);
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x110) + 0x80))
                  (*(longlong **)(param_1 + 0x110),L"main",&DAT_01cd7d68,
                   *(undefined8 *)(param_1 + 0xc0));
      }
      FUN_00416cd0(&local_a8,3,local_28,L"divs",local_30);
      uVar4 = (**(code **)(*plVar7 + 0x20))
                        (plVar7,local_20,local_a8,*(undefined4 *)(param_1 + 0x74));
      FUN_01cd6740(param_1,uVar4);
      FUN_00416cd0(&local_b0,3,local_28,L"divs",local_30);
      cVar2 = (**(code **)(*plVar7 + 0xd0))(plVar7,local_20,local_b0);
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x110) + 0x28))
                  (*(longlong **)(param_1 + 0x110),L"main",L"divs",*(undefined4 *)(param_1 + 0x74));
      }
      FUN_00416cd0(&local_b8,3,local_28,L"precision",local_30);
      uVar4 = (**(code **)(*plVar7 + 0x20))
                        (plVar7,local_20,local_b8,*(undefined4 *)(param_1 + 0x90));
      *(undefined4 *)(param_1 + 0x90) = uVar4;
      FUN_00416cd0(&local_c0,3,local_28,L"precision",local_30);
      cVar2 = (**(code **)(*plVar7 + 0xd0))(plVar7,local_20,local_c0);
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x110) + 0x28))
                  (*(longlong **)(param_1 + 0x110),L"main",L"precision",
                   *(undefined4 *)(param_1 + 0x90));
      }
      FUN_00416cd0(&local_c8,3,local_28,L"nformat",local_30);
      uVar3 = (**(code **)(*plVar7 + 0x20))
                        (plVar7,local_20,local_c8,*(undefined1 *)(param_1 + 0x80));
      *(undefined1 *)(param_1 + 0x80) = uVar3;
      FUN_00416cd0(&local_d0,3,local_28,L"nformat",local_30);
      cVar2 = (**(code **)(*plVar7 + 0xd0))(plVar7,local_20,local_d0);
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x110) + 0x28))
                  (*(longlong **)(param_1 + 0x110),L"main",L"nformat",
                   *(undefined1 *)(param_1 + 0x80));
      }
      FUN_00410f20(plVar7);
    }
  }
  FUN_00414560(&local_d0,0xf);
  FUN_00414520(&local_58);
  FUN_00414560(&local_50,2);
  FUN_004144d0(local_40);
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res10);
  return;
}

