/* Ghidra address: 01c73210 */
/* Ghidra symbol: FUN_01c73210 */


int FUN_01c73210(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  bool bVar10;
  int local_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0 [256];
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
  undefined1 local_50 [16];
  undefined8 local_40;
  wchar_t *local_38;
  short *local_30 [2];
  
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_30[0] = (short *)0x0;
  local_38 = (wchar_t *)0x0;
  local_40 = 0;
  local_1c4 = -1;
  FUN_00414480(param_1 + 0x38);
  iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x700) + 0x4a8);
  lVar6 = FUN_00b89270();
  if (*(char *)(lVar6 + 0x2e) != '\0') {
    iVar4 = (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x700) + 0x4a4) - iVar4) + -1;
  }
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x27a0);
  iVar5 = (**(code **)(*plVar7 + 0x28))(plVar7);
  if ((iVar4 < iVar5) && (-1 < iVar4)) {
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x27a0);
    (**(code **)(*plVar7 + 0x18))(plVar7,&local_60,iVar4);
    FUN_00414b50(param_1 + 0x38,local_60);
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x27a0);
    lVar6 = (**(code **)(*plVar7 + 0x30))(plVar7,iVar4);
    local_1c4 = *(int *)(lVar6 + 0x50);
    *(undefined1 *)(param_1 + 0x37) = 0;
    if (local_1c4 == 0x39) {
      FUN_00414b50(local_30,*(undefined8 *)(lVar6 + 0x30));
      if (*local_30[0] == 0x40) {
        FUN_00416dc0(&local_68,local_30[0],2,0xff);
        FUN_00648720(&local_38,local_68);
        FUN_00416dc0(&local_70,local_30[0],2,0xff);
        FUN_00648780(&local_40,local_70);
        if (local_38 == L"InsertMacro") {
          bVar10 = true;
        }
        else if (local_38 == (wchar_t *)0x0) {
          bVar10 = false;
        }
        else {
          iVar4 = FUN_0043e420(local_38,L"InsertMacro");
          bVar10 = iVar4 == 0;
        }
        if (bVar10) {
          FUN_00b928f0(&local_78,local_40,0);
          FUN_0177d560(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x18f8),local_78);
          plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x18f8);
          cVar2 = (**(code **)(*plVar7 + 0xa8))(plVar7);
          if (cVar2 != '\0') {
            FUN_00724270(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x18f8),&local_80);
            FUN_00414ad0(*(longlong *)(param_1 + 0x60) + 0x2760,local_80);
            *(undefined1 *)(param_1 + 0x37) = 1;
          }
        }
      }
      else if (*local_30[0] == 0x23) {
        *(undefined1 *)(param_1 + 0x37) = 0;
        lVar1 = *(longlong *)(param_1 + 0x60);
        *(undefined4 *)(lVar1 + 0x1840) = 0x39;
        FUN_00416dc0(&local_90,local_30[0],2,0xff);
        FUN_00648720(&local_88,local_90);
        FUN_00414ad0(lVar1 + 0x1848,local_88);
        FUN_00416dc0(&local_a0,local_30[0],2,0xff);
        FUN_00648780(&local_98,local_a0);
        FUN_00414ad0(lVar1 + 0x1850,local_98);
        *(undefined8 *)(lVar1 + 0x1858) = 0;
        FUN_00416910(local_1a0,*(undefined8 *)(lVar1 + 0x1848),0xff);
        uVar3 = FUN_017178f0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x2520),local_1a0);
        *(undefined1 *)(lVar1 + 0x1860) = uVar3;
      }
      else {
        *(undefined1 *)(param_1 + 0x37) = 1;
        FUN_00b928f0(&local_1a8,local_30[0],0);
        FUN_00414ad0(*(longlong *)(param_1 + 0x60) + 0x2760,local_1a8);
      }
    }
    if (local_1c4 < 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x700);
      FUN_00849e90(lVar1,local_50,*(undefined4 *)(lVar1 + 0x4a8),*(undefined4 *)(lVar1 + 0x4ac));
      local_58 = FUN_0064d1f0(lVar1,&local_58);
      plVar7 = (longlong *)FUN_00c81e70(lVar6);
      local_1c4 = (**(code **)(*plVar7 + 0x20))
                            (plVar7,local_58 & 0xffffffff,local_58._4_4_,
                             *(undefined8 *)PTR_DAT_02001f18);
      (**(code **)(*plVar7 + 0x50))(plVar7,&local_1b0);
      FUN_00414b50(param_1 + 0x38,local_1b0);
      iVar4 = FUN_004170c0(&DAT_01c73890,*(undefined8 *)(param_1 + 0x38),1);
      if (iVar4 == 1) {
        *(undefined1 *)(param_1 + 0x37) = 1;
        uVar9 = 0;
        if (*(longlong *)(param_1 + 0x38) != 0) {
          uVar9 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + -4);
        }
        FUN_00416dc0(*(longlong *)(param_1 + 0x60) + 0x2760,*(undefined8 *)(param_1 + 0x38),2,uVar9)
        ;
      }
      else {
        lVar6 = *(longlong *)(param_1 + 0x60);
        *(int *)(lVar6 + 0x1840) = local_1c4;
        (**(code **)(*plVar7 + 0x50))(plVar7,&local_1b8);
        FUN_00414ad0(lVar6 + 0x1848,local_1b8);
        (**(code **)(*plVar7 + 0x58))(plVar7,&local_1c0);
        FUN_00414ad0(lVar6 + 0x1850,local_1c0);
        uVar8 = (**(code **)(*plVar7 + 0x68))(plVar7);
        *(undefined8 *)(lVar6 + 0x1858) = uVar8;
        uVar3 = FUN_004113d0(plVar7,&PTR_FUN_017079d0);
        *(undefined1 *)(lVar6 + 0x1860) = uVar3;
      }
    }
  }
  FUN_00414560(&local_1c0,4);
  FUN_00414560(&local_a0,4);
  FUN_00414480(&local_80);
  FUN_00414560(&local_78,4);
  FUN_00414560(&local_40,3);
  return local_1c4;
}

