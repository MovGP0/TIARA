/* Ghidra address: 01b88bd0 */
/* Ghidra symbol: FUN_01b88bd0 */


void FUN_01b88bd0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
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
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  short *local_20;
  
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
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20 = (short *)0x0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined1 *)(param_1 + 0x21f) = 0;
  do {
    cVar5 = FUN_010c9ed0(*(undefined8 *)(param_1 + 0x228));
    if (cVar5 != '\0') {
      FUN_00414560(&local_b0,0x11);
      FUN_00414480(&local_20);
      return;
    }
    if (*(char *)(param_1 + 0x21f) == '\0') {
      uVar6 = FUN_010c9ea0(*(undefined8 *)(param_1 + 0x228));
      *(undefined2 *)(param_1 + 0x226) = uVar6;
      FUN_010ca270(*(undefined8 *)(param_1 + 0x228),&local_40,0);
      FUN_00414b50(param_1 + 0x238,local_40);
    }
    else {
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x260) + 0x350);
      if (iVar7 == 0) {
        FUN_010ca8a0(*(undefined8 *)(param_1 + 0x228),local_30,1);
        FUN_00414b50(param_1 + 0x210,local_30[0]);
      }
      else if (iVar7 == 1) {
        uVar8 = FUN_010c9e60(*(undefined8 *)(param_1 + 0x228));
        FUN_00416780(param_1 + 0x238,uVar8);
      }
      else if (iVar7 == 2) {
        FUN_010ca270(*(undefined8 *)(param_1 + 0x228),&local_38,0);
        FUN_00414b50(param_1 + 0x208,local_38);
        FUN_01b87ac0(*(undefined8 *)(param_1 + 0x260),*(undefined8 *)(param_1 + 0x210),
                     *(undefined8 *)(param_1 + 0x208));
      }
      piVar1 = (int *)(*(longlong *)(param_1 + 0x260) + 0x350);
      *piVar1 = *piVar1 + 1;
      if (*(int *)(*(longlong *)(param_1 + 0x260) + 0x350) == 3) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x260) + 0x350) = 0;
      }
    }
    FUN_010ca040(*(undefined8 *)(param_1 + 0x228),&local_48,0);
    if (*(char *)(param_1 + 0x21f) == '\0') {
      FUN_0043e1a0(&local_50,*(undefined8 *)(param_1 + 0x238));
      iVar7 = FUN_004170c0(L"!.param",local_50,1);
      if (iVar7 == 1) {
        *(undefined1 *)(param_1 + 0x21f) = 1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x260) + 0x350) = 0;
      }
    }
    FUN_0043e1a0(&local_58,*(undefined8 *)(param_1 + 0x238));
    iVar7 = FUN_004170c0(L"!.model",local_58,1);
    if (iVar7 == 1) {
      FUN_00450070(&local_60,*(undefined8 *)(param_1 + 0x238),&DAT_01b89564,0,1);
      FUN_00414b50(param_1 + 0x238,local_60);
      FUN_010ca5b0(*(undefined8 *)(param_1 + 0x228),&local_68);
      FUN_00416cd0(param_1 + 0x238,3,*(undefined8 *)(param_1 + 0x238),&DAT_01b89578,local_68);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x260) + 0x3c8);
      (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0x238));
    }
    FUN_0043e1a0(&local_70,*(undefined8 *)(param_1 + 0x238));
    iVar7 = FUN_004170c0(L"!.func",local_70);
    if (iVar7 == 1) {
      FUN_00450070(&local_78,*(undefined8 *)(param_1 + 0x238),&DAT_01b89564,0,1);
      FUN_00414b50(param_1 + 0x238,local_78);
      FUN_010ca5b0(*(undefined8 *)(param_1 + 0x228),&local_80);
      FUN_00416cd0(param_1 + 0x238,3,*(undefined8 *)(param_1 + 0x238),&DAT_01b89578,local_80);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x260) + 0x3d0);
      (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0x238));
    }
    if (*(int *)(param_1 + 0x220) == 0) {
      uVar8 = FUN_0043fc00(*(undefined8 *)(param_1 + 0x238));
      *(undefined4 *)(param_1 + 0x200) = uVar8;
    }
    else if (*(int *)(param_1 + 0x220) == 1) {
      uVar8 = FUN_0043fc00(*(undefined8 *)(param_1 + 0x238));
      *(undefined4 *)(param_1 + 0x204) = uVar8;
    }
    else if (*(int *)(param_1 + 0x220) == 4) {
      *(int *)(param_1 + 0x200) =
           *(int *)(param_1 + 0x200) + *(int *)(*(longlong *)(param_1 + 0x260) + 0x378);
      *(int *)(param_1 + 0x204) =
           *(int *)(param_1 + 0x204) + *(int *)(*(longlong *)(param_1 + 0x260) + 0x37c);
      FUN_010ca5b0(*(undefined8 *)(param_1 + 0x228),&local_88);
      FUN_00416cd0(param_1 + 0x238,3,*(undefined8 *)(param_1 + 0x238),&DAT_01b89578,local_88);
      FUN_010ca6f0(*(undefined8 *)(param_1 + 0x228),&local_90);
      uVar9 = 0;
      bVar4 = 1;
      if (*(int *)(*(longlong *)(param_1 + 0x260) + 0x340) == 1) {
        iVar7 = 0;
        if (*(longlong *)(param_1 + 0x238) != 0) {
          iVar7 = *(int *)(*(longlong *)(param_1 + 0x238) + -4);
        }
        bVar3 = 1 < iVar7;
      }
      else {
        bVar3 = false;
      }
      if ((bVar3) && (**(short **)(param_1 + 0x238) != 0x21)) {
        FUN_0043ea00(&local_20,*(undefined8 *)(param_1 + 0x238));
        if (*local_20 == 0x3b) {
          FUN_00416e20(&local_20,1,1);
        }
        FUN_0043ea00(&local_98,local_20);
        FUN_00414b50(&local_20,local_98);
        iVar7 = 0;
        if (local_20 != (short *)0x0) {
          iVar7 = *(int *)(local_20 + -2);
        }
        if (iVar7 < 5) {
          bVar4 = 0;
        }
      }
      else {
        uVar9 = 1;
      }
      if ((bool)(bVar4 & *(int *)(*(longlong *)(param_1 + 0x260) + 0x340) == 1)) {
        FUN_00416dc0(&local_a0,*(undefined8 *)(param_1 + 0x238),2,0xff);
        FUN_01b87f50(*(undefined8 *)(param_1 + 0x260),local_a0,param_1 + 0x200,uVar9);
      }
      FUN_0043e1a0(&local_a8,*(undefined8 *)(param_1 + 0x238));
      FUN_00414b50(param_1 + 0x238,local_a8);
      FUN_00450070(&local_b0,*(undefined8 *)(param_1 + 0x238),&DAT_01b895a4,&DAT_01b895b4,1);
      FUN_00414b50(param_1 + 0x238,local_b0);
      iVar7 = 0;
      if (*(longlong *)(param_1 + 0x238) != 0) {
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x238) + -4);
      }
      if ((1 < iVar7) && (**(short **)(param_1 + 0x238) == 0x21)) {
        iVar7 = FUN_004170c0(L".step",*(undefined8 *)(param_1 + 0x238));
        if (0 < iVar7) {
          uVar9 = FUN_0044d490(&PTR_FUN_004334c0,1);
          FUN_004134c0(uVar9);
          goto LAB_01b894a0;
        }
      }
      iVar7 = 0;
      if (*(longlong *)(param_1 + 0x238) != 0) {
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x238) + -4);
      }
      if ((1 < iVar7) && (**(short **)(param_1 + 0x238) == 0x21)) {
        cVar5 = FUN_01b7fa60(&DAT_01b89618,*(undefined8 *)(param_1 + 0x238));
        if (cVar5 == '\0') {
          cVar5 = FUN_01b7fa60(L"tran",*(undefined8 *)(param_1 + 0x238));
          if (cVar5 == '\0') goto LAB_01b894a0;
        }
        FUN_00416dc0(param_1 + 0x1f8,*(undefined8 *)(param_1 + 0x238));
        iVar7 = 0;
        if (*(longlong *)(param_1 + 0x238) != 0) {
          iVar7 = *(int *)(*(longlong *)(param_1 + 0x238) + -4);
        }
        if ((1 < iVar7) && (**(short **)(param_1 + 0x238) == 0x21)) {
          cVar5 = FUN_01b7fa60(L"tran",*(undefined8 *)(param_1 + 0x238));
          if (cVar5 != '\0') {
            FUN_00414b50(param_1 + 0x1f0,*(undefined8 *)(param_1 + 0x1f8));
          }
        }
        iVar7 = 0;
        if (*(longlong *)(param_1 + 0x238) != 0) {
          iVar7 = *(int *)(*(longlong *)(param_1 + 0x238) + -4);
        }
        if ((1 < iVar7) && (**(short **)(param_1 + 0x238) == 0x21)) {
          cVar5 = FUN_01b7fa60(&DAT_01b89618,*(undefined8 *)(param_1 + 0x238));
          if (cVar5 != '\0') {
            FUN_00414b50(param_1 + 0x1e8,*(undefined8 *)(param_1 + 0x1f8));
          }
        }
      }
    }
LAB_01b894a0:
    *(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x220) + 1;
  } while( true );
}

