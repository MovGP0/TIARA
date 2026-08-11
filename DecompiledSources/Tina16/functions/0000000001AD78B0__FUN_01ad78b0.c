/* Ghidra address: 01ad78b0 */
/* Ghidra symbol: FUN_01ad78b0 */


void FUN_01ad78b0(longlong param_1,char param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  int local_4c;
  longlong local_40 [2];
  
  local_40[0] = 0;
  cVar2 = FUN_01acff30(param_1,local_40);
  if (cVar2 == '\x02') {
    bVar11 = true;
    lVar5 = FUN_004aeac0(local_40[0],0);
    lVar5 = *(longlong *)(lVar5 + 0x78);
    iVar10 = *(int *)(local_40[0] + 0x10) + -1;
    local_4c = 1;
    if (0 < iVar10) {
      do {
        lVar6 = FUN_004aeac0(local_40[0],local_4c);
        if (lVar5 != *(longlong *)(lVar6 + 0x78)) {
          bVar11 = false;
        }
        local_4c = local_4c + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (bVar11) {
      for (local_4c = 1;
          iVar10 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))
                             (*(longlong **)(param_1 + 0xd8)), local_4c <= iVar10;
          local_4c = local_4c + 1) {
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                          (*(longlong **)(param_1 + 0xd8),local_4c + -1);
        uVar7 = FUN_004aeac0(local_40[0],0);
        iVar10 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0xc0))
                           (*(longlong **)(lVar5 + 0x80),uVar7);
        if (iVar10 != -1) break;
      }
      iVar10 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8))
      ;
      if (iVar10 < local_4c) {
        FUN_00410f20(local_40[0]);
      }
      else {
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                          (*(longlong **)(param_1 + 0xd8),local_4c + -1);
        plVar8 = (longlong *)FUN_01ccd700(&DAT_01ccbf00,1);
        plVar8[0xc] = param_1;
        *(undefined1 *)(plVar8 + 0x1e) = 0;
        *(undefined1 *)(plVar8 + 0xe) = 0;
        if (*(byte *)(lVar5 + 0x58) < 8) {
          bVar11 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                    (*(byte *)(lVar5 + 0x58) & 0x1f) & 1U) != 0;
        }
        else {
          bVar11 = false;
        }
        if (bVar11) {
          lVar6 = FUN_004aeac0(local_40[0],0);
          lVar9 = FUN_004aeac0(local_40[0],0);
          lVar6 = (**(code **)(**(longlong **)(lVar6 + 200) + 0x58))
                            (*(longlong **)(lVar6 + 200),*(undefined8 *)(lVar9 + 0xe0));
          plVar8[0x17] = lVar6;
          lVar6 = FUN_004aeac0(local_40[0],0);
          lVar9 = FUN_004aeac0(local_40[0],0);
          lVar6 = (**(code **)(**(longlong **)(lVar6 + 200) + 0x60))
                            (*(longlong **)(lVar6 + 200),*(undefined8 *)(lVar9 + 0xe0));
          plVar8[0x18] = lVar6;
          iVar10 = *(int *)(local_40[0] + 0x10) + -1;
          local_4c = 1;
          if (0 < iVar10) {
            do {
              lVar6 = FUN_004aeac0(local_40[0],local_4c);
              lVar9 = FUN_004aeac0(local_40[0],local_4c);
              uVar7 = (**(code **)(**(longlong **)(lVar6 + 200) + 0x58))
                                (*(longlong **)(lVar6 + 200),*(undefined8 *)(lVar9 + 0xe0));
              lVar6 = FUN_00b90650(plVar8[0x17],uVar7);
              plVar8[0x17] = lVar6;
              lVar6 = FUN_004aeac0(local_40[0],local_4c);
              lVar9 = FUN_004aeac0(local_40[0],local_4c);
              uVar7 = (**(code **)(**(longlong **)(lVar6 + 200) + 0x60))
                                (*(longlong **)(lVar6 + 200),*(undefined8 *)(lVar9 + 0xe0));
              lVar6 = FUN_00b90620(plVar8[0x18],uVar7);
              plVar8[0x18] = lVar6;
              local_4c = local_4c + 1;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        else {
          lVar6 = FUN_004aeac0(local_40[0],0);
          lVar9 = FUN_004aeac0(local_40[0],0);
          lVar6 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x58))
                            (*(longlong **)(lVar6 + 0x80),*(undefined8 *)(lVar9 + 0x98));
          plVar8[0x17] = lVar6;
          lVar6 = FUN_004aeac0(local_40[0],0);
          lVar9 = FUN_004aeac0(local_40[0],0);
          lVar6 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x60))
                            (*(longlong **)(lVar6 + 0x80),*(undefined8 *)(lVar9 + 0x98));
          plVar8[0x18] = lVar6;
        }
        plVar8[0x19] = plVar8[0x17];
        plVar8[0x1a] = plVar8[0x18];
        uVar3 = FUN_01ccdde0(plVar8);
        uVar4 = FUN_01ccde00(plVar8);
        FUN_01cd43b0(plVar8,uVar3,uVar4);
        plVar8[0x19] = plVar8[0x17];
        plVar8[0x1a] = plVar8[0x18];
        (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x28))(*(longlong **)(lVar5 + 0x70));
        (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x28))(*(longlong **)(lVar5 + 0x78));
        iVar10 = *(int *)(lVar5 + 0x20);
        iVar1 = *(int *)(lVar5 + 0x18);
        uVar3 = FUN_0040c770((double)(*(int *)(lVar5 + 0x1c) - *(int *)(lVar5 + 0x14)) * 0.15);
        uVar4 = FUN_0040c770((double)(iVar10 - iVar1) * 0.15);
        iVar10 = FUN_00b905f0(uVar3,uVar4);
        uVar3 = FUN_0040c770((double)iVar10 * 0.2);
        *(undefined4 *)((longlong)plVar8 + 0x94) = uVar3;
        FUN_005fce30(plVar8[0x13],*(undefined4 *)(lVar5 + 0x90));
        FUN_005fce30(plVar8[0x14],*(undefined4 *)(lVar5 + 0x90));
        plVar8[0xc] = param_1;
        plVar8[0xd] = lVar5;
        (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x80))
                  (*(longlong **)(lVar5 + 0x70),&LAB_01ad7f58,plVar8);
        uVar7 = (**(code **)(*plVar8 + 0x130))(plVar8);
        if (*(byte *)(lVar5 + 0x58) < 8) {
          bVar11 = ((int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1) <<
                    (*(byte *)(lVar5 + 0x58) & 0x1f) & 1U) != 0;
        }
        else {
          bVar11 = false;
        }
        if (bVar11) {
          iVar10 = *(int *)(local_40[0] + 0x10);
          local_4c = 0;
          if (-1 < iVar10 + -1) {
            do {
              lVar6 = FUN_004aeac0(local_40[0],local_4c);
              uVar7 = FUN_004aeac0(local_40[0],local_4c);
              FUN_004aee30(*(undefined8 *)(*(longlong *)(lVar6 + 0xf8) + 0xf8),uVar7);
              FUN_004aee80(*(undefined8 *)(*(longlong *)(lVar6 + 0xf8) + 0xf8));
              *(longlong **)(lVar6 + 0xf8) = plVar8;
              uVar7 = FUN_004aeac0(local_40[0],local_4c);
              FUN_004ae7e0(plVar8[0x1f],uVar7);
              local_4c = local_4c + 1;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        else {
          iVar10 = *(int *)(local_40[0] + 0x10);
          local_4c = 0;
          if (-1 < iVar10 + -1) {
            do {
              lVar6 = FUN_004aeac0(local_40[0],local_4c);
              uVar7 = FUN_004aeac0(local_40[0],local_4c);
              FUN_004aee30(*(undefined8 *)(*(longlong *)(lVar6 + 0xe8) + 0xf8),uVar7);
              FUN_004aee80(*(undefined8 *)(*(longlong *)(lVar6 + 0xe8) + 0xf8));
              *(longlong **)(lVar6 + 0xe8) = plVar8;
              uVar7 = FUN_004aeac0(local_40[0],local_4c);
              FUN_004ae7e0(plVar8[0x1f],uVar7);
              local_4c = local_4c + 1;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        *(undefined1 *)(param_1 + 0x10d) = 0;
        FUN_00410f20(local_40[0]);
        if (param_2 != '\0') {
          FUN_01ce4cd0(lVar5,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78));
          FUN_01a8dee0(*(undefined8 *)(param_1 + 0xe8),lVar5);
          FUN_01ae5650(param_1);
        }
        FUN_01add6f0(param_1,0);
      }
    }
    else {
      FUN_00410f20(local_40[0]);
    }
  }
  else {
    FUN_00410f20(local_40[0]);
  }
  return;
}

