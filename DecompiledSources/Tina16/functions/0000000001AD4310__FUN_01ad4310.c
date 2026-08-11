/* Ghidra address: 01ad4310 */
/* Ghidra symbol: FUN_01ad4310 */


void FUN_01ad4310(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  bool bVar12;
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
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  FUN_01acff30(param_1,&local_30);
  lVar7 = FUN_004aeac0(local_30,0);
  uVar8 = FUN_01ccd700(&DAT_01ccbf00,1);
  FUN_01ccdc70(uVar8,lVar7,1);
  cVar1 = FUN_01cd6670(lVar7);
  if (cVar1 == '\x03') {
    plVar9 = (longlong *)FUN_007fc180(&PTR_FUN_00f0cbf8,1,*(undefined8 *)PTR_DAT_02004030);
    (**(code **)(*(longlong *)plVar9[0xe1] + 0x10))
              ((longlong *)plVar9[0xe1],*(undefined8 *)(lVar7 + 0x98));
    (**(code **)(*(longlong *)plVar9[0xe2] + 0x10))
              ((longlong *)plVar9[0xe2],*(undefined8 *)(lVar7 + 0xa0));
    FUN_00f05050(local_40,*(undefined8 *)(lVar7 + 0x98));
    FUN_0064de00(plVar9[0xda],local_40[0]);
    FUN_00f05050(&local_48,*(undefined8 *)(lVar7 + 0xa0));
    FUN_0064de00(plVar9[0xe0],local_48);
    FUN_0064de00(plVar9[0xdd],*(undefined8 *)(lVar7 + 0xd8));
    if (*(longlong *)(lVar7 + 0xe0) != 0) {
      lVar11 = plVar9[0xdd];
      FUN_0064dd90(lVar11,&local_58);
      FUN_00416cd0(&local_50,3,local_58,&DAT_01ad542c,*(undefined8 *)(lVar7 + 0xe0));
      FUN_0064de00(lVar11,local_50);
    }
    (**(code **)(*(longlong *)plVar9[0xde] + 0x268))
              ((longlong *)plVar9[0xde],*(char *)(param_1 + 0x108) == '\0');
    iVar4 = (**(code **)(*plVar9 + 0x2d0))(plVar9);
    if (iVar4 == 2) {
      FUN_00410f20(local_30);
      FUN_00410f20(plVar9);
      goto LAB_01ad5377;
    }
    FUN_0064dd90(plVar9[0xdd],&local_60);
    FUN_01cd64a0(lVar7,local_60);
    cVar1 = (**(code **)(*(longlong *)plVar9[0xde] + 0x260))((longlong *)plVar9[0xde]);
    *(bool *)(param_1 + 0x108) = cVar1 == '\0';
    (**(code **)(**(longlong **)(lVar7 + 0x98) + 0x10))(*(longlong **)(lVar7 + 0x98),plVar9[0xe1]);
    if (*(longlong *)(lVar7 + 0xa8) == 0) {
      uVar10 = FUN_005fc570(&PTR_FUN_005f2d40,1);
      *(undefined8 *)(lVar7 + 0xa8) = uVar10;
    }
    (**(code **)(**(longlong **)(lVar7 + 0xa8) + 0x10))
              (*(longlong **)(lVar7 + 0xa8),*(undefined8 *)(lVar7 + 0x98));
    (**(code **)(**(longlong **)(lVar7 + 0xa0) + 0x10))(*(longlong **)(lVar7 + 0xa0),plVar9[0xe2]);
    if (*(longlong *)(lVar7 + 0xb0) == 0) {
      uVar10 = FUN_005fc570(&PTR_FUN_005f2d40,1);
      *(undefined8 *)(lVar7 + 0xb0) = uVar10;
    }
    (**(code **)(**(longlong **)(lVar7 + 0xb0) + 0x10))
              (*(longlong **)(lVar7 + 0xb0),*(undefined8 *)(lVar7 + 0xa0));
    FUN_01cd6f90(lVar7,uVar8,0);
    FUN_00410f20(plVar9);
  }
  else {
    uVar10 = FUN_01cd6670(lVar7);
    if ((byte)uVar10 < 8) {
      bVar12 = ((int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1) << ((byte)uVar10 & 0x1f) & 0xc0U) !=
               0;
    }
    else {
      bVar12 = false;
    }
    if (bVar12) {
      plVar9 = (longlong *)FUN_007fc180(&PTR_FUN_01ac52a8,1,*(undefined8 *)PTR_DAT_02004030);
      cVar1 = FUN_01cd6670(lVar7);
      if (cVar1 == '\x06') {
        FUN_0064dbe0(plVar9[0xea],1);
        FUN_0064dbe0(plVar9[0xeb],0);
      }
      else {
        FUN_0064dbe0(plVar9[0xea],0);
        FUN_0064dbe0(plVar9[0xeb],1);
      }
      (**(code **)(*(longlong *)plVar9[0xee] + 0x10))
                ((longlong *)plVar9[0xee],*(undefined8 *)(lVar7 + 0xa0));
      FUN_00f05050(&local_68,*(undefined8 *)(lVar7 + 0xa0));
      FUN_0064de00(plVar9[0xe2],local_68);
      FUN_00c5a4c0(plVar9[0xdc],*(undefined4 *)(lVar7 + 0x74));
      FUN_00b90440(plVar9[0xde],*(undefined8 *)(lVar7 + 0xb8));
      FUN_00b90440(plVar9[0xdf],*(undefined8 *)(lVar7 + 0xc0));
      uVar3 = FUN_01a8dc80(*(undefined1 *)(lVar7 + 0x80));
      (**(code **)(*(longlong *)plVar9[0xe5] + 0x268))((longlong *)plVar9[0xe5],uVar3);
      FUN_00b90440(plVar9[0xe7],*(undefined8 *)(lVar7 + 0x88));
      uVar5 = FUN_01cd66b0(lVar7);
      FUN_00c5a4c0(plVar9[0xe9],uVar5);
      (**(code **)(*(longlong *)plVar9[0xe0] + 0x268))
                ((longlong *)plVar9[0xe0],*(char *)(param_1 + 0x108) == '\0');
      iVar4 = (**(code **)(*plVar9 + 0x2d0))(plVar9);
      if (iVar4 == 2) {
        FUN_00410f20(local_30);
        FUN_00410f20(plVar9);
        goto LAB_01ad5377;
      }
      uVar10 = FUN_00b90090(plVar9[0xde]);
      *(undefined8 *)(lVar7 + 0xb8) = uVar10;
      uVar10 = FUN_00b90090(plVar9[0xdf]);
      *(undefined8 *)(lVar7 + 0xc0) = uVar10;
      uVar5 = FUN_00c5a450(plVar9[0xdc]);
      FUN_01cd6740(lVar7,uVar5);
      if (*(double *)(lVar7 + 0xc0) == *(double *)(lVar7 + 0xb8)) {
        *(double *)(lVar7 + 0xc0) = *(double *)(lVar7 + 0xb8) + 1e-09;
      }
      uVar5 = (**(code **)(*(longlong *)plVar9[0xe5] + 0x260))((longlong *)plVar9[0xe5]);
      uVar2 = FUN_01a8dcb0(uVar5);
      *(undefined1 *)(lVar7 + 0x80) = uVar2;
      uVar10 = FUN_00b90090(plVar9[0xe7]);
      *(undefined8 *)(lVar7 + 0x88) = uVar10;
      uVar5 = FUN_00c5a450(plVar9[0xe9]);
      *(undefined4 *)(lVar7 + 0x90) = uVar5;
      cVar1 = (**(code **)(*(longlong *)plVar9[0xe0] + 0x260))((longlong *)plVar9[0xe0]);
      *(bool *)(param_1 + 0x108) = cVar1 == '\0';
      (**(code **)(**(longlong **)(lVar7 + 0xa0) + 0x10))(*(longlong **)(lVar7 + 0xa0),plVar9[0xee])
      ;
      if (*(longlong *)(lVar7 + 0xb0) == 0) {
        uVar10 = FUN_005fc570(&PTR_FUN_005f2d40,1);
        *(undefined8 *)(lVar7 + 0xb0) = uVar10;
      }
      (**(code **)(**(longlong **)(lVar7 + 0xb0) + 0x10))
                (*(longlong **)(lVar7 + 0xb0),*(undefined8 *)(lVar7 + 0xa0));
      FUN_00410f20(plVar9);
    }
    else {
      uVar10 = FUN_01cd6670(lVar7);
      if ((byte)uVar10 < 8) {
        bVar12 = ((int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1) << ((byte)uVar10 & 0x1f) & 0x30U)
                 != 0;
      }
      else {
        bVar12 = false;
      }
      if (bVar12) {
        plVar9 = (longlong *)FUN_007fc180(&PTR_FUN_01ac4768,1,*(undefined8 *)PTR_DAT_02004030);
        cVar1 = FUN_01cd6670(lVar7);
        if (cVar1 == '\x04') {
          FUN_0064dbe0(plVar9[0xe8],1);
          FUN_0064dbe0(plVar9[0xe9],0);
        }
        else {
          FUN_0064dbe0(plVar9[0xe8],0);
          FUN_0064dbe0(plVar9[0xe9],1);
        }
        (**(code **)(*(longlong *)plVar9[0xed] + 0x10))
                  ((longlong *)plVar9[0xed],*(undefined8 *)(lVar7 + 0xa0));
        FUN_00f05050(&local_70,*(undefined8 *)(lVar7 + 0xa0));
        FUN_0064de00(plVar9[0xe0],local_70);
        FUN_00b90440(plVar9[0xdc],*(undefined8 *)(lVar7 + 0xb8));
        FUN_00b90440(plVar9[0xdd],*(undefined8 *)(lVar7 + 0xc0));
        uVar3 = FUN_01a8dc80(*(undefined1 *)(lVar7 + 0x80));
        (**(code **)(*(longlong *)plVar9[0xe3] + 0x268))((longlong *)plVar9[0xe3],uVar3);
        FUN_00b90440(plVar9[0xe5],*(undefined8 *)(lVar7 + 0x88));
        uVar5 = FUN_01cd66b0(lVar7);
        FUN_00c5a4c0(plVar9[0xe7],uVar5);
        (**(code **)(*(longlong *)plVar9[0xde] + 0x268))
                  ((longlong *)plVar9[0xde],*(char *)(param_1 + 0x108) == '\0');
        (**(code **)(*(longlong *)plVar9[0xea] + 0x128))((longlong *)plVar9[0xea],1);
        cVar1 = FUN_01cd6670(lVar7);
        if (cVar1 == '\x05') {
          (**(code **)(*(longlong *)plVar9[0xea] + 0x268))
                    ((longlong *)plVar9[0xea],*(undefined1 *)(param_1 + 0x10b));
        }
        else {
          cVar1 = FUN_01cd6670(lVar7);
          if (cVar1 == '\x04') {
            (**(code **)(*(longlong *)plVar9[0xea] + 0x268))
                      ((longlong *)plVar9[0xea],*(undefined1 *)(param_1 + 0x10c));
          }
        }
        iVar4 = (**(code **)(*plVar9 + 0x2d0))(plVar9);
        if (iVar4 == 2) {
          FUN_00410f20(local_30);
          FUN_00410f20(plVar9);
          goto LAB_01ad5377;
        }
        uVar10 = FUN_00b90090(plVar9[0xdc]);
        *(undefined8 *)(lVar7 + 0xb8) = uVar10;
        uVar10 = FUN_00b90090(plVar9[0xdd]);
        *(undefined8 *)(lVar7 + 0xc0) = uVar10;
        if (*(double *)(lVar7 + 0xc0) == *(double *)(lVar7 + 0xb8)) {
          *(double *)(lVar7 + 0xc0) = *(double *)(lVar7 + 0xb8) + 1e-09;
        }
        uVar5 = (**(code **)(*(longlong *)plVar9[0xe3] + 0x260))((longlong *)plVar9[0xe3]);
        uVar2 = FUN_01a8dcb0(uVar5);
        *(undefined1 *)(lVar7 + 0x80) = uVar2;
        uVar10 = FUN_00b90090(plVar9[0xe5]);
        *(undefined8 *)(lVar7 + 0x88) = uVar10;
        uVar5 = FUN_00c5a450(plVar9[0xe7]);
        *(undefined4 *)(lVar7 + 0x90) = uVar5;
        cVar1 = (**(code **)(*(longlong *)plVar9[0xde] + 0x260))((longlong *)plVar9[0xde]);
        *(bool *)(param_1 + 0x108) = cVar1 == '\0';
        cVar1 = FUN_01cd6670(lVar7);
        if (cVar1 == '\x05') {
          uVar5 = (**(code **)(*(longlong *)plVar9[0xea] + 0x260))((longlong *)plVar9[0xea]);
          *(char *)(param_1 + 0x10b) = (char)uVar5;
          FUN_01ae7730(param_1,L"AdjustXAxes",uVar5);
          if (*(char *)(param_1 + 0x10b) == '\0') {
            FUN_01cd4340(lVar7);
          }
          else {
            uVar5 = FUN_01ccddc0(lVar7);
            uVar6 = FUN_01ccddd0(lVar7);
            FUN_01cd43b0(lVar7,uVar5,uVar6);
          }
        }
        cVar1 = FUN_01cd6670(lVar7);
        if (cVar1 == '\x04') {
          uVar5 = (**(code **)(*(longlong *)plVar9[0xea] + 0x260))((longlong *)plVar9[0xea]);
          *(char *)(param_1 + 0x10c) = (char)uVar5;
          FUN_01ae7730(param_1,L"AdjustYAxes",uVar5);
          if (*(char *)(param_1 + 0x10c) == '\0') {
            FUN_01cd4340(lVar7);
          }
          else {
            uVar5 = FUN_01ccddc0(lVar7);
            uVar6 = FUN_01ccddd0(lVar7);
            FUN_01cd43b0(lVar7,uVar5,uVar6);
          }
        }
        (**(code **)(**(longlong **)(lVar7 + 0xa0) + 0x10))
                  (*(longlong **)(lVar7 + 0xa0),plVar9[0xed]);
        if (*(longlong *)(lVar7 + 0xb0) == 0) {
          uVar10 = FUN_005fc570(&PTR_FUN_005f2d40,1);
          *(undefined8 *)(lVar7 + 0xb0) = uVar10;
        }
        (**(code **)(**(longlong **)(lVar7 + 0xb0) + 0x10))
                  (*(longlong **)(lVar7 + 0xb0),*(undefined8 *)(lVar7 + 0xa0));
        FUN_00410f20(plVar9);
      }
      else {
        plVar9 = (longlong *)FUN_007fc180(&PTR_FUN_00f0b918,1,*(undefined8 *)PTR_DAT_02004030);
        lVar11 = FUN_004113f0(*(undefined8 *)(param_1 + 0x78),&PTR_FUN_01ae9d80);
        plVar9[0xf7] = lVar11;
        (**(code **)(*(longlong *)plVar9[0xf3] + 0x10))
                  ((longlong *)plVar9[0xf3],*(undefined8 *)(lVar7 + 0x98));
        (**(code **)(*(longlong *)plVar9[0xf4] + 0x10))
                  ((longlong *)plVar9[0xf4],*(undefined8 *)(lVar7 + 0xa0));
        FUN_00f05050(&local_78,*(undefined8 *)(lVar7 + 0x98));
        FUN_0064de00(plVar9[0xda],local_78);
        FUN_00f05050(&local_80,*(undefined8 *)(lVar7 + 0xa0));
        FUN_0064de00(plVar9[0xe8],local_80);
        FUN_00b90440(plVar9[0xe2],*(undefined8 *)(lVar7 + 0xb8));
        uVar10 = FUN_00b90440(plVar9[0xe3],*(undefined8 *)(lVar7 + 0xc0));
        if (*(byte *)(lVar7 + 0x70) < 8) {
          bVar12 = ((int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1) <<
                    (*(byte *)(lVar7 + 0x70) & 0x1f) & 5U) != 0;
        }
        else {
          bVar12 = false;
        }
        if (bVar12) {
          plVar9[0xf6] = *(longlong *)(lVar7 + 0xb8);
          plVar9[0xf5] = *(longlong *)(lVar7 + 0xc0);
        }
        else {
          lVar11 = FUN_00c43d30(*(undefined8 *)(lVar7 + 0xb8));
          plVar9[0xf6] = lVar11;
          lVar11 = FUN_00c43d30(*(undefined8 *)(lVar7 + 0xc0));
          plVar9[0xf5] = lVar11;
        }
        uVar3 = FUN_01a8dc20(*(undefined1 *)(lVar7 + 0x70));
        (**(code **)(*(longlong *)plVar9[0xdd] + 0x268))((longlong *)plVar9[0xdd],uVar3);
        FUN_00c5a4c0(plVar9[0xe0],*(int *)(lVar7 + 0x74) + 1);
        FUN_0064de00(plVar9[0xe5],*(undefined8 *)(lVar7 + 0xd8));
        if (*(longlong *)(lVar7 + 0xe0) != 0) {
          lVar11 = plVar9[0xe5];
          FUN_0064dd90(lVar11,&local_90);
          FUN_00416cd0(&local_88,3,local_90,&DAT_01ad542c,*(undefined8 *)(lVar7 + 0xe0));
          FUN_0064de00(lVar11,local_88);
        }
        uVar3 = FUN_01a8dc80(*(undefined1 *)(lVar7 + 0x80));
        (**(code **)(*(longlong *)plVar9[0xeb] + 0x268))((longlong *)plVar9[0xeb],uVar3);
        FUN_00b90440(plVar9[0xed],*(undefined8 *)(lVar7 + 0x88));
        uVar5 = FUN_01cd66b0(lVar7);
        FUN_00c5a4c0(plVar9[0xef],uVar5);
        (**(code **)(*(longlong *)plVar9[0xe4] + 0x268))
                  ((longlong *)plVar9[0xe4],*(char *)(param_1 + 0x108) == '\0');
        (**(code **)(*(longlong *)plVar9[0xf0] + 0x128))((longlong *)plVar9[0xf0],0);
        cVar1 = FUN_01cd6670(lVar7);
        if (cVar1 == '\0') {
          (**(code **)(*(longlong *)plVar9[0xf0] + 0x268))
                    ((longlong *)plVar9[0xf0],*(undefined1 *)(param_1 + 0x10b));
          (**(code **)(*(longlong *)plVar9[0xf0] + 0x128))((longlong *)plVar9[0xf0],1);
        }
        else {
          uVar10 = FUN_01cd6670(lVar7);
          if ((byte)uVar10 < 8) {
            bVar12 = ((int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1) << ((byte)uVar10 & 0x1f) & 6U)
                     != 0;
          }
          else {
            bVar12 = false;
          }
          if (bVar12) {
            (**(code **)(*(longlong *)plVar9[0xf0] + 0x268))
                      ((longlong *)plVar9[0xf0],*(undefined1 *)(param_1 + 0x10c));
            (**(code **)(*(longlong *)plVar9[0xf0] + 0x128))((longlong *)plVar9[0xf0],1);
          }
        }
        iVar4 = (**(code **)(*plVar9 + 0x2d0))(plVar9);
        if (iVar4 == 2) {
          FUN_00410f20(local_30);
          FUN_00410f20(plVar9);
          goto LAB_01ad5377;
        }
        uVar10 = FUN_00b90090(plVar9[0xe2]);
        *(undefined8 *)(lVar7 + 0xb8) = uVar10;
        uVar10 = FUN_00b90090(plVar9[0xe3]);
        *(undefined8 *)(lVar7 + 0xc0) = uVar10;
        if (*(double *)(lVar7 + 0xc0) == *(double *)(lVar7 + 0xb8)) {
          *(double *)(lVar7 + 0xc0) = *(double *)(lVar7 + 0xb8) + 1e-09;
        }
        uVar5 = (**(code **)(*(longlong *)plVar9[0xdd] + 0x260))((longlong *)plVar9[0xdd]);
        uVar2 = FUN_01a8dc50(uVar5);
        *(undefined1 *)(lVar7 + 0x70) = uVar2;
        FUN_01cd6800(lVar7);
        iVar4 = FUN_00c5a450(plVar9[0xe0]);
        FUN_01cd6740(lVar7,iVar4 + -1);
        FUN_0064dd90(plVar9[0xe5],&local_98);
        FUN_01cd64a0(lVar7,local_98);
        uVar5 = (**(code **)(*(longlong *)plVar9[0xeb] + 0x260))((longlong *)plVar9[0xeb]);
        uVar2 = FUN_01a8dcb0(uVar5);
        *(undefined1 *)(lVar7 + 0x80) = uVar2;
        uVar10 = FUN_00b90090(plVar9[0xed]);
        *(undefined8 *)(lVar7 + 0x88) = uVar10;
        uVar5 = FUN_00c5a450(plVar9[0xef]);
        *(undefined4 *)(lVar7 + 0x90) = uVar5;
        (**(code **)(**(longlong **)(lVar7 + 0x98) + 0x10))
                  (*(longlong **)(lVar7 + 0x98),plVar9[0xf3]);
        if (*(longlong *)(lVar7 + 0xa8) == 0) {
          uVar10 = FUN_005fc570(&PTR_FUN_005f2d40,1);
          *(undefined8 *)(lVar7 + 0xa8) = uVar10;
        }
        (**(code **)(**(longlong **)(lVar7 + 0xa8) + 0x10))
                  (*(longlong **)(lVar7 + 0xa8),*(undefined8 *)(lVar7 + 0x98));
        (**(code **)(**(longlong **)(lVar7 + 0xa0) + 0x10))
                  (*(longlong **)(lVar7 + 0xa0),plVar9[0xf4]);
        if (*(longlong *)(lVar7 + 0xb0) == 0) {
          uVar10 = FUN_005fc570(&PTR_FUN_005f2d40,1);
          *(undefined8 *)(lVar7 + 0xb0) = uVar10;
        }
        (**(code **)(**(longlong **)(lVar7 + 0xb0) + 0x10))
                  (*(longlong **)(lVar7 + 0xb0),*(undefined8 *)(lVar7 + 0xa0));
        FUN_01cd6f90(lVar7,uVar8,0);
        cVar1 = (**(code **)(*(longlong *)plVar9[0xe4] + 0x260))((longlong *)plVar9[0xe4]);
        *(bool *)(param_1 + 0x108) = cVar1 == '\0';
        cVar1 = FUN_01cd6670(lVar7);
        if (cVar1 == '\0') {
          uVar5 = (**(code **)(*(longlong *)plVar9[0xf0] + 0x260))((longlong *)plVar9[0xf0]);
          *(char *)(param_1 + 0x10b) = (char)uVar5;
          FUN_01ae7730(param_1,L"AdjustXAxes",uVar5);
          if (*(char *)(param_1 + 0x10b) == '\0') {
            FUN_01cd4340(lVar7);
          }
          else {
            uVar5 = FUN_01ccddc0(lVar7);
            uVar6 = FUN_01ccddd0(lVar7);
            FUN_01cd43b0(lVar7,uVar5,uVar6);
          }
        }
        uVar10 = FUN_01cd6670(lVar7);
        if ((byte)uVar10 < 8) {
          bVar12 = ((int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1) << ((byte)uVar10 & 0x1f) & 6U)
                   != 0;
        }
        else {
          bVar12 = false;
        }
        if (bVar12) {
          uVar5 = (**(code **)(*(longlong *)plVar9[0xf0] + 0x260))((longlong *)plVar9[0xf0]);
          *(char *)(param_1 + 0x10c) = (char)uVar5;
          FUN_01ae7730(param_1,L"AdjustYAxes",uVar5);
          if (*(char *)(param_1 + 0x10c) == '\0') {
            FUN_01cd4340(lVar7);
          }
          else {
            uVar5 = FUN_01ccddc0(lVar7);
            uVar6 = FUN_01ccddd0(lVar7);
            FUN_01cd43b0(lVar7,uVar5,uVar6);
          }
        }
        FUN_00410f20(plVar9);
      }
    }
  }
  uVar10 = FUN_004aeac0(local_30,0);
  cVar1 = FUN_01cd6670(uVar10);
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x10d) != '\0')) {
    uVar10 = FUN_004aeac0(local_30,0);
    FUN_01ad4210(param_1,uVar10);
  }
  FUN_01acfc60(param_1);
  FUN_01aceb90(param_1,1);
  plVar9 = (longlong *)FUN_004aeac0(local_30,0);
  (**(code **)(*plVar9 + 0xa0))(plVar9,*(undefined8 *)(param_1 + 0x80));
  FUN_00410f20(uVar8);
  FUN_00410f20(local_30);
LAB_01ad5377:
  FUN_00414560(&local_98,3);
  FUN_00414560(&local_80,4);
  FUN_00414560(&local_60,3);
  FUN_00414560(&local_48,2);
  return;
}

