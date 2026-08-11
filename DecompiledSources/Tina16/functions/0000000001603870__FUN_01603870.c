/* Ghidra address: 01603870 */
/* Ghidra symbol: FUN_01603870 */


void FUN_01603870(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,char param_5)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  undefined8 local_res10 [3];
  ulonglong uVar12;
  int local_4b0;
  int local_4ac;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined1 local_498 [256];
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined1 local_380;
  undefined2 local_37f;
  undefined2 local_356;
  undefined2 local_32d;
  undefined2 local_304;
  undefined1 local_2db [411];
  undefined8 local_140;
  undefined1 local_138 [256];
  undefined8 local_38;
  undefined8 local_30;
  
  local_4a8 = 0;
  local_4a0 = 0;
  local_398 = 0;
  local_390 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (param_4 == 1) {
    FUN_015fcd70(&local_390,local_res10[0]);
    FUN_00416cd0(&local_30,3,local_390,&DAT_01603d90,L"result.txt");
    lVar8 = *(longlong *)PTR_DAT_020027c0;
  }
  else {
    FUN_015fcd70(&local_398,local_res10[0]);
    FUN_00416cd0(&local_30,3,local_398,&DAT_01603d90,L"result_ex.txt");
    lVar8 = *(longlong *)PTR_DAT_020037b0;
  }
  if (lVar8 != 0) {
    lVar7 = FUN_00f7f270(&DAT_00f7ec38,1);
    FUN_00f7f200(lVar7,local_30,2);
    bVar2 = false;
    bVar3 = false;
    cVar4 = FUN_019a1640(param_1,4);
    cVar5 = FUN_00f80160(lVar7,param_3,0);
    if (cVar5 != '\0') {
      cVar5 = FUN_00f7fa00(lVar7);
      if (cVar5 != '\0') {
        bVar2 = true;
        FUN_015ffe20(lVar7,lVar8,param_4);
        if (param_4 == 1) {
          if (param_5 == '\0') {
            FUN_013d39a0(*(undefined8 *)PTR_DAT_020027c0);
          }
          else {
            lVar8 = FUN_010e1630(5,0,0,param_1);
            if (lVar8 != 0) {
              uVar9 = FUN_0065b870(lVar8);
              thunk_FUN_041b2403(uVar9,0x534,0,0);
            }
          }
        }
      }
      cVar5 = FUN_00f7fab0(lVar7);
      if ((cVar5 != '\0') && (param_4 == 1)) {
        FUN_00414b50(&local_38,L"Data");
        bVar3 = true;
        FUN_010cd100(&local_380);
        local_380 = 0;
        local_37f = 0x7301;
        local_356 = 0x5601;
        local_32d = 0x7401;
        local_304 = 0x5501;
        FUN_00416910(local_498,local_38,0xff);
        FUN_00415020(local_2db,local_498,0x28);
        uVar12 = 0;
        lVar8 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,0xb,0,0);
        iVar1 = *(int *)(*(longlong *)(lVar7 + 8) + 0x10);
        local_4b0 = 0;
        local_4ac = 0;
        while (local_4b0 <= iVar1 + -1) {
          lVar10 = FUN_00f81cc0(*(undefined8 *)(lVar7 + 8),local_4b0);
          FUN_00f81530(lVar10,&local_4a0,local_4b0);
          FUN_00416910(local_138,local_4a0,0xff);
          local_4b0 = local_4b0 + 1;
          iVar6 = FUN_00416db0(*(undefined8 *)(lVar10 + 0x18),&DAT_01603e04);
          if ((iVar6 != 0) &&
             (iVar6 = FUN_00416db0(*(undefined8 *)(lVar10 + 0x18),&DAT_01603e14), iVar6 != 0)) {
            uVar12 = uVar12 & 0xffffffffffffff00;
            FUN_01cc2930(*(undefined8 *)(lVar8 + 8),local_38,3,0,uVar12,0,1,0);
            iVar6 = *(int *)(*(longlong *)(lVar10 + 0x30) + 0x10);
            iVar11 = 0;
            if (-1 < iVar6 + -1) {
              do {
                FUN_00f81850(lVar10,iVar11,&local_140);
                FUN_01cc4620(lVar8,local_140);
                FUN_01cc46b0(lVar8,local_4ac,local_388);
                iVar11 = iVar11 + 1;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
            local_4ac = local_4ac + 1;
          }
        }
        local_380 = 0;
        FUN_013ddd60(&local_380,lVar8);
      }
    }
    if (((!bVar2) && (!bVar3)) && (param_4 == 1)) {
      if (cVar4 == '\0') {
        uVar9 = FUN_00b89270();
        FUN_00b8e520(uVar9,&local_4a8,0x106);
        FUN_016fd9b0(local_4a8,0x1582);
      }
      else {
        FUN_016fd940(L"No result, Possible reason: analysis time is too short");
      }
    }
    FUN_00410f20(lVar7);
  }
  FUN_00414560(&local_4a8,2);
  FUN_00414560(&local_398,2);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_res10);
  return;
}

