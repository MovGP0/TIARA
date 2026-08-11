/* Ghidra address: 011162c0 */
/* Ghidra symbol: FUN_011162c0 */


void FUN_011162c0(undefined8 param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int local_1a8;
  int local_1a4;
  int local_18c;
  undefined1 local_168 [256];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  bVar2 = false;
  iVar6 = FUN_004d3e30(*(undefined8 *)PTR_DAT_02004030);
  local_1a8 = 1;
  bVar3 = false;
  if (0 < iVar6) {
    do {
      bVar2 = bVar3;
      uVar10 = FUN_004d3de0(*(undefined8 *)PTR_DAT_02004030,local_1a8 + -1);
      cVar4 = FUN_004113d0(uVar10,&PTR_FUN_01a69da8);
      if (cVar4 != '\0') {
        bVar2 = true;
      }
      local_1a8 = local_1a8 + 1;
      iVar6 = iVar6 + -1;
      bVar3 = bVar2;
    } while (iVar6 != 0);
  }
  if (bVar2) {
    lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
    iVar6 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x28))();
    local_1a8 = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar10 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x30))
                           (*(longlong **)(lVar1 + 0x10),local_1a8);
        cVar4 = FUN_004113d0(uVar10,&PTR_FUN_01ac9770);
        if (cVar4 != '\0') {
          uVar10 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x30))
                             (*(longlong **)(lVar1 + 0x10),local_1a8);
          lVar11 = FUN_004113f0(uVar10,&PTR_FUN_01ac9770);
          iVar7 = (**(code **)(**(longlong **)(lVar11 + 0xd8) + 0x28))();
          local_1a4 = 0;
          if (-1 < iVar7 + -1) {
            do {
              uVar10 = (**(code **)(**(longlong **)(lVar11 + 0xd8) + 0x30))
                                 (*(longlong **)(lVar11 + 0xd8),local_1a4);
              lVar12 = FUN_004113f0(uVar10,&DAT_01cdd500);
              iVar8 = (**(code **)(**(longlong **)(lVar12 + 0x80) + 0x28))();
              local_18c = 0;
              if (-1 < iVar8 + -1) {
                do {
                  uVar10 = (**(code **)(**(longlong **)(lVar12 + 0x80) + 0x30))
                                     (*(longlong **)(lVar12 + 0x80),local_18c);
                  cVar4 = FUN_004113d0(uVar10,&PTR_FUN_01aae560);
                  if (cVar4 != '\0') {
                    uVar10 = (**(code **)(**(longlong **)(lVar12 + 0x80) + 0x30))
                                       (*(longlong **)(lVar12 + 0x80),local_18c);
                    lVar13 = FUN_004113f0(uVar10,&PTR_FUN_01aae560);
                    FUN_01cc0ae0(*(undefined8 *)(lVar13 + 0xe0),&local_30);
                    iVar9 = FUN_004170c0(&DAT_01116794,local_30,1);
                    if (0 < iVar9) {
                      FUN_00416dc0(&local_30,local_30,1,iVar9 + -1);
                    }
                    if (local_30 == 0) {
                      FUN_00416cd0(&local_30,3,0,L"Noname",local_40);
                    }
                    FUN_00416ba0(&local_40,&DAT_011167c0,local_30);
                    (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x18))
                              (*(longlong **)(lVar1 + 0x10),local_50,local_1a8);
                    FUN_00416ba0(&local_38,local_50[0],local_40);
                    FUN_01116080(&local_58,local_38);
                    FUN_00414b50(&local_38,local_58);
                    FUN_00450070(&local_60,local_38,&DAT_011167d0,&DAT_011167c0,1);
                    FUN_00414b50(&local_38,local_60);
                    FUN_00450070(&local_68,local_38,&LAB_011167e8,&DAT_011167c0,1);
                    FUN_00414b50(&local_38,local_68);
                    uVar5 = FUN_01116180(*(undefined8 *)(lVar13 + 200));
                    FUN_00416910(local_168,local_38,0xff);
                    FUN_013b35d0(param_1,local_168,*(undefined8 *)(lVar13 + 0xe0),
                                 *(undefined8 *)(lVar13 + 200),*(undefined8 *)(lVar13 + 0xd0),uVar5)
                    ;
                  }
                  local_18c = local_18c + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_1a4 = local_1a4 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        local_1a8 = local_1a8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  FUN_00414560(&local_68,4);
  FUN_00414560(&local_40,3);
  return;
}

