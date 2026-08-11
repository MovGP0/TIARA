/* Ghidra address: 00976da0 */
/* Ghidra symbol: FUN_00976da0 */


void FUN_00976da0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined7 uVar11;
  undefined1 uVar12;
  int iVar13;
  longlong unaff_R14;
  bool bVar14;
  short local_72;
  undefined8 local_68;
  undefined8 local_60;
  char local_51;
  short *local_50;
  short *local_48;
  short *local_40 [2];
  
  local_68 = 0;
  local_60 = 0;
  local_40[0] = (short *)0x0;
  local_48 = (short *)0x0;
  local_50 = (short *)0x0;
  FUN_00947610(&local_50,param_3);
  uVar3 = 0;
  if (local_50 != (short *)0x0) {
    uVar3 = *(uint *)(local_50 + -2) >> 1;
  }
  if (local_50[(longlong)(int)uVar3 + -1] == 0x3f) {
    uVar12 = 1;
    uVar3 = 0;
    if (local_50 != (short *)0x0) {
      uVar3 = *(uint *)(local_50 + -2) >> 1;
    }
    FUN_00416430(&local_48,local_50,1,uVar3 - 1);
    FUN_00414be0(&local_50,local_48);
  }
  else {
    uVar3 = 0;
    if (local_50 != (short *)0x0) {
      uVar3 = *(uint *)(local_50 + -2) >> 1;
    }
    if (local_50[(longlong)(int)uVar3 + -1] == 0x2a) {
      uVar12 = 3;
      uVar3 = 0;
      if (local_50 != (short *)0x0) {
        uVar3 = *(uint *)(local_50 + -2) >> 1;
      }
      FUN_00416430(&local_48,local_50,1,uVar3 - 1);
      FUN_00414be0(&local_50,local_48);
    }
    else {
      uVar3 = 0;
      if (local_50 != (short *)0x0) {
        uVar3 = *(uint *)(local_50 + -2) >> 1;
      }
      if (local_50[(longlong)(int)uVar3 + -1] == 0x2b) {
        uVar12 = 2;
        uVar3 = 0;
        if (local_50 != (short *)0x0) {
          uVar3 = *(uint *)(local_50 + -2) >> 1;
        }
        FUN_00416430(&local_48,local_50,1,uVar3 - 1);
        FUN_00414be0(&local_50,local_48);
      }
      else {
        uVar12 = 0;
      }
    }
  }
  uVar3 = 0;
  if (local_50 != (short *)0x0) {
    uVar3 = *(uint *)(local_50 + -2) >> 1;
  }
  if (uVar3 == 0) {
    uVar6 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Parser error.");
    FUN_004134c0(uVar6);
  }
  uVar3 = 0;
  if (local_50 != (short *)0x0) {
    uVar3 = *(uint *)(local_50 + -2) >> 1;
  }
  if (local_50[(longlong)(int)uVar3 + -1] != 0x29) {
    uVar6 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Parser error.");
    FUN_004134c0(uVar6);
  }
  FUN_00947190(local_50,&local_48,&local_51);
  if (local_51 == '\0') {
    iVar4 = FUN_00416420(local_48,0);
    if (iVar4 != 0) goto LAB_00976fac;
  }
  uVar6 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Parser error.");
  FUN_004134c0(uVar6);
