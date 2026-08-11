/* Ghidra address: 01a45e10 */
/* Ghidra symbol: FUN_01a45e10 */


void FUN_01a45e10(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStack_1c8 [32];
  wchar_t *local_1a8;
  undefined1 local_1a0;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  int local_e4;
  longlong local_e0;
  undefined8 *local_d8;
  undefined4 local_cc;
  longlong local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  double local_a8;
  double local_a0;
  char local_8a;
  char local_89;
  longlong *local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_28;
  undefined8 local_20;
  
  local_f0 = auStack_1c8;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_20 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = (wchar_t *)0x0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  FUN_00414b50(&local_48,&DAT_01a47224);
  if (*(char *)(param_1 + 0x2b47) != '\0') goto LAB_01a470a2;
  *(undefined1 *)(param_1 + 0x2b47) = 1;
  local_1a8 = L"errors.txt";
  FUN_00416cd0(&local_20,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a47238);
  cVar2 = FUN_00440a20(local_20,1);
  if (cVar2 != '\0') {
    FUN_004412f0(local_20);
    *(undefined1 *)(param_1 + 0x2b40) = 0;
    uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Python: error occured!");
    FUN_004134c0(uVar5);
  }
  cVar2 = FUN_01a40a60(param_1);
  if (((cVar2 != '\0') && (*(longlong *)(param_1 + 0x2b98) != 0)) &&
     (cVar2 = FUN_019cf720(*(undefined8 *)(param_1 + 0x2b98)), cVar2 != '\0')) {
    FUN_01a40b80(param_1);
    FUN_01a43010(param_1,0);
    *(undefined1 *)(param_1 + 0x2b47) = 0;
    goto LAB_01a470a2;
  }
  cVar2 = FUN_01a40a60(param_1);
  if (((cVar2 != '\0') && (*(longlong *)(param_1 + 0x2b98) != 0)) &&
     (cVar2 = FUN_019cf710(*(undefined8 *)(param_1 + 0x2b98)), cVar2 != '\0')) {
    *(undefined1 *)(param_1 + 0x2b47) = 0;
    goto LAB_01a470a2;
  }
  local_1a8 = L"log.json";
  FUN_00416cd0(&local_20,3,*(undefined8 *)(*(longlong *)(param_1 + 0x2bc8) + 0x108),&DAT_01a47238);
  cVar2 = FUN_00440a20(local_20,1);
  if ((cVar2 != '\0') &&
     (cVar2 = FUN_013b7920(*(undefined8 *)(param_1 + 0x908),local_20), cVar2 != '\0')) {
    (**(code **)(**(longlong **)(param_1 + 0x908) + 0x38))
              (*(longlong **)(param_1 + 0x908),&local_50);
    cVar2 = FUN_01a529c0(param_1,local_50,&local_58);
    if (cVar2 != '\0') {
      iVar4 = FUN_004170c0(L"error occured",local_58,1);
      if (iVar4 < 1) {
LAB_01a461ab:
        local_8a = '\0';
      }
      else {
        local_1a8 = L"answer.txt";
        FUN_00416cd0(&local_f8,3,*(undefined8 *)(*(longlong *)(param_1 + 0x2bc8) + 0x108),
                     &DAT_01a47238);
        cVar2 = FUN_00440a20(local_f8,1);
        if (cVar2 == '\0') goto LAB_01a461ab;
        local_8a = '\x01';
      }
      if (local_8a != '\0') {
        FUN_01a42e10(param_1,1);
        FUN_01a52e50(param_1,local_58,local_8a);
        goto LAB_01a470a2;
      }
    }
  }
  if (*(char *)(param_1 + 0x2b43) != '\0') {
    if (*(int *)(param_1 + 0x2b58) < *(int *)(param_1 + 0x2b5c)) {
      FUN_01a45430(param_1,*(undefined4 *)(param_1 + 0x2b64));
      *(undefined4 *)(param_1 + 0x2b5c) = 0;
      *(undefined1 *)(param_1 + 0x2b43) = 0;
      FUN_01a43010(param_1,0);
    }
    else {
      *(int *)(param_1 + 0x2b5c) = *(int *)(param_1 + 0x2b5c) + 1;
    }
    *(undefined1 *)(param_1 + 0x2b47) = 0;
    goto LAB_01a470a2;
  }
  if (((*(int *)PTR_DAT_02002560 == 0) && (*(int *)(*(longlong *)(param_1 + 0x2968) + 0xa0) != 2))
     && (*(char *)(param_1 + 0x293d) != '\0')) {
    if (*(longlong *)PTR_DAT_02004dd8 == 0) {
      uVar5 = FUN_007fc180(&PTR_FUN_01a2d468,1,*(undefined8 *)PTR_DAT_02004030);
      *(undefined8 *)PTR_DAT_02004dd8 = uVar5;
      FUN_01a2db80(*(undefined8 *)PTR_DAT_02004dd8,&DAT_01a47314);
      FUN_008059a0(*(undefined8 *)PTR_DAT_02004dd8);
    }
    else {
      FUN_008059a0(*(undefined8 *)PTR_DAT_02004dd8);
      FUN_0064e1d0(*(undefined8 *)PTR_DAT_02004dd8);
      uVar6 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x6e0) + 0x78);
      local_a0 = (double)(longlong)((longlong)*(int *)(param_1 + 0x954) * uVar6) / 120000.0;
      *(double *)(param_1 + 0x2980) =
           (double)(longlong)((longlong)*(int *)(param_1 + 0x958) * uVar6) / 1000.0;
      if (1.0 < local_a0) {
        *(undefined4 *)(param_1 + 0x954) = 0;
        local_a0 = 1.0;
      }
      FUN_01a2de30(*(undefined8 *)PTR_DAT_02004dd8,local_a0);
      (**(code **)(**(longlong **)PTR_DAT_02004dd8 + 600))(*(longlong **)PTR_DAT_02004dd8);
      (**(code **)(**(longlong **)PTR_DAT_02004dd8 + 0x198))(*(longlong **)PTR_DAT_02004dd8);
    }
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  }
  if ((*(longlong *)PTR_DAT_02004dd8 != 0) &&
     (*(char *)(*(longlong *)PTR_DAT_02004dd8 + 0x6d0) != '\0')) {
    *(int *)(param_1 + 0x930) = *(int *)(param_1 + 0x930) + -1;
    FUN_01a43000(param_1,param_2);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    *(undefined1 *)(param_1 + 0x810) = 1;
  }
  *(int *)(param_1 + 0x954) = *(int *)(param_1 + 0x954) + 1;
  *(int *)(param_1 + 0x958) = *(int *)(param_1 + 0x958) + 1;
  local_1a8 = L"answer.txt";
  FUN_00416cd0(&local_20,3,*(undefined8 *)(*(longlong *)(param_1 + 0x2bc8) + 0x108),&DAT_01a47238);
  cVar2 = FUN_01a45c50(auStack_1c8);
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x2b46) = 1;
    if (*(longlong *)PTR_DAT_02004dd8 != 0) {
      FUN_00410f20(*(undefined8 *)PTR_DAT_02004dd8);
      *(undefined8 *)PTR_DAT_02004dd8 = 0;
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
    (**(code **)(**(longlong **)(param_1 + 0x8c8) + 0x10))
              (*(longlong **)(param_1 + 0x8c8),*(undefined8 *)(param_1 + 0x8c0));
    plVar1 = *(longlong **)(param_1 + 0x8c0);
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_108);
    FUN_00415dd0(&local_110,local_108,0);
    FUN_0041ddb0(&local_100,local_110);
    (**(code **)(*plVar1 + 0x60))(plVar1,local_100);
    (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x38))
              (*(longlong **)(param_1 + 0x8c0),&local_50);
    cVar2 = FUN_01a3d630(local_50);
    if ((cVar2 == '\0') || (cVar2 = FUN_01a3d760(*(undefined8 *)(param_1 + 0x8c0)), cVar2 == '\0'))
    {
      if (*(longlong *)(param_1 + 0x820) == 0) {
        *(undefined4 *)(param_1 + 0x928) = 1;
        (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x90))(*(longlong **)(param_1 + 0x8d0));
        (**(code **)(**(longlong **)(param_1 + 0x8d8) + 0x90))(*(longlong **)(param_1 + 0x8d8));
        FUN_00414480(param_1 + 0x8b0);
        cVar2 = FUN_01a40a60(param_1);
        if (cVar2 != '\0') {
          if (0 < *(int *)(param_1 + 0x2ac8)) {
            local_1a8 = (wchar_t *)(param_1 + 0x2a48);
            local_1a0 = 1;
            FUN_0147c100(*(undefined8 *)(param_1 + 0x6b8),param_1 + 0x2a48,
                         *(int *)(param_1 + 0x920) + -1,0xffff);
          }
          FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_118);
          local_c8 = local_118;
          local_cc = 0;
          if (local_118 != 0) {
            local_cc = *(undefined4 *)(local_118 + -4);
          }
          *(undefined4 *)(param_1 + 0x920) = local_cc;
          FUN_01a45610(param_1,param_1 + 0x29c0);
          FUN_01a45610(param_1,param_1 + 0x2a48);
          FUN_01a40ae0(param_1);
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x38))
                (*(longlong **)(param_1 + 0x8c0),&local_68);
      FUN_00414ad0(param_1 + 0x820,local_68);
      cVar2 = FUN_01a3d6a0(*(undefined8 *)(param_1 + 0x8c0));
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x90))(*(longlong **)(param_1 + 0x8c0));
        (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x78))
                  (*(longlong **)(param_1 + 0x8c0),L"Please elaborate on the question in detail!");
      }
      FUN_004b3260(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x510));
      FUN_01a452d0(param_1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
      (**(code **)(*plVar1 + 0x88))(plVar1,*(undefined8 *)(param_1 + 0x8c0));
      FUN_004b3390(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x510));
      cVar2 = FUN_01a40a60(param_1);
      if (cVar2 != '\0') {
        local_1a8 = local_48;
        cVar2 = FUN_01a457c0(param_1,*(undefined8 *)(param_1 + 0x820),param_1 + 0x928,&local_70);
        if (cVar2 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x78))
                    (*(longlong **)(param_1 + 0x8d0),local_70);
          (**(code **)(**(longlong **)(param_1 + 0x8d8) + 0x78))
                    (*(longlong **)(param_1 + 0x8d8),local_70);
          plVar1 = *(longlong **)(param_1 + 0x8d0);
          iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_120,iVar4 + -1);
          local_b0 = FUN_00416740(local_120);
          plVar1 = *(longlong **)(param_1 + 0x8d8);
          iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_128,iVar4 + -1);
          local_b8 = FUN_00416740(local_128);
          local_d8 = *(undefined8 **)(param_1 + 0x2b90);
          (**(code **)*local_d8)(local_d8);
          FUN_004afc10(*(undefined8 *)(param_1 + 0x2b80),local_b0);
          FUN_004afc10(*(undefined8 *)(param_1 + 0x2b88),local_b8);
          local_28 = *(longlong **)(param_1 + 0x2b90);
          (**(code **)(*local_28 + 8))(local_28);
          FUN_01a456f0(param_1);
        }
      }
      if (*(int *)(param_1 + 0x950) % 3 == 0) {
        FUN_01a4b730(param_1);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x2b45) = 1;
      FUN_01a43010(param_1,0);
    }
    *(int *)(param_1 + 0x950) = *(int *)(param_1 + 0x950) + 1;
    local_1a8 = L"answer_done.txt";
    FUN_00416cd0(&local_20,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a47238);
    cVar2 = FUN_00440a20(local_20,1);
    if (cVar2 != '\0') {
      local_a8 = (double)FUN_00b921a0(0);
      local_1a8 = (wchar_t *)CONCAT71(local_1a8._1_7_,1);
      FUN_00b8fd60(&local_130,local_a8 - *(double *)(param_1 + 0x2988),1,0);
      FUN_00416ba0(&local_60,local_130,&DAT_01a47434);
      if (*(int *)(*(longlong *)(param_1 + 0x2968) + 0xa0) == 2) {
        FUN_00414b50(&local_40,&PTR_PTR_01a47444);
      }
      else {
        FUN_00414b50(&local_40,*(undefined8 *)(param_1 + 0x840));
      }
      local_158 = local_40;
      local_150 = 0x11;
      local_148 = local_60;
      local_140 = 0x11;
      FUN_00442f70(&local_138,L"Answer done (%s / %s)",&local_158,1);
      FUN_01a52e50(param_1,local_138,0);
      (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x38))
                (*(longlong **)(param_1 + 0x8c0),&local_160);
      FUN_00414ad0(param_1 + 0x848,local_160);
      local_1a8 = (wchar_t *)CONCAT71(local_1a8._1_7_,1);
      FUN_00450070(&local_168,*(undefined8 *)(param_1 + 0x848),L"#13#10",0);
      FUN_00414ad0(param_1 + 0x848,local_168);
      local_e0 = *(longlong *)(param_1 + 0x848);
      local_e4 = 0;
      if (local_e0 != 0) {
        local_e4 = *(int *)(local_e0 + -4);
      }
      if ((local_e4 < 1) || (**(short **)(param_1 + 0x848) != 0x7b)) {
        local_88 = *(longlong **)(param_1 + 0x8c0);
        iVar4 = (**(code **)(*local_88 + 0x28))(local_88);
        if (2 < iVar4) {
          (**(code **)(*local_88 + 0x18))(local_88,&local_170,0);
          iVar4 = FUN_00416db0(local_170,L"```json");
          if (iVar4 == 0) {
            iVar4 = (**(code **)(*local_88 + 0x28))(local_88);
            (**(code **)(*local_88 + 0x18))(local_88,&local_178,iVar4 + -1);
            iVar4 = FUN_00416db0(local_178,&DAT_01a474c8);
            if (iVar4 != 0) goto LAB_01a46d5a;
            local_89 = '\x01';
          }
          else {
LAB_01a46d5a:
            local_89 = '\0';
          }
          if (local_89 != '\0') {
            (**(code **)(*local_88 + 0x98))(local_88,0);
            iVar4 = (**(code **)(*local_88 + 0x28))(local_88);
            (**(code **)(*local_88 + 0x98))(local_88,iVar4 + -1);
            (**(code **)(*local_88 + 0x38))(local_88,&local_180);
            FUN_00414ad0(param_1 + 0x848,local_180);
          }
        }
      }
      if ((*(int *)(param_1 + 0x94c) < 1) || (*(int *)(param_1 + 0x2948) != 1)) {
LAB_01a46e60:
        if ((0 < *(int *)(param_1 + 0x94c)) && (*(int *)(param_1 + 0x2948) == 2)) {
          FUN_0043e1a0(&local_190,*(undefined8 *)(param_1 + 0x848));
          cVar2 = FUN_01a3d570(local_190);
          if (cVar2 != '\0') {
            *(undefined4 *)(param_1 + 0x94c) = 0;
            *(undefined4 *)(param_1 + 0x948) = 1;
            *(undefined4 *)(param_1 + 0x2948) = 0;
          }
        }
      }
      else {
        FUN_0043e1a0(&local_188,*(undefined8 *)(param_1 + 0x848));
        cVar2 = FUN_01a3d450(local_188);
        if (cVar2 == '\0') goto LAB_01a46e60;
        *(undefined4 *)(param_1 + 0x94c) = 0;
        *(undefined4 *)(param_1 + 0x948) = 1;
        *(undefined4 *)(param_1 + 0x2948) = 0;
      }
      FUN_01a4b730(param_1);
      if ((*(char *)(param_1 + 0x2b45) == '\0') && (*(char *)(param_1 + 0x2b48) != '\0')) {
        uVar3 = FUN_019ce1a0(*(undefined8 *)(param_1 + 0x2978));
        *(undefined1 *)(*(longlong *)(param_1 + 0x2978) + 0x3a) = uVar3;
      }
      if (*(char *)(param_1 + 0x2b45) == '\0') {
        cVar2 = FUN_01a45350(param_1);
        if (cVar2 == '\0') {
          cVar2 = FUN_01a40a60(param_1);
          if (cVar2 == '\0') {
            FUN_01a43010(param_1,0);
          }
          else {
            FUN_019cf700(*(undefined8 *)(param_1 + 0x2b98));
          }
        }
        else {
          cVar2 = FUN_01a45900(auStack_1c8);
          if (cVar2 == '\0') {
            FUN_01a43010(param_1,0);
          }
          else {
            *(undefined1 *)(param_1 + 0x816) = 1;
          }
        }
      }
      else {
        FUN_01a43010(param_1,0);
        FUN_01a4d600(param_1);
      }
      FUN_01a403d0(param_1);
      if ((*(char *)(param_1 + 0x2b48) != '\0') && (cVar2 = FUN_01a59b20(param_1), cVar2 == '\0')) {
        *(undefined1 *)(param_1 + 0x2b48) = 0;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x2b47) = 0;
LAB_01a470a2:
  FUN_00414560(&local_190,7);
  FUN_00414560(&local_138,4);
  FUN_00414480(&local_118);
  FUN_004144d0(&local_110);
  FUN_00414560(&local_108,3);
  FUN_00414560(&local_70,8);
  FUN_00414480(&local_20);
  return;
}

