/* Ghidra address: 012da080 */
/* Ghidra symbol: FUN_012da080 */


void FUN_012da080(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_168 [32];
  wchar_t *local_148;
  undefined *local_140;
  undefined1 *local_138;
  undefined8 local_130;
  int local_128;
  int local_120;
  undefined8 local_118;
  longlong local_108;
  char *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  longlong *local_78;
  longlong local_70 [2];
  undefined8 *local_60;
  undefined8 local_58;
  wchar_t *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = (undefined8 *)0x0;
  local_c0 = 0;
  local_c8 = (undefined *)0x0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = (undefined8 *)0x0;
  local_78 = (longlong *)0x0;
  local_70[0] = 0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_50 = (wchar_t *)0x0;
  local_58 = 0;
  local_108 = param_1;
  local_30 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00bac3d0(&local_38);
  cVar1 = (**(code **)(*local_38 + 0x170))(local_38,*(undefined8 *)(local_108 + 0x38));
  if (cVar1 != '\0') {
    (**(code **)(*local_38 + 0x100))(local_38,local_70);
    if (local_70[0] != 0) {
      (**(code **)(*local_38 + 0x100))(local_38,&local_78);
      (**(code **)(*local_78 + 0xe8))(local_78,&local_40,L"/testbench/testcase");
      uVar2 = (**(code **)(*local_40 + 0x18))(local_40);
      *(undefined4 *)(local_108 + 0x6c) = uVar2;
      (**(code **)(*local_40 + 0x68))(local_40);
      (**(code **)(*local_40 + 0x70))(local_40,&local_80);
      FUN_0041b890(&local_48,local_80,&DAT_012dacf0);
      while (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x100))(local_48,&local_50,L"folder");
        iVar3 = FUN_00416db0(local_50,&DAT_012dad28);
        if (iVar3 == 0) {
          cVar1 = FUN_00440b00(*(undefined8 *)(local_108 + 0x48),1);
          FUN_00416ba0(&local_50,*(undefined8 *)(local_108 + 0x48),local_50);
        }
        else {
          local_148 = local_50;
          FUN_00416cd0(&local_88,3,*(undefined8 *)(local_108 + 0x48),&DAT_012dad28);
          cVar1 = FUN_00440b00(local_88,1);
          local_148 = local_50;
          local_140 = &DAT_012dad28;
          FUN_00416cd0(&local_50,4,*(undefined8 *)(local_108 + 0x48),&DAT_012dad28);
        }
        if (cVar1 != '\0') {
          (**(code **)(*local_48 + 0x100))(local_48,&local_58,L"circuit");
          local_148 = L".TSC";
          FUN_00416cd0(&local_90,3,local_50,local_58);
          cVar1 = FUN_00440a20(local_90,1);
          if (cVar1 == '\0') {
            local_148 = L".TSC";
            FUN_00416cd0(&local_58,3,local_50,local_58);
            local_148 = L".TSC";
            FUN_00416cd0(&local_a0,3,local_50,local_58);
            (**(code **)(**(longlong **)(local_108 + 0x20) + 0x80))
                      (*(longlong **)(local_108 + 0x20),local_a0,0);
            local_148 = (wchar_t *)0x0;
            FUN_012cec90(2,local_58,*(undefined8 *)(local_108 + 0x40),
                         *(undefined8 *)(local_108 + 0x38));
          }
          else {
            local_148 = L".TSC";
            FUN_00416cd0(&local_98,3,local_50,local_58);
            uVar5 = FUN_012da010(auStack_168,local_48);
            (**(code **)(**(longlong **)(local_108 + 0x20) + 0x80))
                      (*(longlong **)(local_108 + 0x20),local_98,uVar5);
          }
        }
        (**(code **)(*local_40 + 0x70))(local_40,&local_a8);
        FUN_0041b890(&local_48,local_a8,&DAT_012dacf0);
      }
      if (*(char *)(local_108 + 100) == '\0') {
        iVar3 = 0;
        while( true ) {
          iVar4 = (**(code **)(**(longlong **)(local_108 + 0x20) + 0x28))
                            (*(longlong **)(local_108 + 0x20));
          if ((iVar4 <= iVar3) || (*(char *)(local_108 + 0x62) != '\0')) break;
          lVar6 = (**(code **)(**(longlong **)(local_108 + 0x20) + 0x30))
                            (*(longlong **)(local_108 + 0x20),iVar3);
          if (lVar6 != 0) {
            uVar5 = (**(code **)(**(longlong **)(local_108 + 0x20) + 0x30))
                              (*(longlong **)(local_108 + 0x20),iVar3);
            FUN_0041b890(&local_b0,uVar5,&DAT_012dacf0);
            local_100 = (char *)FUN_012c2940(local_b0);
            uVar5 = (**(code **)(**(longlong **)(local_108 + 0x20) + 0x30))
                              (*(longlong **)(local_108 + 0x20),iVar3);
            FUN_012da030(auStack_168,uVar5);
            if (((*local_100 != '\0') || (local_100[1] != '\0')) || (local_100[2] != '\0')) {
              *PTR_DAT_02002ce0 = 0;
              (**(code **)(**(longlong **)(local_108 + 0x20) + 0x18))
                        (*(longlong **)(local_108 + 0x20),&local_b8,iVar3);
              local_148 = *(wchar_t **)(local_108 + 0x40);
              local_140 = *(undefined **)(local_108 + 0x38);
              local_138 = (undefined1 *)CONCAT71(local_138._1_7_,1);
              FUN_01c681b0(*(undefined8 *)PTR_DAT_02004e40,local_b8,0,1);
              FUN_0043f750(&local_c0,iVar3 + 1);
              uVar2 = (**(code **)(**(longlong **)(local_108 + 0x20) + 0x28))
                                (*(longlong **)(local_108 + 0x20));
              FUN_0043f750(&local_c8,uVar2);
              local_148 = L"/";
              local_140 = local_c8;
              local_138 = &LAB_012dad90;
              FUN_00416cd0(*(longlong *)PTR_DAT_02004e40 + 0x27d8,5,&DAT_012dad6c,local_c0);
              FUN_0064dd90(*(undefined8 *)PTR_DAT_02004e40,&local_d0);
              FUN_00416ad0(&local_d0,*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27d8));
              FUN_0064de00(*(undefined8 *)PTR_DAT_02004e40,local_d0);
              if (*PTR_DAT_02002ce0 == '\0') {
                (**(code **)(**(longlong **)(local_108 + 0x20) + 0x18))
                          (*(longlong **)(local_108 + 0x20),&local_d8,iVar3);
                local_148 = *(wchar_t **)(local_108 + 0x38);
                local_140 = *(undefined **)(local_108 + 0x48);
                local_138 = *(undefined1 **)(local_108 + 0x50);
                local_130 = CONCAT71(local_130._1_7_,*(undefined1 *)(local_108 + 0x65));
                local_120 = CONCAT31(local_120._1_3_,2);
                local_118 = 0;
                local_128 = iVar3 + 1;
                FUN_012d6bf0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2788),local_100,
                             local_d8,*(undefined8 *)(local_108 + 0x40));
                FUN_01c93f00(*(undefined8 *)PTR_DAT_02004e40,
                             *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2788),0,0);
              }
            }
            FUN_004095f0(local_100);
          }
          FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
          iVar3 = iVar3 + 1;
        }
      }
      else {
        uVar5 = FUN_012cc640(&PTR_FUN_012cba78,1,*(undefined8 *)PTR_DAT_02004030,local_108 + 0x62);
        *(undefined8 *)(local_108 + 0x80) = uVar5;
        FUN_008059a0(uVar5);
        while ((iVar3 = (**(code **)(**(longlong **)(local_108 + 0x20) + 0x28))
                                  (*(longlong **)(local_108 + 0x20)),
               *(int *)(local_108 + 0x70) < iVar3 && (*(char *)(local_108 + 0x62) == '\0'))) {
          if ((0 < *(int *)(local_108 + 0x6c)) &&
             (*(int *)(local_108 + 0x68) < *(int *)(local_108 + 0x78))) {
            FUN_012d7d80(local_108,1);
            lVar6 = (**(code **)(**(longlong **)(local_108 + 0x20) + 0x30))
                              (*(longlong **)(local_108 + 0x20),*(undefined4 *)(local_108 + 0x74));
            if (lVar6 == 0) {
              (**(code **)(**(longlong **)(local_108 + 0x20) + 0x18))
                        (*(longlong **)(local_108 + 0x20),&local_f8,
                         *(undefined4 *)(local_108 + 0x74));
              local_148 = (wchar_t *)CONCAT44(local_148._4_4_,*(int *)(local_108 + 0x70) + 1);
              FUN_012ccc10(*(undefined8 *)(local_108 + 0x80),local_f8,
                           *(int *)(local_108 + 0x68) + -1,*(undefined4 *)(local_108 + 0x6c));
              FUN_012d7d80(local_108,0);
            }
            else {
              uVar5 = (**(code **)(**(longlong **)(local_108 + 0x20) + 0x30))
                                (*(longlong **)(local_108 + 0x20),*(undefined4 *)(local_108 + 0x74))
              ;
              FUN_0041b890(&local_e0,uVar5,&DAT_012dacf0);
              local_100 = (char *)FUN_012c2940(local_e0);
              uVar5 = (**(code **)(**(longlong **)(local_108 + 0x20) + 0x30))
                                (*(longlong **)(local_108 + 0x20),*(undefined4 *)(local_108 + 0x74))
              ;
              FUN_012da030(auStack_168,uVar5);
              (**(code **)(**(longlong **)(local_108 + 0x20) + 0x18))
                        (*(longlong **)(local_108 + 0x20),&local_e8,
                         *(undefined4 *)(local_108 + 0x74));
              FUN_012d7e60(local_108,local_e8,local_100);
              uVar5 = FUN_004d0ba0(&PTR_FUN_012ce130,1,1);
              FUN_004d1400(uVar5,1);
              (**(code **)(**(longlong **)(local_108 + 0x20) + 0x18))
                        (*(longlong **)(local_108 + 0x20),&local_f0,
                         *(undefined4 *)(local_108 + 0x74));
              local_148 = *(wchar_t **)(local_108 + 0x40);
              local_140 = *(undefined **)(local_108 + 0x38);
              local_138 = *(undefined1 **)(local_108 + 0x48);
              local_130 = *(undefined8 *)(local_108 + 0x50);
              local_128 = CONCAT31(local_128._1_3_,*(undefined1 *)(local_108 + 0x65));
              local_120 = *(int *)(local_108 + 0x74) + 1;
              local_118 = CONCAT71(local_118._1_7_,3);
              FUN_012db0a0(uVar5,local_108,local_100,local_f0);
              FUN_004d1e30(uVar5);
            }
          }
          FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
          thunk_FUN_0419965d(200);
        }
        while (0 < *(int *)(local_108 + 0x68)) {
          FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
          thunk_FUN_0419965d(200);
        }
        local_60 = (undefined8 *)(local_108 + 0x80);
        uVar5 = *local_60;
        *local_60 = 0;
        FUN_00410f20(uVar5);
      }
      *PTR_DAT_02002ce0 = 0;
      FUN_00414480(*(longlong *)PTR_DAT_02004e40 + 0x27d8);
    }
  }
  FUN_012d9730(local_108,1);
  FUN_00410f20(local_30);
  FUN_00414560(&local_f8,3);
  FUN_0041b800(&local_e0);
  FUN_00414480(&local_d8);
  FUN_00414480(&local_d0);
  FUN_00414560(&local_c8,3);
  FUN_0041b800(&local_b0);
  FUN_0041b800(&local_a8);
  FUN_00414560(&local_a0,4);
  FUN_0041b800(&local_80);
  FUN_00417840(&local_78,&LAB_00b9fca0,2);
  FUN_00414560(&local_58,2);
  FUN_0041b800(&local_48);
  FUN_0041b800(&local_40);
  FUN_0041b800(&local_38);
  return;
}

