/* Ghidra address: 01d15200 */
/* Ghidra symbol: FUN_01d15200 */


void FUN_01d15200(longlong param_1,undefined4 param_2,int param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  longlong local_res20;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50 [2];
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = (longlong *)0x0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  local_50[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = (longlong *)0x0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x120) + 0x78) == '\x01') &&
     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x120) + 0xa8) != 0)) {
    FUN_005fccd0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x128) + 0x70),
                 local_50);
    lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x120) + 0x90);
    if (local_50[0] == lVar5) {
      bVar10 = true;
    }
    else if ((local_50[0] == 0) || (lVar5 == 0)) {
      bVar10 = false;
    }
    else {
      iVar9 = FUN_0043e420(local_50[0],lVar5);
      bVar10 = iVar9 == 0;
    }
    if (bVar10) {
      FUN_00414b50(&local_20,L"Arial");
      iVar9 = 0;
      if (local_res20 != 0) {
        iVar9 = *(int *)(local_res20 + -4);
      }
      iVar8 = 1;
      if (0 < iVar9) {
        do {
          sVar3 = *(short *)(local_res20 + -2 + (longlong)iVar8 * 2);
          if (sVar3 == 0x77) {
            sVar3 = 0x79;
          }
          if (sVar3 == 0x57) {
            sVar3 = 0x59;
          }
          FUN_00416780(&local_58,sVar3 + 0x350);
          FUN_00416ad0(&local_28,local_58);
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      FUN_00414b50(&local_res20,local_28);
    }
    else {
      FUN_00414b50(&local_20,L"Arial");
    }
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x120) + 0xa8);
    (**(code **)(*plVar1 + 0x58))(plVar1,&local_60);
    (**(code **)(*local_60 + 0x148))(local_60,&local_40,L"text");
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x120) + 0xa8);
    (**(code **)(*plVar1 + 0x98))(plVar1,&local_68,local_40);
    FUN_0043f750(&local_70,param_2);
    (**(code **)(*local_40 + 0x108))(local_40,&DAT_01d15bf8,local_70);
    iVar9 = FUN_01d13670(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x120),
                         *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x128),&DAT_01d15c0c);
    lVar5 = FUN_0040c770((double)iVar9 / 2.0);
    FUN_0043f780(&local_78,(longlong)param_3 + 2 + lVar5);
    (**(code **)(*local_40 + 0x108))(local_40,&DAT_01d15c08,local_78);
    (**(code **)(*local_40 + 0x108))(local_40,L"font-family",local_20);
    uVar4 = FUN_005fce00(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x128) + 0x70));
    FUN_0043f750(&local_80,uVar4);
    (**(code **)(*local_40 + 0x108))(local_40,L"font-size",local_80);
    uVar6 = FUN_005fce60(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x128) + 0x70));
    if ((uVar6 & 1) != 0) {
      (**(code **)(*local_40 + 0x108))(local_40,L"font-weight",L"bold");
    }
    uVar6 = FUN_005fce60(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x128) + 0x70));
    if ((uVar6 & 2) != 0) {
      (**(code **)(*local_40 + 0x108))(local_40,L"font-style",L"italic");
    }
    uVar6 = FUN_005fce60(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x128) + 0x70));
    if ((uVar6 & 4) != 0) {
      (**(code **)(*local_40 + 0x108))(local_40,L"text-decoration",L"underline");
    }
    FUN_00636180(&local_88,
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x128) + 0x70) + 0x28
                  ));
    (**(code **)(*local_40 + 0x108))(local_40,L"color",local_88);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x120) + 0xa8);
    (**(code **)(*plVar1 + 0x58))(plVar1,&local_a0);
    (**(code **)(*local_a0 + 0x128))(local_a0,&local_98,local_res20);
    (**(code **)(*local_40 + 0x98))(local_40,&local_90,local_98);
    uVar6 = FUN_005fce60(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x128) + 0x70));
    if ((uVar6 & 4) != 0) {
      FUN_0043f750(&local_a8,param_2);
      (**(code **)(*local_40 + 0x108))(local_40,&PTR_DAT_01d15d40,local_a8);
      FUN_0043f750(&local_b0,param_3 + -2);
      (**(code **)(*local_40 + 0x108))(local_40,&DAT_01d15d54,local_b0);
      uVar7 = FUN_00416740(local_res20);
      uVar4 = FUN_01d12610(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x120),
                           *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x128),uVar7);
      FUN_0043f750(&local_b8,uVar4);
      (**(code **)(*local_40 + 0x108))(local_40,&PTR_DAT_01d15d68,local_b8);
      uVar4 = FUN_01d13560(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x120),
                           *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x128),uVar7);
      FUN_0043f750(&local_c0,uVar4);
      (**(code **)(*local_40 + 0x108))(local_40,&DAT_01d15d7c,local_c0);
      (**(code **)(*local_40 + 0x108))
                (local_40,L"href",
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x120) + 0xb0));
    }
  }
  else {
    FUN_005fccd0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x128) + 0x70),
                 &local_c8);
    lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x120) + 0x90);
    if (local_c8 == lVar5) {
      bVar10 = true;
    }
    else if ((local_c8 == 0) || (lVar5 == 0)) {
      bVar10 = false;
    }
    else {
      iVar9 = FUN_0043e420(local_c8,lVar5);
      bVar10 = iVar9 == 0;
    }
    if (bVar10) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x128);
      (**(code **)(*plVar1 + 0x120))(plVar1,param_2,param_3,local_res20);
    }
    else {
      cVar2 = FUN_004113d0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x128),&PTR_FUN_00b0b6e8)
      ;
      if (cVar2 == '\0') {
        cVar2 = FUN_004113d0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x128),
                             &PTR_FUN_00b0bbb8);
        if (cVar2 == '\0') {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x128);
          (**(code **)(*plVar1 + 0x120))(plVar1,param_2,param_3,local_res20);
        }
        else {
          FUN_00b0c820(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x128),param_2,param_3,
                       local_res20);
        }
      }
      else {
        FUN_00b0c3d0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x128),param_2,param_3,
                     local_res20);
      }
    }
  }
  FUN_00414480(&local_c8);
  FUN_00414560(&local_c0,4);
  FUN_0041b800(&local_a0);
  FUN_0041b800(&local_98);
  FUN_0041b800(&local_90);
  FUN_00414560(&local_88,4);
  FUN_0041b800(&local_68);
  FUN_0041b800(&local_60);
  FUN_00414480(&local_58);
  FUN_00414480(local_50);
  FUN_00417840(&local_40,&LAB_00b9fca0,2);
  FUN_00414560(&local_30,3);
  FUN_00414480(&local_res20);
  return;
}

