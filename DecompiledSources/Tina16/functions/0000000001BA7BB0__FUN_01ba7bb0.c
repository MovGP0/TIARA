/* Ghidra address: 01ba7bb0 */
/* Ghidra symbol: FUN_01ba7bb0 */


void FUN_01ba7bb0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong local_f8;
  ulonglong local_f0;
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
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_f8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_68 = 0;
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  plVar4 = *(longlong **)(param_1 + 0x748);
  uVar1 = (**(code **)(*plVar4 + 0x260))(plVar4);
  (**(code **)(*(longlong *)plVar4[0x9e] + 0x18))((longlong *)plVar4[0x9e],&local_30,uVar1);
  local_60 = local_30;
  local_58 = 0x11;
  FUN_00442f70(local_50,*(undefined8 *)(param_1 + 0x768),&local_60,0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_50[0]);
  FUN_00414ad0(*(longlong *)(param_1 + 0x730) + 0x100,local_30);
  local_88 = local_30;
  local_80 = 0x11;
  local_78 = local_30;
  local_70 = 0x11;
  FUN_00442f70(&local_68,*(undefined8 *)(param_1 + 0x770),&local_88,1);
  FUN_00414ad0(*(longlong *)(param_1 + 0x730) + 0xe0,local_68);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x6e0) + 0x4f0);
  (**(code **)(*plVar4 + 0x90))(plVar4);
  plVar4 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6f0),0);
  (**(code **)(*plVar4 + 0x90))(plVar4);
  plVar4 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6f0),1);
  (**(code **)(*plVar4 + 0x90))(plVar4);
  uVar5 = FUN_00b89270();
  FUN_0041ddd0(&local_98,&PTR_PTR_01ba5d38);
  FUN_00b8e650(uVar5,&local_90,L"SBlockWizard.sBlockHeader",local_98);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6f0),0,0,local_90);
  uVar5 = FUN_00b89270();
  FUN_0041ddd0(&local_a8,&LAB_01ba5d48);
  FUN_00b8e650(uVar5,&local_a0,L"SBlockWizard.sShapeHeader",local_a8);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6f0),1,0,local_a0);
  uVar5 = FUN_00b89270();
  FUN_00b8e650(uVar5,&local_b0,L"SBlockWizard.sPort",local_38);
  FUN_00414b50(&local_38,local_b0);
  uVar5 = FUN_00b89270();
  FUN_00b8e650(uVar5,&local_b8,L"SBlockWizard.sPin",local_40);
  FUN_00414b50(&local_40,local_b8);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748));
  iVar6 = iVar2 + 1;
  iVar3 = 0;
  if (-1 < iVar2) {
    iVar7 = iVar2 + 1;
    do {
      if (iVar6 < 3) {
        FUN_00416780(&local_c8,iVar3 + 0x41);
        FUN_00416cd0(&local_c0,5,local_38,local_c8,&DAT_01ba82fc,local_40,&DAT_01ba830c);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6f0),0,iVar3 * 2 + 1,local_c0);
        FUN_00416780(&local_d8,iVar3 + 0x41);
        FUN_00416cd0(&local_d0,5,local_38,local_d8,&DAT_01ba82fc,local_40,&DAT_01ba831c);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6f0),0,iVar3 * 2 + 2,local_d0);
      }
      else {
        FUN_00416780(&local_e8,iVar3 + 0x41);
        FUN_00416cd0(&local_e0,4,local_38,local_e8,&DAT_01ba82fc,local_40);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6f0),0,iVar3 + 1,local_e0);
      }
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (iVar6 < 3) {
    iVar2 = iVar6 * 2;
    FUN_00848a70(*(undefined8 *)(param_1 + 0x6f0),iVar2 + 1);
    iVar3 = 2;
    if (1 < iVar2) {
      iVar2 = iVar2 + -1;
      do {
        FUN_0043f750(&local_f0,iVar3);
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x6e0) + 0x4f0);
        (**(code **)(*plVar4 + 0x78))(plVar4,local_f0);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    FUN_00848a70(*(undefined8 *)(param_1 + 0x6f0),iVar2 + 2);
    FUN_0043f750(&local_f8,iVar6);
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x6e0) + 0x4f0);
    (**(code **)(*plVar4 + 0x78))(plVar4,local_f8);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))
            (*(longlong **)(param_1 + 0x6e0),iVar6 == 2);
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))(*(longlong **)(param_1 + 0x6e0),0);
  FUN_01ba64e0(param_1);
  FUN_00414560(&local_f8,0xe);
  FUN_00414480(&local_68);
  FUN_00414480(local_50);
  FUN_00414560(&local_40,3);
  return;
}

