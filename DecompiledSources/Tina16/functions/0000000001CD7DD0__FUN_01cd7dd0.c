/* Ghidra address: 01cd7dd0 */
/* Ghidra symbol: FUN_01cd7dd0 */


void FUN_01cd7dd0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  double dVar10;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_f0;
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
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
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
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_48 = 0;
  local_40 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  cVar3 = FUN_01ada080(*(undefined8 *)(param_1 + 0x60));
  if (cVar3 != '\0') {
    FUN_005dce70(*(undefined8 *)(param_1 + 0x110));
    FUN_01cd6e90(param_1,&local_40);
    FUN_01ce7c10(&local_38,local_40);
    FUN_004168e0(&local_48,local_38);
    FUN_00b0cea0(&local_30,local_48,0xfde9);
    FUN_004155b0(&local_30,&DAT_01cd88e8);
    FUN_00416880(local_20,local_30);
    if (0 < *(int *)(*(longlong *)(param_1 + 0xf8) + 0x10)) {
      uVar8 = FUN_004aeac0(*(longlong *)(param_1 + 0xf8),0);
      uVar6 = FUN_01ae9510(*(undefined8 *)(param_1 + 0x60),0,uVar8);
      cVar3 = FUN_01cd6670(param_1);
      if (cVar3 == '\0') {
        FUN_0043f750(&local_50,uVar6);
        FUN_00416ba0(&local_28,&DAT_01cd88f8,local_50);
      }
      else {
        uVar8 = FUN_01cd6670(param_1);
        if ((byte)uVar8 < 8) {
          bVar9 = ((int)CONCAT71((int7)((ulonglong)uVar8 >> 8),1) << ((byte)uVar8 & 0x1f) & 6U) != 0
          ;
        }
        else {
          bVar9 = false;
        }
        if (bVar9) {
          FUN_0043f750(&local_58,uVar6);
          FUN_00416ba0(&local_28,&DAT_01cd890c,local_58);
        }
        else {
          FUN_00414b50(&local_28,&DAT_01cd8920);
        }
      }
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x98) + 0x28);
      FUN_00416cd0(&local_60,3,local_20[0],L"color",local_28);
      iVar7 = (**(code **)(*param_4 + 0x20))(param_4,local_res10,local_60,iVar1);
      if (iVar1 != iVar7) {
        lVar2 = *(longlong *)(param_1 + 0x98);
        FUN_00416cd0(&local_68,3,local_20[0],L"color",local_28);
        uVar6 = (**(code **)(*param_4 + 0x20))
                          (param_4,local_res10,local_68,*(undefined4 *)(lVar2 + 0x28));
        FUN_005fc860(lVar2,uVar6);
      }
      FUN_00416cd0(&local_70,3,local_20[0],&DAT_01cd8948,local_28);
      dVar10 = (double)(**(code **)(*param_4 + 0x58))
                                 (param_4,local_res10,local_70,*(undefined8 *)(param_1 + 0xb8));
      if (*(double *)(param_1 + 0xb8) != dVar10) {
        FUN_00416cd0(&local_78,3,local_20[0],&DAT_01cd8948,local_28);
        uVar8 = (**(code **)(*param_4 + 0x58))
                          (param_4,local_res10,local_78,*(undefined8 *)(param_1 + 0xb8));
        *(undefined8 *)(param_1 + 0xb8) = uVar8;
        (**(code **)(**(longlong **)(param_1 + 0x110) + 0x80))
                  (*(longlong **)(param_1 + 0x110),L"main",&DAT_01cd8948,
                   *(undefined8 *)(param_1 + 0xb8));
      }
      FUN_00416cd0(&local_80,3,local_20[0],&DAT_01cd8974,local_28);
      dVar10 = (double)(**(code **)(*param_4 + 0x58))
                                 (param_4,local_res10,local_80,*(undefined8 *)(param_1 + 0xc0));
      if (*(double *)(param_1 + 0xc0) != dVar10) {
        FUN_00416cd0(&local_88,3,local_20[0],&DAT_01cd8974,local_28);
        uVar8 = (**(code **)(*param_4 + 0x58))
                          (param_4,local_res10,local_88,*(undefined8 *)(param_1 + 0xb8));
        *(undefined8 *)(param_1 + 0xc0) = uVar8;
        (**(code **)(**(longlong **)(param_1 + 0x110) + 0x80))
                  (*(longlong **)(param_1 + 0x110),L"main",&DAT_01cd8974,
                   *(undefined8 *)(param_1 + 0xc0));
      }
    }
    FUN_00416ba0(&local_90,local_res18,L"Enabled");
    uVar6 = (**(code **)(*param_4 + 0x30))
                      (param_4,local_res10,local_90,*(undefined1 *)(param_1 + 0x12));
    *(char *)(param_1 + 0x12) = (char)uVar6;
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0x38))
              (*(longlong **)(param_1 + 0x110),L"main",L"Enabled",uVar6);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x98) + 0x28);
    FUN_00416ba0(&local_98,local_res18,L"color");
    iVar7 = (**(code **)(*param_4 + 0x20))(param_4,local_res10,local_98,iVar1);
    if (iVar1 != iVar7) {
      lVar2 = *(longlong *)(param_1 + 0x98);
      FUN_00416ba0(&local_a0,local_res18,L"color");
      uVar6 = (**(code **)(*param_4 + 0x20))
                        (param_4,local_res10,local_a0,*(undefined4 *)(lVar2 + 0x28));
      FUN_005fc860(lVar2,uVar6);
    }
    FUN_00416ba0(&local_a8,local_res18,&DAT_01cd8948);
    dVar10 = (double)(**(code **)(*param_4 + 0x58))
                               (param_4,local_res10,local_a8,*(undefined8 *)(param_1 + 0xb8));
    if (*(double *)(param_1 + 0xb8) != dVar10) {
      FUN_00416ba0(&local_b0,local_res18,&DAT_01cd8948);
      uVar8 = (**(code **)(*param_4 + 0x58))
                        (param_4,local_res10,local_b0,*(undefined8 *)(param_1 + 0xb8));
      *(undefined8 *)(param_1 + 0xb8) = uVar8;
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x80))
                (*(longlong **)(param_1 + 0x110),L"main",&DAT_01cd8948,
                 *(undefined8 *)(param_1 + 0xb8));
    }
    FUN_00416ba0(&local_b8,local_res18,&DAT_01cd8974);
    dVar10 = (double)(**(code **)(*param_4 + 0x58))
                               (param_4,local_res10,local_b8,*(undefined8 *)(param_1 + 0xc0));
    if (*(double *)(param_1 + 0xc0) != dVar10) {
      FUN_00416ba0(&local_c0,local_res18,&DAT_01cd8974);
      uVar8 = (**(code **)(*param_4 + 0x58))
                        (param_4,local_res10,local_c0,*(undefined8 *)(param_1 + 0xb8));
      *(undefined8 *)(param_1 + 0xc0) = uVar8;
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x80))
                (*(longlong **)(param_1 + 0x110),L"main",&DAT_01cd8974,
                 *(undefined8 *)(param_1 + 0xc0));
    }
    iVar1 = *(int *)(param_1 + 0x74);
    FUN_00416ba0(&local_c8,local_res18,L"divs");
    iVar7 = (**(code **)(*param_4 + 0x20))(param_4,local_res10,local_c8,iVar1);
    if (iVar1 != iVar7) {
      FUN_00416ba0(&local_d0,local_res18,L"divs");
      uVar6 = (**(code **)(*param_4 + 0x20))
                        (param_4,local_res10,local_d0,*(undefined4 *)(param_1 + 0x74));
      FUN_01cd6740(param_1,uVar6);
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x28))
                (*(longlong **)(param_1 + 0x110),L"main",L"divs",*(undefined4 *)(param_1 + 0x74));
    }
    cVar3 = FUN_01cd6670(param_1);
    if (cVar3 == '\x03') {
      FUN_01cd6740(param_1,1);
    }
    iVar1 = *(int *)(param_1 + 0x90);
    FUN_00416ba0(&local_d8,local_res18,L"precision");
    iVar7 = (**(code **)(*param_4 + 0x20))(param_4,local_res10,local_d8,iVar1);
    if (iVar1 != iVar7) {
      FUN_00416ba0(&local_e0,local_res18,L"precision");
      uVar6 = (**(code **)(*param_4 + 0x20))
                        (param_4,local_res10,local_e0,*(undefined4 *)(param_1 + 0x90));
      *(undefined4 *)(param_1 + 0x90) = uVar6;
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x28))
                (*(longlong **)(param_1 + 0x110),L"main",L"precision",uVar6);
    }
    cVar3 = *(char *)(param_1 + 0x80);
    FUN_00416ba0(&local_e8,local_res18,L"nformat");
    cVar4 = (**(code **)(*param_4 + 0x20))(param_4,local_res10,local_e8,cVar3);
    if (cVar3 != cVar4) {
      FUN_00416ba0(&local_f0,local_res18,L"nformat");
      uVar5 = (**(code **)(*param_4 + 0x20))
                        (param_4,local_res10,local_f0,*(undefined1 *)(param_1 + 0x80));
      *(undefined1 *)(param_1 + 0x80) = uVar5;
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x28))
                (*(longlong **)(param_1 + 0x110),L"main",L"nformat",uVar5);
    }
  }
  FUN_00414560(&local_f0,0x15);
  FUN_00414520(&local_48);
  FUN_00414560(&local_40,2);
  FUN_004144d0(&local_30);
  FUN_00414560(&local_28,2);
  FUN_00414560(&local_res10,2);
  return;
}

