/* Ghidra address: 01c95bb0 */
/* Ghidra symbol: FUN_01c95bb0 */


void FUN_01c95bb0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  ulonglong in_stack_fffffffffffffe70;
  ulonglong in_stack_fffffffffffffe78;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
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
  longlong *local_30 [2];
  
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_118 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_120 = 0;
  local_f0 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_78 = 0;
  local_50 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_30[0] = (longlong *)0x0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  iVar6 = 0;
  while( true ) {
    iVar5 = FUN_007e2ef0(*(undefined8 *)(param_1 + 0xff0));
    if (iVar5 <= iVar6) break;
    lVar7 = FUN_007e2f10(*(undefined8 *)(param_1 + 0xff0),iVar6);
    if (*(char *)(lVar7 + 0x80) != '\0') break;
    iVar6 = iVar6 + 1;
  }
  plVar1 = *(longlong **)(param_1 + 0xb40);
  FUN_00414ad0(plVar1 + 0x20,&DAT_01c96770);
  FUN_00724270(plVar1,&local_58);
  FUN_00441640(&local_50,local_58);
  FUN_00441920(&local_68,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
  FUN_00416ba0(&local_70,&DAT_01c96784,plVar1[0x20]);
  FUN_004414c0(&local_60,local_68,local_70);
  FUN_00416ad0(&local_50,local_60);
  FUN_00724380(plVar1,local_50);
  FUN_00414ad0(plVar1 + 0x1c,L"PCB File|*.NET");
  *(undefined4 *)(plVar1 + 0x1d) = 1;
  if (iVar6 < 5) {
    if (iVar6 == 4) {
      cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
      if (cVar2 != '\0') {
        FUN_00724270(plVar1,&local_e8);
        FUN_01b41bc0(local_e8,*(undefined8 *)(param_1 + 0x2788),5,0,0,
                     in_stack_fffffffffffffe70 & 0xffffffffffffff00,&PTR_DAT_01c967c0);
      }
    }
    else if (iVar6 == 0) {
      cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
      if (cVar2 != '\0') {
        FUN_00724270(plVar1,&local_78);
        FUN_01b41bc0(local_78,*(undefined8 *)(param_1 + 0x2788),7,0,0,
                     in_stack_fffffffffffffe70 & 0xffffffffffffff00,&PTR_DAT_01c967c0);
      }
    }
    else if (iVar6 == 1) {
      cVar2 = FUN_01b23030();
      if (cVar2 == '\0') {
        FUN_00414ad0(plVar1 + 0x20,&DAT_01c967d4);
        FUN_00724270(plVar1,&local_88);
        FUN_00441640(&local_80,local_88);
        FUN_00441920(&local_98,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
        FUN_00416ba0(&local_a0,&DAT_01c96784,plVar1[0x20]);
        FUN_004414c0(&local_90,local_98,local_a0);
        FUN_00416ad0(&local_80,local_90);
        FUN_00724380(plVar1,local_80);
        FUN_00414b50(&local_48,plVar1[0x1c]);
        FUN_00414ad0(plVar1 + 0x1c,L"Altium PCB project|*.ZIP");
        *(undefined4 *)(plVar1 + 0x1d) = 1;
        cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
        if (cVar2 != '\0') {
          uVar11 = 0;
          FUN_00416cd0(&local_a8,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_01c96828,L"altium.dll");
          cVar2 = FUN_01bc47d0(local_a8);
          if (cVar2 != '\0') {
            FUN_00bac3d0(local_30);
            (**(code **)(*local_30[0] + 0x118))(local_30[0],0);
            lVar7 = *(longlong *)(param_1 + 0x2788);
            FUN_00417c40(lVar7 + 0x492,PTR_DAT_02004010,&DAT_01d0d0b8);
            FUN_0128ee00(&local_b0,lVar7,local_30[0],*PTR_DAT_02002480 == '\0',CONCAT44(uVar11,7),
                         &PTR_DAT_01c967c0,in_stack_fffffffffffffe78 & 0xffffffffffffff00,0,0,0,0);
            (**(code **)(*local_30[0] + 0xf0))(local_30[0],&local_b8);
            uVar8 = FUN_00416740(local_b8);
            FUN_00724270(plVar1,&local_c8);
            FUN_00441920(&local_c0,local_c8);
            uVar9 = FUN_00416740(local_c0);
            FUN_00724270(plVar1,&local_d0);
            uVar10 = FUN_00416740(local_d0);
            iVar6 = (**(code **)PTR_DAT_02004308)(uVar8,uVar9,uVar10);
            if ((iVar6 < 0xb) && (0 < iVar6)) {
              FUN_00414b50(&local_40,*(undefined8 *)(PTR_PTR_02003d08 + (longlong)iVar6 * 8));
              FUN_016fd940(local_40);
            }
          }
        }
        FUN_00414ad0(plVar1 + 0x1c,local_48);
      }
    }
    else if (iVar6 == 2) {
      cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
      if (cVar2 != '\0') {
        FUN_00724270(plVar1,&local_d8);
        FUN_01b41bc0(local_d8,*(undefined8 *)(param_1 + 0x2788),1,0,0,
                     in_stack_fffffffffffffe70 & 0xffffffffffffff00,&PTR_DAT_01c967c0);
      }
    }
    else if (iVar6 == 3) {
      cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
      if (cVar2 != '\0') {
        FUN_00724270(plVar1,&local_e0);
        FUN_01b41bc0(local_e0,*(undefined8 *)(param_1 + 0x2788),4,0,0,
                     in_stack_fffffffffffffe70 & 0xffffffffffffff00,&PTR_DAT_01c967c0);
      }
    }
  }
  else if (iVar6 == 5) {
    FUN_00414ad0(plVar1 + 0x20,&DAT_01c9685c);
    FUN_00724270(plVar1,&local_f8);
    FUN_00441640(&local_f0,local_f8);
    FUN_00441920(&local_108,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
    FUN_00416ba0(&local_110,&DAT_01c96784,plVar1[0x20]);
    FUN_004414c0(&local_100,local_108,local_110);
    FUN_00416ad0(&local_f0,local_100);
    FUN_00724380(plVar1,local_f0);
    FUN_00414ad0(plVar1 + 0x1c,L"PCB File(*.NET)|*.NET|Orcad CMP (*.CMP)|*.CMP");
    *(undefined4 *)(plVar1 + 0x1d) = 2;
    bVar3 = (**(code **)(*plVar1 + 0xa8))(plVar1);
    if (bVar3 != 0) {
      FUN_00414ad0(plVar1 + 0x20,&DAT_01c96770);
    }
    FUN_00724270(plVar1,&local_120);
    FUN_00441640(&local_118,local_120);
    FUN_00441920(&local_130,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
    FUN_00416ba0(&local_138,&DAT_01c96784,plVar1[0x20]);
    FUN_004414c0(&local_128,local_130,local_138);
    FUN_00416ad0(&local_118,local_128);
    FUN_00724380(plVar1,local_118);
    *(undefined4 *)(plVar1 + 0x1d) = 1;
    bVar4 = (**(code **)(*plVar1 + 0xa8))(plVar1);
    if ((bVar4 & bVar3) != 0) {
      FUN_00724270(plVar1,&local_140);
      FUN_01b41bc0(local_140,*(undefined8 *)(param_1 + 0x2788),3,0,0,
                   in_stack_fffffffffffffe70 & 0xffffffffffffff00,&PTR_DAT_01c967c0);
    }
  }
  else if (iVar6 == 6) {
    cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
    if (cVar2 != '\0') {
      FUN_00724270(plVar1,&local_148);
      FUN_01b41bc0(local_148,*(undefined8 *)(param_1 + 0x2788),2,0,0,
                   in_stack_fffffffffffffe70 & 0xffffffffffffff00,&PTR_DAT_01c967c0);
    }
  }
  else if (iVar6 == 7) {
    cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
    if (cVar2 != '\0') {
      FUN_00724270(plVar1,&local_150);
      FUN_01b41bc0(local_150,*(undefined8 *)(param_1 + 0x2788),6,0,0,
                   in_stack_fffffffffffffe70 & 0xffffffffffffff00,&PTR_DAT_01c967c0);
    }
  }
  FUN_00414560(&local_150,3);
  FUN_00414560(&local_138,3);
  FUN_00414480(&local_120);
  FUN_00414560(&local_118,4);
  FUN_00414480(&local_f8);
  FUN_00414480(&local_f0);
  FUN_00414560(&local_e8,5);
  FUN_00414560(&local_c0,2);
  FUN_0041b800(&local_b0);
  FUN_00414560(&local_a8,4);
  FUN_00414480(&local_88);
  FUN_00414480(&local_80);
  FUN_00414480(&local_78);
  FUN_00414560(&local_70,3);
  FUN_00414480(&local_58);
  FUN_00414560(&local_50,4);
  FUN_0041b800(local_30);
  return;
}

