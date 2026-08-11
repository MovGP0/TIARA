/* Ghidra address: 00954fd0 */
/* Ghidra symbol: FUN_00954fd0 */


longlong * FUN_00954fd0(longlong *param_1,longlong *param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *local_88;
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
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  if (param_2 == (longlong *)0x0) {
    uVar4 = FUN_0044d490(&PTR_FUN_009013a8,1,L"Not supported error.");
    FUN_004134c0(uVar4);
  }
  bVar1 = (**(code **)(*param_2 + 0x168))(param_2);
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      (**(code **)(*param_2 + 0xe8))(param_2,&local_70);
      local_88 = (longlong *)FUN_00953c10(&PTR_FUN_0090d088,1,param_1,local_70);
      goto code_r0x0095574b;
    }
    if (bVar1 == 1) {
      if ((char)param_2[8] == '\0') {
        uVar4 = FUN_004113f0(param_1,&PTR_FUN_0090eed0);
        (**(code **)(*param_2 + 0xe8))(param_2,&local_68);
        local_88 = (longlong *)FUN_00950fb0(&PTR_FUN_0090a420,1,uVar4,local_68);
        puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x100))(param_2);
        iVar3 = (**(code **)*puVar7)();
        iVar10 = 0;
        if (-1 < iVar3 + -1) {
          do {
            plVar5 = (longlong *)(**(code **)(*param_2 + 0x100))(param_2);
            plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,iVar10);
            cVar2 = (**(code **)(*plVar5 + 0x2d8))(plVar5);
            if (cVar2 != '\0') {
              uVar4 = (**(code **)(*param_1 + 0x330))(param_1,plVar5,1);
              plVar5 = (longlong *)FUN_004113f0(local_88,&PTR_FUN_0090a420);
              uVar4 = FUN_004113f0(uVar4,&PTR_FUN_00909bd0);
              (**(code **)(*plVar5 + 0x338))(plVar5,uVar4);
            }
            iVar10 = iVar10 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
        uVar4 = FUN_004113f0(param_1,&PTR_FUN_0090f580);
        (**(code **)(*param_2 + 0x150))(param_2,&local_58);
        (**(code **)(*param_2 + 0xe8))(param_2,&local_60);
        local_88 = (longlong *)FUN_009511a0(&PTR_FUN_0090a420,1,uVar4,local_58,local_60);
        puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x100))(param_2);
        iVar3 = (**(code **)*puVar7)();
        iVar10 = 0;
        if (-1 < iVar3 + -1) {
          do {
            plVar5 = (longlong *)(**(code **)(*param_2 + 0x100))(param_2);
            plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,iVar10);
            cVar2 = (**(code **)(*plVar5 + 0x2d8))(plVar5);
            if (cVar2 != '\0') {
              uVar4 = (**(code **)(*param_1 + 0x330))(param_1,plVar5,1);
              plVar5 = (longlong *)FUN_004113f0(local_88,&PTR_FUN_0090a420);
              uVar4 = FUN_004113f0(uVar4,&PTR_FUN_00909bd0);
              (**(code **)(*plVar5 + 0x340))(plVar5,uVar4);
            }
            iVar10 = iVar10 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      if (param_3 != '\0') {
        puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x110))(param_2);
        iVar3 = (**(code **)*puVar7)();
        iVar10 = 0;
        if (-1 < iVar3 + -1) {
          do {
            plVar5 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2);
            uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,iVar10);
            uVar4 = (**(code **)(*param_1 + 0x330))(param_1,uVar4,1);
            (**(code **)(*local_88 + 0x1b0))(local_88,uVar4);
            iVar10 = iVar10 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      goto code_r0x0095574b;
    }
    if (bVar1 == 2) {
      if ((char)param_2[8] == '\0') {
        uVar4 = FUN_004113f0(param_1,&PTR_FUN_0090eed0);
        (**(code **)(*param_2 + 0xe8))(param_2,&local_40);
        local_88 = (longlong *)FUN_0094fe80(&PTR_FUN_00909bd0,1,uVar4,local_40,1);
      }
      else {
        uVar4 = FUN_004113f0(param_1,&PTR_FUN_0090f580);
        (**(code **)(*param_2 + 0x150))(param_2,&local_30);
        (**(code **)(*param_2 + 0xe8))(param_2,&local_38);
        local_88 = (longlong *)FUN_00950030(&PTR_FUN_00909bd0,1,uVar4,local_30,local_38,1);
      }
      FUN_00414b90(local_88 + 0xb,param_2[0xb]);
      goto code_r0x0095574b;
    }
    if (bVar1 == 3) {
      local_88 = (longlong *)FUN_009530f0(&PTR_FUN_0090b468,1,param_1);
      plVar5 = (longlong *)FUN_004113f0(local_88,&PTR_FUN_0090b468);
      plVar6 = (longlong *)FUN_004113f0(param_2,&PTR_FUN_0090b468);
      (**(code **)(*plVar6 + 0x2b8))(plVar6,&local_80);
      (**(code **)(*plVar5 + 0x2c0))(plVar5,local_80);
      lVar8 = FUN_004113f0(param_2,&PTR_FUN_0090b468);
      lVar9 = FUN_004113f0(local_88,&PTR_FUN_0090b468);
      *(undefined1 *)(lVar9 + 0x80) = *(undefined1 *)(lVar8 + 0x80);
      goto code_r0x0095574b;
    }
    if (bVar1 == 4) {
      local_88 = (longlong *)FUN_00953870(&PTR_FUN_0090c3b8,1,param_1);
      plVar5 = (longlong *)FUN_004113f0(local_88,&PTR_FUN_0090c3b8);
      plVar6 = (longlong *)FUN_004113f0(param_2,&PTR_FUN_0090c3b8);
      (**(code **)(*plVar6 + 0x2b8))(plVar6,&local_48);
      (**(code **)(*plVar5 + 0x2c0))(plVar5,local_48);
      goto code_r0x0095574b;
    }
  }
  else {
    if (bVar1 == 6) {
      plVar5 = (longlong *)FUN_004113f0(param_2,&PTR_FUN_0090be88);
      local_88 = (longlong *)FUN_009535d0(&PTR_FUN_0090be88,1,param_1,plVar5[0x10]);
      plVar6 = (longlong *)FUN_004113f0(local_88,&PTR_FUN_0090be88);
      (**(code **)(*plVar5 + 0x2c0))(plVar5,&local_78);
      (**(code **)(*plVar6 + 0x2c8))(plVar6,local_78);
      goto code_r0x0095574b;
    }
    if (bVar1 == 7) {
      local_88 = (longlong *)FUN_009534b0(&PTR_FUN_0090ba08,1,param_1);
      plVar5 = (longlong *)FUN_004113f0(local_88,&PTR_FUN_0090ba08);
      plVar6 = (longlong *)FUN_004113f0(param_2,&PTR_FUN_0090ba08);
      (**(code **)(*plVar6 + 0x2b8))(plVar6,&local_50);
      (**(code **)(*plVar5 + 0x2c0))(plVar5,local_50);
      goto code_r0x0095574b;
    }
    if (bVar1 == 9) {
      local_88 = (longlong *)FUN_00953db0(&PTR_FUN_0090d520,1,param_1);
      if (param_3 != '\0') {
        puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x110))(param_2);
        iVar3 = (**(code **)*puVar7)();
        iVar10 = 0;
        if (-1 < iVar3 + -1) {
          do {
            plVar5 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2);
            uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,iVar10);
            uVar4 = (**(code **)(*param_1 + 0x330))(param_1,uVar4,1);
            (**(code **)(*local_88 + 0x1b0))(local_88,uVar4);
            iVar10 = iVar10 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      goto code_r0x0095574b;
    }
  }
  uVar4 = FUN_0044d490(&PTR_FUN_009013a8,1,L"Not supported error.");
  FUN_004134c0(uVar4);
code_r0x0095574b:
  FUN_004145c0(&local_80,0xb);
  return local_88;
}

