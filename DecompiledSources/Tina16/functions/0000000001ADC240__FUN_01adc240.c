/* Ghidra address: 01adc240 */
/* Ghidra symbol: FUN_01adc240 */


void FUN_01adc240(longlong param_1,byte param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined8 local_res18 [2];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150 [2];
  undefined1 local_140 [40];
  undefined1 local_118 [40];
  undefined1 local_f0 [40];
  undefined1 local_c8 [40];
  undefined1 local_a0 [48];
  undefined1 local_70 [48];
  undefined8 local_40 [2];
  
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_168 = 0;
  local_170 = 0;
  local_178 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150[0] = 0;
  local_40[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00417580(local_70,&DAT_00ea5ae8);
  FUN_00417580(local_a0,&DAT_00ea5ae8);
  FUN_00417580(local_c8,&DAT_00ea5f80);
  FUN_00417580(local_f0,&DAT_00ea5f80);
  FUN_00417580(local_118,&DAT_00ea5f80);
  FUN_00417580(local_140,&DAT_00ea5f80);
  plVar4 = (longlong *)FUN_01ae9310(param_1,local_res18[0],0);
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_01ae94a0(param_1,local_40);
  if (param_2 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4,local_40[0]);
  }
  else {
    (**(code **)(*plVar4 + 0x90))(plVar4,local_40[0],plVar5);
    iVar2 = (**(code **)(*plVar5 + 0x28))();
    iVar9 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_00ea7a10(local_c8,L"^CS\\.[0-9]\\.[XY]Axis",0x80);
        (**(code **)(*plVar5 + 0x18))(plVar5,local_150,iVar9);
        FUN_00ea82d0(local_c8,local_70,local_150[0]);
        FUN_00ea7a10(local_f0,L"min$|max$|divs$",0x80);
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_158,iVar9);
        FUN_00ea82d0(local_f0,local_a0,local_158);
        if ((((param_2 & 1) != 0) && (cVar1 = FUN_00ea74f0(local_70), cVar1 != '\0')) &&
           (cVar1 = FUN_00ea74f0(local_a0), cVar1 != '\0')) {
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_160,iVar9);
          (**(code **)(*plVar4 + 0xc0))(plVar4,local_40[0],local_160);
        }
        iVar9 = iVar9 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_01ae94a0(param_1,&local_168);
  FUN_01adc190(&local_178,*(undefined8 *)(param_1 + 0x68));
  FUN_01abd640(&local_170,local_178);
  FUN_00416cd0(local_40,3,local_168,&DAT_01adca40,local_170);
  if (param_2 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4,local_40[0]);
  }
  else {
    (**(code **)(*plVar4 + 0x90))(plVar4,local_40[0],plVar5);
    iVar2 = (**(code **)(*plVar5 + 0x28))();
    iVar9 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_00ea7a10(local_118,L"^CS\\.[0-9]\\.[XY]Axis",0x80);
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_180,iVar9);
        FUN_00ea82d0(local_118,local_70,local_180);
        FUN_00ea7a10(local_140,L"min$|max$|divs$",0x80);
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_188,iVar9);
        FUN_00ea82d0(local_140,local_a0,local_188);
        if ((((param_2 & 1) != 0) && (cVar1 = FUN_00ea74f0(local_70), cVar1 != '\0')) &&
           (cVar1 = FUN_00ea74f0(local_a0), cVar1 != '\0')) {
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_190,iVar9);
          (**(code **)(*plVar4 + 0xc0))(plVar4,local_40[0],local_190);
        }
        iVar9 = iVar9 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00410f20(plVar5);
  if ((param_2 == 0) || ((param_2 & 2) != 0)) {
    FUN_01ae94a0(param_1,&local_198);
    FUN_00416ba0(local_40,local_198,L"_IPR");
    (**(code **)(*plVar4 + 0xb8))(plVar4,local_40[0]);
    FUN_01ae94a0(param_1,&local_1a0);
    FUN_00416ba0(local_40,local_1a0,L"_XYPlot");
    (**(code **)(*plVar4 + 0xb8))(plVar4,local_40[0]);
  }
  FUN_01ae9240(param_1,plVar4,local_res18[0]);
  FUN_00410f20(plVar4);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))();
  iVar9 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar9);
      lVar7 = FUN_004113f0(uVar6,&DAT_01cdd500);
      iVar3 = (**(code **)(**(longlong **)(lVar7 + 0x70) + 0x28))();
      iVar10 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar8 = (**(code **)(**(longlong **)(lVar7 + 0x70) + 0x30))
                            (*(longlong **)(lVar7 + 0x70),iVar10);
          FUN_005dce70(*(undefined8 *)(lVar8 + 0x110));
          iVar10 = iVar10 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = (**(code **)(**(longlong **)(lVar7 + 0x78) + 0x28))();
      iVar10 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar8 = (**(code **)(**(longlong **)(lVar7 + 0x78) + 0x30))
                            (*(longlong **)(lVar7 + 0x78),iVar10);
          FUN_005dce70(*(undefined8 *)(lVar8 + 0x110));
          iVar10 = iVar10 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x28))();
      iVar10 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar6 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                            (*(longlong **)(lVar7 + 0x80),iVar10);
          cVar1 = FUN_004113d0(uVar6,&PTR_FUN_01aae560);
          if (cVar1 == '\0') {
            lVar8 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                              (*(longlong **)(lVar7 + 0x80),iVar10);
            FUN_005dce70(*(undefined8 *)(lVar8 + 0x68));
          }
          else {
            lVar8 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                              (*(longlong **)(lVar7 + 0x80),iVar10);
            FUN_005dce70(*(undefined8 *)(lVar8 + 0xa0));
          }
          iVar10 = iVar10 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar9 = iVar9 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_1a0,0xb);
  FUN_00417840(local_140,&DAT_00ea5f80,4);
  FUN_00417840(local_a0,&DAT_00ea5ae8,2);
  FUN_00414480(local_40);
  FUN_00414480(local_res18);
  return;
}

