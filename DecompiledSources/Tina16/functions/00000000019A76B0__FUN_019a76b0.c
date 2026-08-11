/* Ghidra address: 019a76b0 */
/* Ghidra symbol: FUN_019a76b0 */


void FUN_019a76b0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_78;
  int local_74;
  undefined8 local_70 [2];
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined7 uStack_40;
  undefined1 local_39;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined8 local_30;
  
  local_70[0] = 0;
  local_30 = 0;
  local_74 = *(int *)(param_2 + 0x10);
  local_8c = 0;
  if (-1 < local_74 + -1) {
    do {
      plVar10 = (longlong *)FUN_00b94e60(param_2,local_8c);
      if (plVar10 != (longlong *)0x0) {
        if ((*(char *)(param_1 + 0x44f) == '\0') && (cVar4 = FUN_0198a580(plVar10), cVar4 != '\x01')
           ) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
        *(undefined1 *)(param_1 + 0x44f) = uVar5;
        if ((((*PTR_DAT_02001ab0 == '\0') || (cVar4 = FUN_0198a580(plVar10), cVar4 != '\x04')) ||
            (sVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10), sVar6 != 0x39)) ||
           (((char)plVar10[0x34] != '\x01' && ((char)plVar10[0x34] != '\x02')))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) &&
           ((((char)plVar10[0x34] == '\x01' && (*(char *)(plVar10[0x35] + 0xb0) != '\0')) ||
            (((char)plVar10[0x34] == '\x02' && (*(char *)(plVar10[0x35] + 0x115) != '\0')))))) {
          puVar11 = (undefined4 *)FUN_004095c0(8);
          lVar1 = plVar10[0x35];
          *puVar11 = *(undefined4 *)(lVar1 + 100);
          iVar7 = FUN_0176a490(lVar1);
          puVar11[1] = *(int *)(lVar1 + 100) + iVar7 + -1;
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x440),puVar11);
        }
        cVar4 = (**(code **)(*plVar10 + 0x118))(plVar10);
        if ((cVar4 != '\0') && (cVar4 = FUN_0198a580(plVar10), cVar4 != '\x06')) {
          iVar7 = (**(code **)(*plVar10 + 0x1c8))(plVar10);
          cVar4 = FUN_0198a580(plVar10);
          if ((cVar4 == '\x04') &&
             ((bVar2 || (cVar4 = FUN_0199f130(*(undefined8 *)(param_1 + 0x490),plVar10,
                                              *(undefined1 *)(param_1 + 0x4c8),
                                              *(undefined1 *)(param_1 + 0x43f)), cVar4 == '\0')))) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          local_78 = 0;
          if (-1 < iVar7 + -1) {
            do {
              cVar4 = (**(code **)(*plVar10 + 0x1d8))(plVar10,local_78);
              if (cVar4 == '\0') {
                bVar3 = false;
                local_90 = (**(code **)(*plVar10 + 0x210))(plVar10,local_78);
                (**(code **)(*plVar10 + 0x1f0))(plVar10,local_78,&local_5c,&local_60);
                if (local_90 == 99999) {
                  iVar8 = FUN_019a75a0(param_1,param_2,local_5c,local_60);
                  if (-1 < iVar8) {
                    local_98 = FUN_019a7170(param_1,iVar8);
                    if (local_98 == -1) {
                      local_98 = FUN_019a71e0(param_1,iVar8);
                    }
                    bVar3 = true;
                  }
                }
                else {
                  local_98 = FUN_019a7170(param_1,local_90);
                  if (local_98 == -1) {
                    local_98 = FUN_019a71e0(param_1,local_90);
                  }
                  bVar3 = true;
                }
                if (((param_3 == 0) || (*(int *)(*(longlong *)(param_3 + 0x1a8) + 100) <= local_90))
                   && (bVar3)) {
                  uVar12 = FUN_019a7220(param_1,local_98);
                  FUN_019a6ed0(uVar12,plVar10,local_78);
                }
              }
              if (((0 < local_78) && (local_90 < 99999)) && ((local_94 != local_90 && (bVar2)))) {
                FUN_016aef60(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x460),local_94,
                             local_90);
              }
              local_94 = local_90;
              local_78 = local_78 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          cVar4 = FUN_0198a580(plVar10);
          if (cVar4 == '\x04') {
            iVar7 = FUN_01cfd2d0();
            local_78 = 0;
            if (-1 < iVar7 + -1) {
              do {
                cVar4 = FUN_01cfd030(plVar10,local_78);
                if (cVar4 == '\t') {
                  puVar13 = (undefined8 *)
                            FUN_01cfde70(plVar10,local_78 + 1,0,&local_31,&local_32,&local_33);
                  local_58 = *puVar13;
                  uStack_50 = puVar13[1];
                  uStack_48 = puVar13[2];
                  uStack_40 = (undefined7)puVar13[3];
                  local_39 = (undefined1)((ulonglong)puVar13[3] >> 0x38);
                  uStack_38 = *(undefined4 *)(puVar13 + 4);
                  uStack_34 = *(undefined1 *)((longlong)puVar13 + 0x24);
                  if (-1 < (char)uStack_38) {
                    local_90 = (int)CONCAT11((char)uStack_38,local_39);
                    if ((bool)(bVar2 & local_94 != local_90)) {
                      FUN_016aef60(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x460),local_94)
                      ;
                    }
                    local_98 = FUN_019a7170(param_1,local_90);
                    if (local_98 == -1) {
                      local_98 = FUN_019a71e0(param_1,local_90);
                    }
                    local_94 = local_90;
                    if ((param_3 == 0) ||
                       (*(int *)(*(longlong *)(param_3 + 0x1a8) + 100) <= local_90)) {
                      uVar12 = FUN_019a7220(param_1,local_98);
                      FUN_019a6ed0(uVar12,plVar10);
                    }
                  }
                }
                local_78 = local_78 + 1;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
          }
          cVar4 = FUN_0198a580(plVar10);
          if ((cVar4 == '\x05') && (cVar4 = FUN_017c3740(plVar10), cVar4 != '\0')) {
            (**(code **)(*plVar10 + 0x1f0))(plVar10,0,&local_5c,&local_60);
            iVar7 = FUN_019a75a0(param_1,param_2,local_5c,local_60);
            if (iVar7 == -1) {
              (**(code **)(*plVar10 + 0x1f0))(plVar10,1,&local_5c,&local_60);
              iVar7 = FUN_019a75a0(param_1,param_2,local_5c,local_60);
            }
            if (-1 < iVar7) {
              plVar14 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
              FUN_017c4360(plVar10,plVar14);
              iVar7 = (**(code **)(*plVar14 + 0x28))();
              local_78 = 0;
              if (-1 < iVar7 + -1) {
                do {
                  (**(code **)(*plVar14 + 0x18))(plVar14,local_70,local_78);
                  plVar15 = (longlong *)FUN_019aff50(*(undefined8 *)(param_1 + 0x490),local_70[0]);
                  uVar9 = (**(code **)(*plVar15 + 0x210))(plVar15,0);
                  FUN_016aef60(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x460),uVar9);
                  local_78 = local_78 + 1;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
              }
              FUN_00410f20(plVar14);
            }
          }
          if (bVar2) {
            FUN_01996c40(*(undefined8 *)(param_1 + 0x490),plVar10);
          }
          FUN_017ff5f0(plVar10,param_3);
          if (((((*PTR_DAT_02001ab0 != '\0') && (cVar4 = FUN_0198a580(plVar10), cVar4 == '\x04')) &&
               (sVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10), sVar6 == 0x39)) &&
              (((char)plVar10[0x34] == '\x01' || ((char)plVar10[0x34] == '\x02')))) &&
             (*(longlong *)(plVar10[0x35] + 8) != 0)) {
            FUN_019a76b0(param_1,*(undefined8 *)(plVar10[0x35] + 8));
          }
        }
      }
      local_8c = local_8c + 1;
      local_74 = local_74 + -1;
    } while (local_74 != 0);
  }
  FUN_00414480(local_70);
  FUN_00414480(&local_30);
  return;
}

