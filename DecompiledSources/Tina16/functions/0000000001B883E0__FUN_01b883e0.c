/* Ghidra address: 01b883e0 */
/* Ghidra symbol: FUN_01b883e0 */


void FUN_01b883e0(longlong param_1,int param_2)

{
  uint *puVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  char cVar6;
  undefined2 uVar7;
  short sVar8;
  int iVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_60 = 0;
  local_78 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  iVar9 = FUN_00416db0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 8) + 0x10),
                       L"voltage");
  if ((iVar9 == 0) ||
     (iVar9 = FUN_00416db0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 8) + 0x10)
                           ,L"current"), iVar9 == 0)) {
    puVar2 = *(undefined **)(param_1 + 0x238);
    if (puVar2 == &DAT_01b88b00) {
      bVar11 = true;
    }
    else if (puVar2 == (undefined *)0x0) {
      bVar11 = false;
    }
    else {
      iVar9 = FUN_0043e420(puVar2,&DAT_01b88b00);
      bVar11 = iVar9 == 0;
    }
    if ((bVar11) && (*(int *)(param_1 + 0x234) == 0)) {
      puVar1 = (uint *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 8) + 0x48) + 8)
      ;
      *puVar1 = *puVar1 | 2;
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 8) + 0x48);
      if (((*(uint *)(lVar3 + 8) & 2) == 0) || (*(int *)(param_1 + 0x234) < 1)) {
        cVar6 = FUN_01b88260(param_1,*(undefined8 *)(param_1 + 0x238),&local_10);
        if ((cVar6 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x260) + 0x3c2) == '\0')) {
          cVar6 = FUN_01b80750(*(undefined8 *)(param_1 + 0x238));
          if (cVar6 == '\0') {
            FUN_0043e1a0(&local_58,*(undefined8 *)(param_1 + 0x238));
            iVar9 = FUN_004170c0(L".wav",local_58,1);
            if (0 < iVar9) {
              FUN_0043e130(&local_78,
                           *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 8) + 0x20)
                          );
              local_70 = local_78;
              local_68 = 0x11;
              FUN_00442f70(&local_60,L"Wav file is not supported: %s",&local_70,0);
              uVar10 = FUN_0044d490(&PTR_FUN_004334c0,1,local_60);
              FUN_004134c0(uVar10);
            }
            puVar1 = (uint *)(*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x260) + 8) + 0x48) + 8);
            *puVar1 = *puVar1 | 1;
            plVar4 = *(longlong **)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 8) + 0x48) +
                        0x10) + 0x18);
            (**(code **)(*plVar4 + 0x78))(plVar4,*(undefined8 *)(param_1 + 0x238));
          }
        }
        else {
          FUN_010ca6f0(*(undefined8 *)(param_1 + 0x228),local_20);
          if (*(char *)(*(longlong *)(param_1 + 0x260) + 0x3c2) == '\0') {
            FUN_010ca8a0(*(undefined8 *)(param_1 + 0x228),&local_28,1);
            FUN_00414b50(param_1 + 0x238,local_28);
            FUN_010ca040(*(undefined8 *)(param_1 + 0x228),&local_30,1);
            uVar7 = FUN_010c9e60(*(undefined8 *)(param_1 + 0x228));
            *(undefined2 *)(param_1 + 0x226) = uVar7;
            FUN_010ca040(*(undefined8 *)(param_1 + 0x228),&local_38,1);
          }
          while ((sVar8 = FUN_010c9ea0(*(undefined8 *)(param_1 + 0x228)), sVar8 != 0x29 &&
                 (cVar6 = FUN_010c9ed0(*(undefined8 *)(param_1 + 0x228)), cVar6 == '\0'))) {
            FUN_010ca410(*(undefined8 *)(param_1 + 0x228),&local_40,0x29);
            FUN_00414b50(param_1 + 0x238,local_40);
            FUN_010ca040(*(undefined8 *)(param_1 + 0x228),&local_48,1);
            plVar4 = *(longlong **)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 8) + 0x48) +
                        0x20) + 0x18);
            (**(code **)(*plVar4 + 0x78))(plVar4,*(undefined8 *)(param_1 + 0x238));
          }
          uVar7 = FUN_010c9e60(*(undefined8 *)(param_1 + 0x228));
          *(undefined2 *)(param_1 + 0x226) = uVar7;
          FUN_010ca040(*(undefined8 *)(param_1 + 0x228),&local_50,1);
          if (*(char *)(*(longlong *)(param_1 + 0x260) + 0x3c2) == '\0') {
            puVar1 = (uint *)(*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x260) + 8) + 0x48) + 8);
            *puVar1 = *puVar1 | 4;
            FUN_00414ad0(*(longlong *)
                          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 8) + 0x48) +
                          0x20) + 0x10,local_10);
          }
          *(bool *)(*(longlong *)(param_1 + 0x260) + 0x3c2) = *(short *)(param_1 + 0x226) == 0x20;
        }
      }
      else {
        plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x18) + 0x18);
        (**(code **)(*plVar4 + 0x78))(plVar4,*(undefined8 *)(param_1 + 0x238));
      }
    }
  }
  else if (param_2 == 1) {
    pwVar5 = *(wchar_t **)(param_1 + 0x238);
    if (pwVar5 == L"FUSE") {
      bVar11 = true;
    }
    else if (pwVar5 == (wchar_t *)0x0) {
      bVar11 = false;
    }
    else {
      iVar9 = FUN_0043e420(pwVar5,L"FUSE");
      bVar11 = iVar9 == 0;
    }
    if (bVar11) {
      FUN_0043e130(&local_88,*(undefined8 *)(param_1 + 0x238));
      local_70 = local_88;
      local_68 = 0x11;
      FUN_00442f70(&local_80,L"Model is not supported: %s",&local_70,0);
      uVar10 = FUN_0044d490(&PTR_FUN_004334c0,1,local_80);
      FUN_004134c0(uVar10);
    }
    FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x260) + 8) + 0x28,
                 *(undefined8 *)(param_1 + 0x238));
  }
  else if (param_2 == 2) {
    pwVar5 = *(wchar_t **)(param_1 + 0x238);
    if (pwVar5 == L"FUSE") {
      bVar11 = true;
    }
    else if (pwVar5 == (wchar_t *)0x0) {
      bVar11 = false;
    }
    else {
      iVar9 = FUN_0043e420(pwVar5,L"FUSE");
      bVar11 = iVar9 == 0;
    }
    if (bVar11) {
      FUN_0043e130(&local_98,*(undefined8 *)(param_1 + 0x238));
      local_70 = local_98;
      local_68 = 0x11;
      FUN_00442f70(&local_90,L"Model is not supported: %s",&local_70,0);
      uVar10 = FUN_0044d490(&PTR_FUN_004334c0,1,local_90);
      FUN_004134c0(uVar10);
    }
    FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x260) + 8) + 0x30,
                 *(undefined8 *)(param_1 + 0x238));
  }
  *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + 1;
  FUN_00414560(&local_98,5);
  FUN_00414560(&local_60,9);
  FUN_00414480(&local_10);
  return;
}

