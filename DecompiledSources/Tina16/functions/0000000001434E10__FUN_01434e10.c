/* Ghidra address: 01434e10 */
/* Ghidra symbol: FUN_01434e10 */


void FUN_01434e10(longlong *param_1,char param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  char local_195;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
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
  undefined8 local_80 [2];
  int local_6c;
  undefined4 local_68;
  int local_64;
  undefined8 local_5d;
  undefined8 uStack_55;
  undefined4 uStack_4d;
  undefined1 uStack_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_188 = 0;
  local_190 = 0;
  local_180 = 0;
  local_170 = 0;
  local_178 = 0;
  local_160 = 0;
  local_168 = 0;
  local_150 = 0;
  local_158 = 0;
  local_140 = 0;
  local_148 = 0;
  local_138 = (undefined8 *)0x0;
  local_130 = (undefined8 *)0x0;
  local_128 = 0;
  local_118 = 0;
  local_120 = 0;
  local_108 = 0;
  local_110 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_80[0] = 0;
  local_40 = 0;
  local_48 = 0;
  local_195 = param_2;
  if (param_2 == '\x05') {
    local_195 = FUN_01434da0(param_1);
  }
  plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_68 = *(undefined4 *)((longlong)param_1 + 0x18c);
  cVar2 = FUN_01d07320(param_1);
  local_64 = (int)cVar2;
  if (local_195 == '\x02') {
    uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
    uVar3 = FUN_01d39f20(uVar3);
    lVar7 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,uVar3);
    iVar4 = *(int *)(lVar7 + 0xaf);
    lVar7 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,uVar3);
    iVar10 = 1;
    for (uVar9 = (uint)*(byte *)(lVar7 + 0xb3); uVar9 != 0; uVar9 = uVar9 - 1) {
      puVar1 = (undefined8 *)
               (*(longlong *)PTR_DAT_02001338 + -0x15 + (longlong)(iVar4 + iVar10 + -1) * 0x15);
      uVar8 = *puVar1;
      uStack_55 = puVar1[1];
      uStack_4d = *(undefined4 *)(puVar1 + 2);
      uStack_49 = *(undefined1 *)((longlong)puVar1 + 0x14);
      local_5d._5_1_ = (char)((ulonglong)uVar8 >> 0x28);
      local_5d = uVar8;
      if (local_5d._5_1_ == '\0') {
        FUN_0043f750(local_80,iVar10);
        (**(code **)(*plVar6 + 0x78))(plVar6,local_80[0]);
      }
      else {
        FUN_004169a0(&local_88,(longlong)&local_5d + 5);
        (**(code **)(*plVar6 + 0x78))(plVar6,local_88);
      }
      iVar10 = iVar10 + 1;
    }
    FUN_01d03640(param_1,&local_98,*(undefined8 *)PTR_DAT_02001f18);
    FUN_00ec1890(&local_90,local_98,plVar6,param_1[0x9f],param_1 + 0x30,&local_68,&local_6c);
  }
  else if (local_195 == '\0') {
    FUN_01d07620(param_1,&local_30,&local_38);
    lVar7 = param_1[0x35];
    if (*(char *)(lVar7 + 0x110) == '\0') {
      iVar4 = (**(code **)(*param_1 + 0x1c8))();
      iVar10 = 0;
      if (-1 < iVar4 + -1) {
        do {
          (**(code **)(*param_1 + 0x298))(param_1,&local_a8,iVar10);
          FUN_0043e130(&local_a0,local_a8);
          (**(code **)(*plVar6 + 0x78))(plVar6,local_a0);
          iVar10 = iVar10 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else {
      iVar4 = (**(code **)(**(longlong **)(lVar7 + 0xc0) + 0x28))();
      iVar10 = 0;
      if (-1 < iVar4 + -1) {
        do {
          iVar5 = (**(code **)(**(longlong **)(lVar7 + 200) + 0x28))(*(longlong **)(lVar7 + 200));
          if (iVar10 < iVar5) {
            (**(code **)(**(longlong **)(lVar7 + 0xc0) + 0x18))
                      (*(longlong **)(lVar7 + 0xc0),&local_b0,iVar10);
            (**(code **)(**(longlong **)(lVar7 + 200) + 0x18))
                      (*(longlong **)(lVar7 + 200),&local_b8,iVar10);
            iVar5 = FUN_00416db0(local_b0,local_b8);
            if (iVar5 == 0) goto LAB_01435329;
            (**(code **)(**(longlong **)(lVar7 + 0xc0) + 0x18))
                      (*(longlong **)(lVar7 + 0xc0),&local_c8,iVar10);
            (**(code **)(**(longlong **)(lVar7 + 200) + 0x18))
                      (*(longlong **)(lVar7 + 200),&local_d0,iVar10);
            FUN_00416cd0(&local_c0,3,local_c8,&DAT_01435c00,local_d0);
            (**(code **)(*plVar6 + 0x78))(plVar6,local_c0);
          }
          else {
LAB_01435329:
            (**(code **)(**(longlong **)(lVar7 + 0xc0) + 0x18))
                      (*(longlong **)(lVar7 + 0xc0),&local_d8,iVar10);
            (**(code **)(*plVar6 + 0x78))(plVar6,local_d8);
          }
          iVar10 = iVar10 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    FUN_00ecd120(&local_e0,0,*(undefined8 *)(param_1[0x35] + 0x38),plVar6,local_38,param_1[0x9f],
                 local_30,param_1 + 0x30,&local_68,&local_64,&local_6c,0);
  }
  else if (local_195 == '\x01') {
    uVar8 = FUN_01cfd6a0(param_1);
    FUN_004169a0(&local_40,uVar8);
    iVar4 = FUN_004170c0(&LAB_01435c10,local_40,1);
    if (0 < iVar4) {
      FUN_00416e20(&local_40,1,2);
    }
    FUN_00ec1890(&local_e8,local_40,plVar6,param_1[0x9f],param_1 + 0x30,&local_68,&local_6c);
  }
  else if (local_195 == '\x03') {
    iVar4 = (**(code **)(*param_1 + 0x1c8))(param_1);
    iVar10 = 1;
    if (0 < iVar4) {
      do {
        (**(code **)(*param_1 + 0x298))(param_1,&local_f0,iVar10 + -1);
        if (local_f0 == 0) {
          FUN_0043f750(&local_f8,iVar10);
          (**(code **)(*plVar6 + 0x78))(plVar6,local_f8);
        }
        else {
          (**(code **)(*param_1 + 0x298))(param_1,&local_100,iVar10 + -1);
          (**(code **)(*plVar6 + 0x78))(plVar6,local_100);
        }
        iVar10 = iVar10 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
    cVar2 = FUN_01d42300(uVar3);
    if (cVar2 == '\0') {
      uVar8 = FUN_01cfd6a0(param_1);
      FUN_004169a0(&local_120,uVar8);
      FUN_00ec1890(&local_118,local_120,plVar6,param_1[0x9f],param_1 + 0x30,&local_68,&local_6c);
    }
    else {
      uVar8 = FUN_01cfd6a0(param_1);
      FUN_004169a0(&local_110,uVar8);
      FUN_00ec1890(&local_108,local_110,plVar6,param_1[0x9f],param_1 + 0x30,&local_68,&local_6c);
    }
  }
  else {
    FUN_01d07620(param_1,&local_30,&local_38);
    iVar4 = (**(code **)(*param_1 + 0x1c8))(param_1);
    iVar10 = 1;
    if (0 < iVar4) {
      do {
        (**(code **)(*param_1 + 0x298))(param_1,&local_128,iVar10 + -1);
        if (local_128 == 0) {
          FUN_0043f750(&local_130,iVar10);
          (**(code **)(*plVar6 + 0x78))(plVar6,local_130);
        }
        else {
          (**(code **)(*param_1 + 0x298))(param_1,&local_138,iVar10 + -1);
          (**(code **)(*plVar6 + 0x78))(plVar6,local_138);
        }
        iVar10 = iVar10 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
    cVar2 = FUN_01d421b0(uVar3);
    if (cVar2 == '\0') {
      uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
      cVar2 = FUN_01d42220(uVar3);
      if (cVar2 == '\0') {
        uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
        cVar2 = FUN_01d422d0(uVar3);
        if (cVar2 == '\0') {
          uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
          cVar2 = FUN_01d42370(uVar3);
          if (cVar2 == '\0') {
            cVar2 = FUN_01d04d40(param_1);
            if (cVar2 == '\0') {
              (**(code **)(*param_1 + 0x288))(param_1,&local_190);
              FUN_00ecd120(&local_188,4,local_190,plVar6,local_38,param_1[0x9f],local_30,
                           param_1 + 0x30,&local_68,&local_64,&local_6c,1);
            }
            else {
              FUN_00ecd120(&local_180,4,*(undefined8 *)(param_1[0x35] + 0x38),plVar6,local_38,
                           param_1[0x9f],local_30,param_1 + 0x30,&local_68,&local_64,&local_6c,0);
            }
          }
          else {
            uVar8 = FUN_01cfd6a0(param_1);
            FUN_004169a0(&local_178,uVar8);
            FUN_00ecd120(&local_170,5,local_178,plVar6,local_38,param_1[0x9f],local_30,
                         param_1 + 0x30,&local_68,&local_64,&local_6c,0);
          }
        }
        else {
          uVar8 = FUN_01cfd6a0(param_1);
          FUN_004169a0(&local_168,uVar8);
          FUN_00ecd120(&local_160,2,local_168,plVar6,local_38,param_1[0x9f],local_30,param_1 + 0x30,
                       &local_68,&local_64,&local_6c,0);
        }
      }
      else {
        uVar8 = FUN_01cfd6a0(param_1);
        FUN_004169a0(&local_158,uVar8);
        FUN_00ecd120(&local_150,1,local_158,plVar6,local_38,param_1[0x9f],local_30,param_1 + 0x30,
                     &local_68,&local_64,&local_6c,0);
      }
    }
    else {
      uVar8 = FUN_01cfd6a0(param_1);
      FUN_004169a0(&local_148,uVar8);
      FUN_00ecd120(&local_140,3,local_148,plVar6,local_38,param_1[0x9f],local_30,param_1 + 0x30,
                   &local_68,&local_64,&local_6c,0);
    }
    FUN_00410f20(local_30);
    FUN_00410f20(local_38);
  }
  *(undefined4 *)((longlong)param_1 + 0x18c) = local_68;
  FUN_01d07370(param_1,(undefined1)local_64);
  FUN_00410f20(plVar6);
  *PTR_DAT_02001800 = local_6c == 1;
  if (local_6c == 1) {
    (**(code **)(*(longlong *)param_1[0xa0] + 0x90))((longlong *)param_1[0xa0]);
  }
  FUN_00414560(&local_190,0x23);
  FUN_00414560(&local_48,2);
  return;
}

