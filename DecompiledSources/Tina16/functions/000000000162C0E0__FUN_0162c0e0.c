/* Ghidra address: 0162c0e0 */
/* Ghidra symbol: FUN_0162c0e0 */


void FUN_0162c0e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  int iVar18;
  bool bVar19;
  int local_1c4;
  undefined8 local_198;
  undefined1 local_190 [256];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_198 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  lVar1 = *(longlong *)(param_2 + 0x20);
  uVar17 = *(undefined8 *)(param_2 + 8);
  uVar6 = FUN_0161bb40(param_2);
  *(undefined1 *)(param_1 + 0x48) = 0;
  uVar7 = FUN_01615c30(*(undefined8 *)(param_1 + 0x10));
  if ((*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x1c)) ||
     (cVar2 = FUN_0161bbd0(uVar7), cVar2 != '\0')) {
    uVar6 = FUN_0161c6d0(uVar7,param_2,0);
    cVar2 = FUN_01615c80(*(undefined8 *)(param_1 + 0x10));
    if (cVar2 != '\0') {
      FUN_0163cec0(uVar17,uVar6,*(undefined8 *)(param_1 + 0x10));
    }
    *(undefined8 *)(param_1 + 8) = uVar6;
  }
  else {
    local_1c4 = *(int *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x1c) <= local_1c4) {
      iVar18 = (*(int *)(param_1 + 0x1c) - local_1c4) + -1;
      do {
        lVar8 = FUN_004aeac0(uVar6,local_1c4);
        if ((*(char *)(lVar8 + 8) == '\x0e') ||
           ((*(char *)(lVar8 + 8) == '5' &&
            (((((iVar3 = FUN_01614590(lVar8), iVar3 == 0x14f ||
                (iVar3 = FUN_01614590(lVar8), iVar3 == 0x3f2)) ||
               (iVar3 = FUN_01614590(lVar8), iVar3 == 0x3f1)) ||
              ((iVar3 = FUN_01614590(lVar8), iVar3 == 0x3f3 ||
               (iVar3 = FUN_01614590(lVar8), iVar3 == 0x153)))) ||
             (iVar3 = FUN_01614590(lVar8), iVar3 == 0x154)))))) {
          iVar3 = *(int *)(*(longlong *)(lVar8 + 0x50) + 0x10);
          iVar4 = FUN_01614590(lVar8);
          if (iVar4 == 0x3f2) {
            if (iVar3 < 3) {
              uVar17 = FUN_00b89270();
              FUN_0041ddd0(&local_60,PTR_PTR_02001a58);
              FUN_00b8e650(uVar17,&local_58,L"HDLStrings.Msg_Too_Few_Parameters");
              FUN_00416ba0(&local_50,L"slew: ",local_58);
              FUN_01613110(local_50);
            }
            uVar17 = FUN_01612bc0(lVar8,1);
            lVar9 = FUN_0161c6d0(uVar17,param_2,0);
            uVar17 = FUN_01612bc0(lVar8,2);
            lVar10 = FUN_0161c6d0(uVar17,param_2,0);
            uVar17 = FUN_01612bc0(lVar8,3);
            lVar11 = FUN_0161c6d0(uVar17,param_2,0);
            uVar17 = FUN_01626eb0(lVar11,0x131,0,0);
            uVar12 = FUN_01698500(lVar10,uVar17,1000);
            if (lVar10 == 0) {
              uVar13 = FUN_01612bc0(lVar8,2);
              FUN_0162aa50(param_1,uVar12,uVar13);
            }
            if ((lVar11 == 0) && (lVar10 = FUN_01612bc0(lVar8,3), *(char *)(lVar10 + 10) != '\0')) {
              uVar13 = FUN_01612bc0(lVar8,3);
              FUN_0162aa50(param_1,uVar17,uVar13);
            }
            uVar5 = FUN_01614590(lVar8);
            puVar14 = (undefined4 *)FUN_01698500(lVar9,uVar12,uVar5);
            *(undefined4 **)(lVar8 + 0xb8) = puVar14;
            if (lVar9 == 0) {
              uVar17 = FUN_01612bc0(lVar8,1);
              FUN_0162aa50(param_1,puVar14,uVar17);
            }
          }
          else {
            iVar4 = FUN_01614590(lVar8);
            if (iVar4 == 0x3f3) {
              if (iVar3 < 1) {
                uVar17 = FUN_00b89270();
                FUN_0041ddd0(&local_78,PTR_PTR_02001a58);
                FUN_00b8e650(uVar17,&local_70,L"HDLStrings.Msg_Too_Few_Parameters");
                FUN_00416ba0(&local_68,L"transition: ",local_70);
                FUN_01613110(local_68);
              }
              FUN_0162bff0(param_1,0x3f3,*(undefined8 *)(lVar8 + 0x50));
              puVar14 = (undefined4 *)FUN_0162be90(param_1,*(undefined8 *)(lVar8 + 0x50),param_2);
              *puVar14 = 0x3f3;
              *(undefined4 **)(lVar8 + 0xb8) = puVar14;
            }
            else {
              iVar4 = FUN_01614590(lVar8);
              if (iVar4 == 0x3f1) {
                if (iVar3 < 3) {
                  uVar17 = FUN_00b89270();
                  FUN_0041ddd0(&local_90,PTR_PTR_02001a58);
                  FUN_00b8e650(uVar17,&local_88,L"HDLStrings.Msg_Too_Few_Parameters");
                  FUN_00416ba0(&local_80,L"absdelay: ",local_88);
                  FUN_01613110(local_80);
                }
                uVar17 = FUN_01612bc0(lVar8,1);
                lVar9 = FUN_0161c6d0(uVar17,param_2,0);
                uVar17 = FUN_01612bc0(lVar8,2);
                lVar10 = FUN_0161c6d0(uVar17,param_2,0);
                uVar17 = FUN_01612bc0(lVar8,3);
                lVar11 = FUN_0161c6d0(uVar17,param_2,0);
                uVar17 = FUN_01698500(lVar10,lVar11,1000);
                if (lVar10 == 0) {
                  uVar12 = FUN_01612bc0(lVar8,2);
                  FUN_0162aa50(param_1,uVar17,uVar12);
                }
                if ((lVar11 == 0) &&
                   (lVar10 = FUN_01612bc0(lVar8,3), *(char *)(lVar10 + 10) != '\0')) {
                  uVar12 = FUN_01612bc0(lVar8,3);
                  FUN_0162aa50(param_1,uVar17,uVar12);
                }
                uVar5 = FUN_01614590(lVar8);
                puVar14 = (undefined4 *)FUN_01698500(lVar9,uVar17,uVar5);
                *(undefined4 **)(lVar8 + 0xb8) = puVar14;
                if (lVar9 == 0) {
                  uVar17 = FUN_01612bc0(lVar8,1);
                  FUN_0162aa50(param_1,puVar14,uVar17);
                }
              }
              else {
                uVar17 = FUN_01612bc0(lVar8,1);
                lVar9 = FUN_0161c6d0(uVar17,param_2,0);
                uVar17 = FUN_01612bc0(lVar8,2);
                lVar10 = FUN_0161c6d0(uVar17,param_2,0);
                uVar5 = FUN_01614590(lVar8);
                puVar14 = (undefined4 *)FUN_01698500(lVar9,lVar10,uVar5);
                if (lVar9 == 0) {
                  uVar17 = FUN_01612bc0(lVar8,1);
                  FUN_0162aa50(param_1,puVar14,uVar17);
                }
                if (lVar10 == 0) {
                  uVar17 = FUN_01612bc0(lVar8,2);
                  FUN_0162aa50(param_1,puVar14,uVar17);
                }
              }
            }
          }
LAB_0162cda2:
          FUN_0163cec0(*(undefined8 *)(param_2 + 8),puVar14,lVar8);
          FUN_0162aaa0(param_1,puVar14);
          cVar2 = FUN_016262d0(uVar7,*(undefined8 *)(lVar8 + 0x58));
          if (cVar2 == '\0') {
            if (local_1c4 == *(int *)(param_1 + 0x20)) {
              *(undefined4 **)(param_1 + 8) = puVar14;
            }
          }
          else {
            *(undefined4 **)(param_1 + 8) = puVar14;
          }
        }
        else {
          if ((*(char *)(lVar8 + 8) == '5') && (iVar3 = FUN_01614590(lVar8), iVar3 == 0x3ef)) {
            uVar17 = FUN_01612bc0(lVar8,1);
            lVar9 = FUN_0161c6d0(uVar17,param_2,0);
            uVar5 = FUN_01614590(lVar8);
            puVar14 = (undefined4 *)FUN_01626eb0(lVar9,uVar5,0,0);
            if (lVar9 == 0) {
              uVar17 = FUN_01612bc0(lVar8,1);
              FUN_0162aa50(param_1,puVar14,uVar17);
            }
            *(undefined1 *)(param_1 + 0x48) = 1;
            goto LAB_0162cda2;
          }
          if ((*(char *)(lVar8 + 8) == '5') && (iVar3 = FUN_01614590(lVar8), iVar3 == 0x155)) {
            uVar17 = FUN_01612bc0(lVar8,1);
            lVar9 = FUN_0161c6d0(uVar17,param_2,0);
            puVar14 = (undefined4 *)
                      FUN_0161f260(lVar9,*(undefined4 *)(*(longlong *)(lVar8 + 0xe0) + 0x10),
                                   *(undefined4 *)(*(longlong *)(lVar8 + 0xe0) + 0x14));
            if (lVar9 == 0) {
              uVar17 = FUN_01612bc0(lVar8,1);
              FUN_0162aa50(param_1,puVar14,uVar17);
            }
            goto LAB_0162cda2;
          }
          if ((((*(char *)(lVar8 + 8) == '5') || (*(char *)(lVar8 + 8) == '\r')) &&
              (cVar2 = FUN_016265c0(lVar8), cVar2 == '\0')) &&
             ((cVar2 = FUN_01614240(lVar8), cVar2 == '\0' &&
              (iVar3 = FUN_01614590(lVar8), iVar3 != 0x3ea)))) {
            puVar14 = (undefined4 *)FUN_0162be90(param_1,*(undefined8 *)(lVar8 + 0x50),param_2);
            if (*(short *)(lVar8 + 10) != 0x1a1) {
              uVar5 = FUN_01614590(lVar8);
              puVar15 = (undefined4 *)
                        FUN_01626eb0(puVar14,uVar5,*(undefined4 *)(lVar8 + 0x30),
                                     *(undefined4 *)(lVar8 + 0x24));
              iVar3 = FUN_01614590(lVar8);
              puVar16 = puVar15;
              if (iVar3 == 0) {
                puVar16 = (undefined4 *)FUN_01615c90(puVar15);
              }
              iVar3 = FUN_01614590(lVar8);
              if ((iVar3 == 0x139) || (iVar3 = FUN_01614590(lVar8), iVar3 == 0x13b)) {
                *(undefined4 **)(lVar8 + 0xb8) = puVar16;
              }
              bVar19 = puVar14 == (undefined4 *)0x0;
              puVar14 = puVar16;
              if (bVar19) {
                uVar17 = FUN_01612bc0(lVar8,1);
                FUN_0162aa50(param_1,puVar15,uVar17);
              }
            }
            goto LAB_0162cda2;
          }
          if (*(char *)(lVar8 + 8) == '6') {
            uVar17 = FUN_01612bc0(lVar8,1);
            lVar9 = FUN_0161c6d0(uVar17,param_2,0);
            uVar17 = FUN_01612bc0(lVar8,2);
            lVar10 = FUN_0161c6d0(uVar17,param_2,0);
            uVar17 = FUN_01612bc0(lVar8,3);
            lVar11 = FUN_0161c6d0(uVar17,param_2,0);
            uVar17 = FUN_01698500(lVar10,lVar11,1000);
            if (lVar10 == 0) {
              uVar12 = FUN_01612bc0(lVar8,2);
              FUN_0162aa50(param_1,uVar17,uVar12);
            }
            if ((lVar11 == 0) && (lVar10 = FUN_01612bc0(lVar8,3), *(char *)(lVar10 + 10) != '\0')) {
              uVar12 = FUN_01612bc0(lVar8,3);
              FUN_0162aa50(param_1,uVar17,uVar12);
            }
            puVar14 = (undefined4 *)FUN_01698500(lVar9,uVar17,0x125);
            if (lVar9 == 0) {
              uVar17 = FUN_01612bc0(lVar8,1);
              FUN_0162aa50(param_1,puVar14,uVar17);
            }
            goto LAB_0162cda2;
          }
          if ((*(char *)(lVar8 + 8) == '5') && (cVar2 = FUN_016265c0(lVar8), cVar2 != '\0')) {
            FUN_01614270(&local_30,lVar8);
            FUN_00416910(local_190,local_30,0xff);
            puVar14 = (undefined4 *)FUN_016261e0(local_190);
            *(undefined1 *)(puVar14 + 0x2c) = 1;
            puVar14[0x21] = 2;
            iVar3 = FUN_01614590(lVar8);
            if ((iVar3 == 0x3ed) && (cVar2 = FUN_01612be0(lVar8), cVar2 != '\0')) {
              uVar17 = FUN_01612bc0(lVar8,1);
              uVar17 = FUN_0161be50(uVar17,param_2,local_48);
              uVar17 = FUN_01614c70(uVar17);
              *(undefined8 *)(puVar14 + 10) = uVar17;
              puVar14[0x21] = 1;
            }
            goto LAB_0162cda2;
          }
          if ((*(char *)(lVar8 + 8) == '5') && (iVar3 = FUN_01614590(lVar8), iVar3 == 0x3ea)) {
            FUN_01614370(&local_30,lVar8);
            FUN_00416910(local_190,local_30,0xff);
            puVar14 = (undefined4 *)FUN_016261e0(local_190);
            goto LAB_0162cda2;
          }
          if ((*(char *)(lVar8 + 8) == '2') || (*(char *)(lVar8 + 8) == '4')) {
            if (*(longlong *)(lVar8 + 0x40) == 0) {
              FUN_01613110(L"MakeTree: o.sComp is empty");
            }
            FUN_00416910(local_190,*(undefined8 *)(lVar8 + 0x40),0xff);
            puVar14 = (undefined4 *)FUN_016261e0(local_190);
            if ((*(char *)(lVar8 + 8) == '4') && (*(char *)(lVar8 + 0x4b) != '\0')) {
              puVar14 = (undefined4 *)FUN_01626eb0(puVar14,0x10f,0,0);
            }
            if (*(char *)(lVar8 + 8) == '4') {
              if (lVar1 == 0) {
                FUN_01613110(L"GetVoltage, GetCurrent not allowed in a function!");
              }
              iVar3 = (**(code **)(**(longlong **)(lVar1 + 0x6b8) + 0xb0))
                                (*(longlong **)(lVar1 + 0x6b8),*(undefined8 *)(lVar8 + 0x40));
              if (iVar3 < 0) {
                FUN_00416cd0(&local_198,3,L"MakeTree: ",*(undefined8 *)(lVar8 + 0x40),
                             L" not found in CComps");
                FUN_01613110(local_198);
              }
              iVar3 = (**(code **)(**(longlong **)(lVar1 + 0x6b8) + 0xb0))
                                (*(longlong **)(lVar1 + 0x6b8),*(undefined8 *)(lVar8 + 0x40));
              *(int *)(lVar8 + 0x34) = iVar3 + 1;
            }
            goto LAB_0162cda2;
          }
        }
        local_1c4 = local_1c4 + -1;
        iVar18 = iVar18 + 1;
      } while (iVar18 != 0);
    }
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar17 = FUN_0161c6d0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x58),param_2,0);
    cVar2 = FUN_01615c80(*(undefined8 *)(param_1 + 0x10));
    if (cVar2 != '\0') {
      FUN_0163cec0(*(undefined8 *)(param_2 + 8),uVar17,*(undefined8 *)(param_1 + 0x10));
    }
    *(undefined8 *)(param_1 + 8) = uVar17;
  }
  FUN_00414480(&local_198);
  FUN_00414560(&local_90,9);
  FUN_00414560(&local_40,3);
  return;
}

