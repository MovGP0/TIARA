/* Ghidra address: 015688f0 */
/* Ghidra symbol: FUN_015688f0 */


void FUN_015688f0(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar19;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar20;
  undefined4 local_88;
  byte local_81;
  undefined8 local_80;
  undefined4 local_74;
  undefined4 *local_70;
  undefined1 local_64 [4];
  undefined1 *local_60;
  undefined1 local_58 [12];
  undefined1 local_4c [4];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  local_80 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  sVar8 = (**(code **)(*param_2 + 0xf8))(param_2);
  plVar5 = (longlong *)param_2[0xa5];
  cVar6 = FUN_0154b530(sVar8,*(undefined1 *)(param_1 + 0x958));
  if (cVar6 != '\0') {
    if (((((sVar8 == 0x3ec) || (sVar8 == 0x4b0)) || (sVar8 == 0x45f)) ||
        (((sVar8 == 0xe || (sVar8 == 0x3fe)) ||
         ((sVar8 == 0x4b1 || ((sVar8 == 0x91 || (sVar8 == 0x3e9)))))))) ||
       ((sVar8 == 0x90 ||
        ((((sVar8 == 0x5dd || (sVar8 == 0x88)) || (sVar8 == 0x89)) ||
         ((sVar8 == 0x8c || (sVar8 == 0xa2)))))))) {
      cVar6 = FUN_01d40010(sVar8);
      if ((cVar6 != '\0') &&
         (*(undefined1 *)((longlong)param_2 + 0x3d2) = 0, plVar5 != (longlong *)0x0)) {
        *(undefined1 *)((longlong)plVar5 + 0x3d2) = 0;
      }
      FUN_015ef5f0(&local_30,param_2);
      if (sVar8 == 0x90) {
        (**(code **)(*param_2 + 0x2d0))(param_2,0,&local_70);
        uVar2 = *local_70;
        uVar3 = local_70[1];
        uVar4 = local_70[2];
        uVar10 = (**(code **)(*param_2 + 0x210))(param_2,0);
        uVar17 = CONCAT44(uVar19,uVar3);
        uVar13 = FUN_01571c20(&DAT_0156eff0,1,uVar10,uVar2,uVar17,CONCAT44(uVar20,uVar4));
        uVar19 = (undefined4)((ulonglong)uVar17 >> 0x20);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x988),uVar13);
        FUN_0155fcf0(param_1,&local_40,param_2,local_4c,CONCAT44(uVar19,uVar10),
                     *(undefined1 *)(param_1 + 0x94b));
        lVar14 = FUN_01571ef0(*(undefined8 *)(param_1 + 0x750),uVar10);
        if (lVar14 == 0) {
          uVar13 = FUN_015710a0(&DAT_0156d6c8,1,uVar10,*(undefined1 *)(param_1 + 0x94e));
          FUN_01571eb0(*(undefined8 *)(param_1 + 0x750),uVar13);
          FUN_01571520(uVar13,local_40);
          cVar6 = FUN_00e0f550(*(undefined8 *)(param_1 + 0x938),uVar10,&local_48,&local_74);
          if (cVar6 != '\0') {
            FUN_015714d0(uVar13,local_74);
          }
        }
      }
      else {
        if (((sVar8 == 0x3ec) || (sVar8 == 0x3fe)) || (sVar8 == 0x91)) {
          local_88 = (**(code **)(*param_2 + 0x210))(param_2,1);
        }
        else if ((((sVar8 == 0x4b0) || (sVar8 == 0x45f)) || (sVar8 == 0xe)) ||
                ((sVar8 == 0x4b1 || (sVar8 == 0x3e9)))) {
          local_88 = (**(code **)(*param_2 + 0x210))(param_2,0);
        }
        if (sVar8 == 0x3e9) {
          (**(code **)(*param_2 + 0x210))(param_2,0);
          (**(code **)(*param_2 + 0x210))(param_2,1);
        }
        else {
          sVar9 = FUN_01d03160(param_2);
          if ((((sVar9 != 0x88) && (sVar9 = FUN_01d03160(param_2), sVar9 != 0x89)) &&
              ((sVar9 = FUN_01d03160(param_2), sVar9 != 0x8c &&
               (sVar9 = FUN_01d03160(param_2), sVar9 != 0xa2)))) &&
             ((plVar5 == (longlong *)0x0 || (sVar9 = FUN_01d03160(plVar5), sVar9 != 3000)))) {
            if (*(char *)(param_1 + 0x958) != '\0') {
              puVar18 = local_64;
              local_81 = FUN_00e14cc0(*(undefined8 *)(param_1 + 0x9c8),local_88,2,local_58,puVar18,0
                                     );
              uVar19 = (undefined4)((ulonglong)puVar18 >> 0x20);
              bVar7 = FUN_01d40010(sVar8);
              if ((((local_81 & bVar7) != 0) && (*(char *)(param_1 + 0x709) == '\0')) &&
                 (*(undefined1 *)((longlong)param_2 + 0x3d2) = 1, plVar5 != (longlong *)0x0)) {
                *(undefined1 *)((longlong)plVar5 + 0x3d2) = 1;
              }
            }
            FUN_0155fcf0(param_1,&local_40,param_2,local_4c,CONCAT44(uVar19,local_88),
                         *(undefined1 *)(param_1 + 0x94b));
            lVar14 = FUN_01571ef0(*(undefined8 *)(param_1 + 0x750),local_88);
            if (lVar14 == 0) {
              lVar14 = FUN_015710a0(&DAT_0156d6c8,1,local_88,*(undefined1 *)(param_1 + 0x94e));
              FUN_01571eb0(*(undefined8 *)(param_1 + 0x750),lVar14);
              FUN_01571520(lVar14,local_40);
              *(undefined4 *)(lVar14 + 0x5c) = 3;
            }
            FUN_015714d0(lVar14,1);
            cVar6 = FUN_01d3f2d0(sVar8);
            if (cVar6 == '\0') {
              FUN_015718f0(lVar14,param_2);
            }
            FUN_01571900(lVar14,param_2);
            if ((*(char *)(param_1 + 0x958) != '\0') && (local_81 == 0)) goto LAB_01568fc1;
            sVar8 = FUN_01d03160(param_2);
            if (sVar8 == 0x45f) {
              FUN_015718f0(lVar14,0);
              FUN_01571910(lVar14,0);
            }
            if (plVar5 == (longlong *)0x0) goto LAB_01568fc1;
            sVar8 = FUN_01d03160(plVar5);
            if (sVar8 == 0x2900) {
              FUN_015718f0(lVar14,0);
              (**(code **)(*plVar5 + 0x2d0))(plVar5,0,&local_60);
              FUN_01571910(lVar14,*local_60);
              goto LAB_01568fc1;
            }
            sVar8 = FUN_01d03160(plVar5);
            if (sVar8 != 3000) goto LAB_01568fc1;
          }
          if (plVar5 == (longlong *)0x0) {
            (**(code **)(*param_2 + 0x2d0))(param_2,0,&local_60);
          }
          else {
            (**(code **)(*plVar5 + 0x2d0))(plVar5,0,&local_60);
          }
          uVar1 = *local_60;
          iVar11 = (**(code **)(*param_2 + 0x1c8))();
          iVar16 = 0;
          if (-1 < iVar11 + -1) {
            do {
              iVar12 = (**(code **)(*param_2 + 0x210))(param_2,iVar16);
              if (iVar12 != 0) {
                lVar14 = FUN_01571ef0(*(undefined8 *)(param_1 + 0x750),iVar12);
                if (lVar14 == 0) {
                  lVar14 = FUN_015710a0(&DAT_0156d6c8,1,iVar12,*(undefined1 *)(param_1 + 0x94e));
                  FUN_01571eb0(*(undefined8 *)(param_1 + 0x750),lVar14);
                  lVar15 = FUN_01571f50(*(undefined8 *)(param_1 + 0x750),local_40);
                  if (lVar15 == 0) {
                    FUN_00414b50(&local_38,local_40);
                  }
                  else {
                    FUN_01d43440(&local_80,iVar12);
                    FUN_00416cd0(&local_38,3,local_40,&DAT_0156902c,local_80);
                  }
                  FUN_01571520(lVar14,local_38);
                  *(undefined4 *)(lVar14 + 0x5c) = 3;
                }
                FUN_015718f0(lVar14,0);
                FUN_01571900(lVar14,param_2);
                FUN_01571910(lVar14,uVar1);
                FUN_015714d0(lVar14,1);
              }
              iVar16 = iVar16 + 1;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
        }
      }
    }
  }
LAB_01568fc1:
  FUN_00414480(&local_80);
  FUN_00414560(&local_48,4);
  return;
}

