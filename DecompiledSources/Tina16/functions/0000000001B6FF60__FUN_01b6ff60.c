/* Ghidra address: 01b6ff60 */
/* Ghidra symbol: FUN_01b6ff60 */


char FUN_01b6ff60(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar13;
  int local_84;
  char local_71;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  byte local_41;
  longlong local_40 [3];
  undefined7 uVar12;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40[2] = 0;
  local_40[1] = 0;
  local_40[0] = 0;
  local_71 = '\0';
  if ((param_2 != (longlong *)0x0) &&
     (cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x9d8),&PTR_FUN_010db178), cVar2 != '\0')) {
    if (*(longlong *)(param_1 + 0x8c8) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_019ac2d0(*(longlong *)(param_1 + 0x8c8),param_2);
    }
    (**(code **)(*param_2 + 0x288))(param_2,local_40);
    if (local_40[0] == 0) {
      FUN_0043f750(&local_50,uVar4);
      FUN_00416ba0(local_40,L"no_label_",local_50);
    }
    uVar4 = (**(code **)(*param_2 + 0x210))(param_2,0);
    uVar5 = (**(code **)(*param_2 + 0x210))(param_2,1);
    lVar10 = 0;
    plVar7 = (longlong *)FUN_004113f0(*(undefined8 *)(param_1 + 0x9d8),&PTR_FUN_010db178);
    lVar1 = *plVar7;
    (**(code **)(lVar1 + 0xa0))(plVar7,&local_41);
    uVar12 = (undefined7)((ulonglong)lVar1 >> 8);
    uVar11 = CONCAT71(uVar12,1);
    uVar8 = (ulonglong)local_41;
    if (uVar8 < 5) {
      if (uVar8 == 4) {
        uVar11 = CONCAT71(uVar12,3);
      }
      else if (uVar8 < 2) {
        uVar11 = CONCAT71(uVar12,1);
      }
      else if (uVar8 - 2 < 2) {
        uVar11 = CONCAT71(uVar12,2);
      }
    }
    else if (uVar8 == 5) {
      uVar11 = CONCAT71(uVar12,1);
    }
    else if (uVar8 == 0x6c) goto LAB_01b70499;
    uVar9 = FUN_0153a250(uVar11 & 0xffffffff,param_2);
    if ((char)uVar9 == '\0') {
      if ((byte)uVar11 < 8) {
        bVar13 = ((int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1) << (byte)uVar11 & 6U) != 0;
      }
      else {
        bVar13 = false;
      }
      if (((bVar13) && (iVar6 = (**(code **)(*param_2 + 0x1c8))(param_2), iVar6 == 2)) &&
         (local_41 != 5)) {
        iVar6 = (**(code **)(*(longlong *)plVar7[1] + 0x28))((longlong *)plVar7[1]);
        local_84 = iVar6 + -1;
        uVar9 = (**(code **)(*(longlong *)plVar7[1] + 0x30))((longlong *)plVar7[1],local_84);
        lVar10 = FUN_004113f0(uVar9,&PTR_FUN_011057c0);
        *(longlong **)(lVar10 + 0x18) = param_2;
        FUN_0043f750(&local_60,uVar4);
        FUN_00416cd0(lVar10 + 0x110,4,local_40[0],&DAT_01b70568,local_60,&LAB_01b70578);
        FUN_0043f750(&local_68,uVar5);
        FUN_00416cd0(lVar10 + 0x118,4,local_40[0],&DAT_01b70568,local_68,&LAB_01b70578);
        FUN_00414ad0(lVar10 + 8,local_40[0]);
        local_71 = '\x01';
      }
    }
    else {
      local_84 = (**(code **)(*(longlong *)plVar7[1] + 0xb0))((longlong *)plVar7[1],local_40[0]);
      if (local_84 == -1) {
        FUN_00416ba0(&local_58,local_40[0],&DAT_01b70530);
        local_84 = (**(code **)(*(longlong *)plVar7[1] + 0xb0))((longlong *)plVar7[1],local_58);
      }
      if (local_84 == -1) {
        iVar6 = (**(code **)(*(longlong *)plVar7[1] + 0x28))((longlong *)plVar7[1]);
        local_84 = iVar6 + -1;
        uVar9 = (**(code **)(*(longlong *)plVar7[1] + 0x30))((longlong *)plVar7[1],local_84);
        lVar10 = FUN_004113f0(uVar9,&PTR_FUN_011057c0);
        *(longlong **)(lVar10 + 0x18) = param_2;
      }
      else {
        uVar9 = (**(code **)(*(longlong *)plVar7[1] + 0x30))((longlong *)plVar7[1],local_84);
        lVar10 = FUN_004113f0(uVar9,&PTR_FUN_011057c0);
      }
      sVar3 = (**(code **)(*param_2 + 0xf8))(param_2);
      if (sVar3 == 4) {
        FUN_00414ad0(lVar10 + 0x110,local_40[0]);
        FUN_00414ad0(lVar10 + 0x118,&DAT_01b70540);
      }
      else {
        FUN_00416ba0(lVar10 + 0x110,local_40[0],&DAT_01b70530);
        FUN_00416ba0(lVar10 + 0x118,local_40[0],&DAT_01b70554);
      }
      FUN_00414ad0(lVar10 + 8,local_40[0]);
      local_71 = '\x01';
    }
    if ((local_71 != '\0') && (lVar10 != 0)) {
      (**(code **)(*(longlong *)plVar7[1] + 0x40))
                ((longlong *)plVar7[1],local_84,*(undefined8 *)(lVar10 + 0x110));
      (**(code **)(*(longlong *)plVar7[1] + 0x48))((longlong *)plVar7[1],local_84,lVar10);
      iVar6 = FUN_00416db0(*(undefined8 *)(lVar10 + 0x118),&DAT_01b70540);
      if (iVar6 == 0) {
        iVar6 = (**(code **)(*(longlong *)plVar7[0xc] + 0xc0))((longlong *)plVar7[0xc],lVar10);
        if (iVar6 != -1) {
          (**(code **)(*(longlong *)plVar7[0xc] + 0x98))((longlong *)plVar7[0xc],iVar6);
        }
        iVar6 = (**(code **)(*(longlong *)plVar7[0xc] + 0xb0))
                          ((longlong *)plVar7[0xc],&DAT_01b70540);
        if (iVar6 == -1) {
          (**(code **)(*(longlong *)plVar7[0xc] + 0x80))((longlong *)plVar7[0xc],&DAT_01b70540,0);
        }
      }
      else {
        iVar6 = (**(code **)(*(longlong *)plVar7[0xc] + 0xc0))((longlong *)plVar7[0xc],lVar10);
        if (iVar6 == -1) {
          (**(code **)(*(longlong *)plVar7[0xc] + 0x80))
                    ((longlong *)plVar7[0xc],*(undefined8 *)(lVar10 + 0x118),lVar10);
        }
        else {
          (**(code **)(*(longlong *)plVar7[0xc] + 0x48))((longlong *)plVar7[0xc],iVar6,lVar10);
          (**(code **)(*(longlong *)plVar7[0xc] + 0x40))
                    ((longlong *)plVar7[0xc],iVar6,*(undefined8 *)(lVar10 + 0x118));
        }
      }
      (**(code **)(*plVar7 + 0x58))(plVar7,local_84);
      FUN_01b6dfd0(param_1,0);
    }
  }
LAB_01b70499:
  FUN_00414560(&local_68,4);
  FUN_00414560(local_40,3);
  return local_71;
}

