/* Ghidra address: 014e3bf0 */
/* Ghidra symbol: FUN_014e3bf0 */


void FUN_014e3bf0(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined6 uVar7;
  bool bVar8;
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
  undefined **local_40 [2];
  undefined1 *local_30 [2];
  
  local_a8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_70 = 0;
  local_50 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40[0] = (undefined **)0x0;
  if ((*(longlong *)(param_2 + 0x20) == 0) &&
     (iVar4 = FUN_00414f50(*(undefined8 *)(param_2 + 0x10),&DAT_014e41cc,
                           (ulonglong)**(byte **)(param_2 + 0x10) + 1), iVar4 == 0)) {
    cVar1 = *(char *)(*(longlong *)(param_2 + 8) + 1);
    if (cVar1 == 'V') {
      *(char *)(param_1[0x1ce] + 0x9ac) = *(char *)(param_2 + 0x32) + '\x01';
    }
    else if (cVar1 == 'I') {
      *(char *)(param_1[0x1ce] + 0x9ad) = *(char *)(param_2 + 0x32) + '\x01';
    }
  }
  else {
    lVar6 = *(longlong *)(param_2 + 8);
    uVar7 = (undefined6)((ulonglong)lVar6 >> 0x10);
    if (*(char *)(lVar6 + 1) == 'V') {
      plVar5 = (longlong *)FUN_014db750(CONCAT62(uVar7,5));
    }
    else if (*(char *)(lVar6 + 1) == 'I') {
      plVar5 = (longlong *)FUN_014db750(CONCAT62(uVar7,6));
    }
    else {
      FUN_004169a0(local_40,lVar6);
      if (local_40[0] == &PTR_DAT_014e41dc) {
        bVar8 = true;
      }
      else if (local_40[0] == (undefined **)0x0) {
        bVar8 = false;
      }
      else {
        iVar4 = FUN_0043e420(local_40[0],&PTR_DAT_014e41dc);
        bVar8 = iVar4 == 0;
      }
      if (bVar8) {
        plVar5 = (longlong *)FUN_014db750(0xc5);
      }
      else {
        plVar5 = (longlong *)FUN_014db750(4);
      }
    }
    lVar6 = *(longlong *)(param_2 + 0x20);
    if (lVar6 == 0) {
      lVar6 = *(longlong *)(param_2 + 0x18);
      if (lVar6 == 0) {
        if (*(longlong *)(param_2 + 0x28) == 0) {
          FUN_004154b0(&local_b0,*(undefined8 *)(param_2 + 8),0);
          FUN_004154b0(&local_b8,*(undefined8 *)(param_2 + 0x10),0);
          FUN_00415980(&local_a8,3,local_b0,&LAB_014e41f0,local_b8);
          FUN_00416880(&local_c0,local_a8);
          FUN_017bf050(plVar5,0,local_c0);
        }
        else {
          FUN_004169a0(&local_a0,*(longlong *)(param_2 + 0x28));
          FUN_017bf050(plVar5,0,local_a0);
        }
      }
      else if (*(longlong *)(param_2 + 0x28) == 0) {
        FUN_004154b0(&local_80,*(undefined8 *)(param_2 + 8),0);
        FUN_004154b0(&local_88,*(undefined8 *)(param_2 + 0x10),0);
        FUN_004154b0(&local_90,lVar6,0);
        FUN_00415980(&local_78,5,local_80,&LAB_014e41f0,local_88,&LAB_014e41f0,local_90);
        FUN_00416880(&local_98,local_78);
        FUN_017bf050(plVar5,0,local_98);
      }
      else {
        FUN_004169a0(&local_70,*(longlong *)(param_2 + 0x28));
        FUN_017bf050(plVar5,0,local_70);
      }
    }
    else if (*(longlong *)(param_2 + 0x28) == 0) {
      FUN_004154b0(&local_58,*(undefined8 *)(param_2 + 8),0);
      FUN_004154b0(&local_60,lVar6,0);
      FUN_00415980(&local_50,3,local_58,&LAB_014e41f0,local_60);
      FUN_00416880(&local_68,local_50);
      FUN_017bf050(plVar5,0,local_68);
    }
    else {
      FUN_004169a0(&local_48,*(longlong *)(param_2 + 0x28));
      FUN_017bf050(plVar5,0,local_48);
    }
    (**(code **)(*plVar5 + 0x208))(plVar5,0,param_3,0);
    sVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (sVar2 != 4) {
      (**(code **)(*plVar5 + 0x208))(plVar5,1,param_4,0);
    }
    uVar3 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
    lVar6 = FUN_00409570(uVar3);
    plVar5[0x18] = lVar6;
    FUN_01d38290(plVar5,1);
    sVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (sVar2 == 4) {
      (**(code **)(*plVar5 + 0x2d0))(plVar5,0,local_30);
      *local_30[0] = 2;
    }
    (**(code **)(*param_1 + 0x20))(param_1,plVar5);
  }
  FUN_00414480(&local_c0);
  FUN_00414590(&local_b8,3);
  FUN_00414560(&local_a0,2);
  FUN_00414590(&local_90,4);
  FUN_00414560(&local_70,2);
  FUN_00414590(&local_60,3);
  FUN_00414560(&local_48,2);
  return;
}