LAB_00976fac:
  FUN_00414be0(&local_50,local_48);
  iVar4 = 0;
  local_72 = 0x2c;
  uVar3 = 0;
  if (local_50 != (short *)0x0) {
    uVar3 = *(uint *)(local_50 + -2) >> 1;
  }
  uVar10 = (ulonglong)uVar3;
  iVar13 = 1;
  if (uVar3 != 0) {
    uVar10 = (ulonglong)uVar3;
    do {
      iVar9 = (int)uVar10;
      if ((local_50[(longlong)iVar13 + -1] == 0x2c) && (iVar4 == 0)) {
        local_72 = 0x2c;
        break;
      }
      sVar1 = local_50[(longlong)iVar13 + -1];
      if ((sVar1 == 0x7c) && (iVar4 == 0)) {
        local_72 = 0x7c;
        break;
      }
      if (sVar1 == 0x28) {
        iVar4 = iVar4 + 1;
      }
      if (sVar1 == 0x29) {
        if (iVar4 == 0) {
          uVar6 = CONCAT71((int7)(uVar10 >> 8),1);
          iVar9 = (int)uVar6;
          uVar6 = FUN_0044d490(&PTR_FUN_00901a10,uVar6,L"Parser error.");
          FUN_004134c0(uVar6);
        }
        iVar4 = iVar4 + -1;
      }
      iVar13 = iVar13 + 1;
      uVar10 = (ulonglong)(iVar9 - 1U);
    } while (iVar9 - 1U != 0);
  }
  uVar11 = (undefined7)(uVar10 >> 8);
  if (local_72 == 0x2c) {
    if (*(char *)(param_2 + 0x10) == '\x03') {
      lVar8 = FUN_004113f0(param_2,&PTR_FUN_00911b78);
      unaff_R14 = (**(code **)(**(longlong **)(lVar8 + 0x30) + 0x10))
                            (*(longlong **)(lVar8 + 0x30),0,2);
      *(undefined1 *)(unaff_R14 + 0x2a) = uVar12;
      lVar8 = FUN_004113f0(param_2,&PTR_FUN_00911b78);
      (**(code **)**(undefined8 **)(lVar8 + 0x38))(*(undefined8 **)(lVar8 + 0x38),unaff_R14);
    }
    else if (*(char *)(param_2 + 0x10) == '\x04') {
      plVar7 = (longlong *)FUN_004113f0(param_2,&PTR_FUN_009129e0);
      unaff_R14 = (**(code **)(*plVar7 + 0x10))(plVar7,0,2);
      *(undefined1 *)(unaff_R14 + 0x2a) = uVar12;
      plVar7 = (longlong *)FUN_004113f0(param_2,&PTR_FUN_009129e0);
      (**(code **)(*plVar7 + 0x20))(plVar7,unaff_R14);
    }
    else {
      uVar6 = FUN_0044d490(&PTR_FUN_00901a10,CONCAT71(uVar11,1),L"Parser error.");
      FUN_004134c0(uVar6);
    }
  }
  else if (*(char *)(param_2 + 0x10) == '\x03') {
    lVar8 = FUN_004113f0(param_2,&PTR_FUN_00911b78);
    unaff_R14 = (**(code **)(**(longlong **)(lVar8 + 0x30) + 0x10))
                          (*(longlong **)(lVar8 + 0x30),0,0);
    *(undefined1 *)(unaff_R14 + 0x2a) = uVar12;
    lVar8 = FUN_004113f0(param_2,&PTR_FUN_00911b78);
    (**(code **)**(undefined8 **)(lVar8 + 0x38))(*(undefined8 **)(lVar8 + 0x38),unaff_R14);
  }
  else if (*(char *)(param_2 + 0x10) == '\x04') {
    plVar7 = (longlong *)FUN_004113f0(param_2,&PTR_FUN_009129e0);
    unaff_R14 = (**(code **)(*plVar7 + 0x10))(plVar7,0,0);
    *(undefined1 *)(unaff_R14 + 0x2a) = uVar12;
    plVar7 = (longlong *)FUN_004113f0(param_2,&PTR_FUN_009129e0);
    (**(code **)(*plVar7 + 0x20))(plVar7,unaff_R14);
  }
  else {
    uVar6 = FUN_0044d490(&PTR_FUN_00901a10,CONCAT71(uVar11,1),L"Parser error.");
    FUN_004134c0(uVar6);
  }
  iVar13 = 0;
  uVar3 = 1;
  iVar4 = 1;
  while( true ) {
    uVar5 = 0;
    if (local_50 != (short *)0x0) {
      uVar5 = *(uint *)(local_50 + -2) >> 1;
    }
    if ((int)uVar5 < (int)uVar3) break;
    if (local_50[(longlong)(int)uVar3 + -1] == 0x28) {
      iVar13 = iVar13 + 1;
    }
    if (local_50[(longlong)(int)uVar3 + -1] == 0x29) {
      if (iVar13 == 0) {
        uVar6 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Parser error.");
        FUN_004134c0(uVar6);
      }
      iVar13 = iVar13 + -1;
    }
    if ((local_50[(longlong)(int)uVar3 + -1] == local_72) && (iVar13 == 0)) {
      bVar14 = true;
    }
    else {
      uVar5 = 0;
      if (local_50 != (short *)0x0) {
        uVar5 = *(uint *)(local_50 + -2) >> 1;
      }
      bVar14 = uVar3 == uVar5;
    }
    if (bVar14) {
      if (0 < iVar13) {
        uVar6 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Parser error.");
        FUN_004134c0(uVar6);
      }
      uVar5 = 0;
      if (local_50 != (short *)0x0) {
        uVar5 = *(uint *)(local_50 + -2) >> 1;
      }
      if (uVar3 == uVar5) {
        FUN_00416430(&local_60,local_50,iVar4,(uVar3 - iVar4) + 1);
        FUN_00947610(local_40,local_60);
      }
      else {
        FUN_00416430(&local_68,local_50,iVar4,uVar3 - iVar4);
        FUN_00947610(local_40,local_68);
      }
      iVar4 = uVar3 + 1;
      if (*local_40[0] == 0x28) {
        (**(code **)(*param_1 + 0xa0))(param_1,unaff_R14,local_40[0]);
      }
      else {
        uVar5 = 0;
        if (local_40[0] != (short *)0x0) {
          uVar5 = *(uint *)(local_40[0] + -2) >> 1;
        }
        if (local_40[0][(longlong)(int)uVar5 + -1] == 0x3f) {
          uVar12 = 1;
          uVar5 = 0;
          if (local_40[0] != (short *)0x0) {
            uVar5 = *(uint *)(local_40[0] + -2) >> 1;
          }
          FUN_00416430(&local_48,local_40[0],1,uVar5 - 1);
          FUN_00414be0(local_40,local_48);
        }
        else {
          uVar5 = 0;
          if (local_40[0] != (short *)0x0) {
            uVar5 = *(uint *)(local_40[0] + -2) >> 1;
          }
          if (local_40[0][(longlong)(int)uVar5 + -1] == 0x2a) {
            uVar12 = 3;
            uVar5 = 0;
            if (local_40[0] != (short *)0x0) {
              uVar5 = *(uint *)(local_40[0] + -2) >> 1;
            }
            FUN_00416430(&local_48,local_40[0],1,uVar5 - 1);
            FUN_00414be0(local_40,local_48);
          }
          else {
            uVar5 = 0;
            if (local_40[0] != (short *)0x0) {
              uVar5 = *(uint *)(local_40[0] + -2) >> 1;
            }
            if (local_40[0][(longlong)(int)uVar5 + -1] == 0x2b) {
              uVar12 = 2;
              uVar5 = 0;
              if (local_40[0] != (short *)0x0) {
                uVar5 = *(uint *)(local_40[0] + -2) >> 1;
              }
              FUN_00416430(&local_48,local_40[0],1,uVar5 - 1);
              FUN_00414be0(local_40,local_48);
            }
            else {
              uVar12 = 0;
            }
          }
        }
        cVar2 = FUN_008ff6c0(local_40[0]);
        if (cVar2 == '\0') {
          uVar6 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Parser error.");
          FUN_004134c0(uVar6);
        }
        lVar8 = (**(code **)(**(longlong **)(unaff_R14 + 0x30) + 0x10))
                          (*(longlong **)(unaff_R14 + 0x30),local_40[0],1);
        *(undefined1 *)(lVar8 + 0x2a) = uVar12;
        (**(code **)**(undefined8 **)(unaff_R14 + 0x38))(*(undefined8 **)(unaff_R14 + 0x38),lVar8);
      }
    }
    uVar3 = uVar3 + 1;
  }
  FUN_004145c0(&local_68,2);
  FUN_004145c0(&local_50,3);
  return;
}

