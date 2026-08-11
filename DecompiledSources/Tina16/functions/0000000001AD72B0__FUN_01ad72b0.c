/* Ghidra address: 01ad72b0 */
/* Ghidra symbol: FUN_01ad72b0 */


undefined1 FUN_01ad72b0(longlong param_1,char param_2,char param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 local_56;
  int local_54;
  longlong local_50;
  undefined8 local_48;
  longlong local_40 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_56 = 1;
  local_40[0] = 0;
  cVar3 = FUN_01acff30(param_1,local_40);
  if (cVar3 == '\x02') {
    bVar2 = true;
    lVar6 = FUN_004aeac0(local_40[0],0);
    lVar6 = *(longlong *)(lVar6 + 0x78);
    iVar10 = *(int *)(local_40[0] + 0x10) + -1;
    local_54 = 1;
    if (0 < iVar10) {
      do {
        lVar7 = FUN_004aeac0(local_40[0],local_54);
        if (lVar6 != *(longlong *)(lVar7 + 0x78)) {
          bVar2 = false;
        }
        local_54 = local_54 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (param_3 != '\0') {
      lVar7 = FUN_004aeac0(local_40[0],0);
      if (*(longlong *)(*(longlong *)(lVar7 + 0x100) + 0x118) != 0) {
        bVar2 = false;
      }
    }
    if (bVar2) {
      plVar8 = (longlong *)FUN_01ccd700(&DAT_01ccbf00,1);
      plVar8[0xc] = param_1;
      *(undefined1 *)(plVar8 + 0x1e) = 1;
      lVar7 = FUN_004aeac0(local_40[0],0);
      *(undefined1 *)(plVar8 + 0xe) = *(undefined1 *)(*(longlong *)(lVar7 + 0x100) + 0x70);
      lVar7 = FUN_004aeac0(local_40[0],0);
      lVar9 = FUN_004aeac0(local_40[0],0);
      lVar7 = (**(code **)(**(longlong **)(lVar7 + 200) + 0x68))
                        (*(longlong **)(lVar7 + 200),*(undefined8 *)(lVar9 + 0xe0));
      plVar8[0x17] = lVar7;
      lVar7 = FUN_004aeac0(local_40[0],0);
      lVar9 = FUN_004aeac0(local_40[0],0);
      lVar7 = (**(code **)(**(longlong **)(lVar7 + 200) + 0x70))
                        (*(longlong **)(lVar7 + 200),*(undefined8 *)(lVar9 + 0xe0));
      plVar8[0x18] = lVar7;
      iVar10 = *(int *)(local_40[0] + 0x10) + -1;
      local_54 = 1;
      if (0 < iVar10) {
        do {
          lVar7 = FUN_004aeac0(local_40[0],local_54);
          lVar9 = FUN_004aeac0(local_40[0],local_54);
          uVar11 = (**(code **)(**(longlong **)(lVar7 + 200) + 0x68))
                             (*(longlong **)(lVar7 + 200),*(undefined8 *)(lVar9 + 0xe0));
          lVar7 = FUN_00b90650(plVar8[0x17],uVar11);
          plVar8[0x17] = lVar7;
          lVar7 = FUN_004aeac0(local_40[0],local_54);
          lVar9 = FUN_004aeac0(local_40[0],local_54);
          uVar11 = (**(code **)(**(longlong **)(lVar7 + 200) + 0x70))
                             (*(longlong **)(lVar7 + 200),*(undefined8 *)(lVar9 + 0xe0));
          lVar7 = FUN_00b90620(plVar8[0x18],uVar11);
          plVar8[0x18] = lVar7;
          local_54 = local_54 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      lVar7 = FUN_004aeac0(local_40[0],0);
      uVar4 = FUN_005fd4d0(*(undefined8 *)(lVar7 + 0x60));
      FUN_005fc860(plVar8[0x13],uVar4);
      uVar11 = FUN_004aeac0(local_40[0],0);
      FUN_01ab2940(uVar11,&local_50);
      if (local_50 != 0) {
        uVar11 = FUN_004aeac0(local_40[0],0);
        FUN_01ab2940(uVar11,&local_48);
        iVar10 = FUN_004170c0(&DAT_01ad789c,local_48,1);
        if ((-1 < iVar10) && (1 < *(int *)(local_40[0] + 0x10))) {
          iVar10 = FUN_004170c0(&DAT_01ad789c,local_48,1);
          FUN_00416dc0(&local_48,local_48,1,iVar10 + -1);
        }
        FUN_01cd64a0(plVar8,local_48);
      }
      plVar8[0xd] = lVar6;
      (**(code **)(**(longlong **)(lVar6 + 0x70) + 0x28))(*(longlong **)(lVar6 + 0x70));
      (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x28))(*(longlong **)(lVar6 + 0x78));
      iVar10 = *(int *)(lVar6 + 0x20);
      iVar1 = *(int *)(lVar6 + 0x18);
      uVar4 = FUN_0040c770((double)(*(int *)(lVar6 + 0x1c) - *(int *)(lVar6 + 0x14)) * 0.15);
      uVar5 = FUN_0040c770((double)(iVar10 - iVar1) * 0.15);
      iVar10 = FUN_00b905f0(uVar4,uVar5);
      uVar4 = FUN_0040c770((double)iVar10 * 0.2);
      *(undefined4 *)((longlong)plVar8 + 0x94) = uVar4;
      FUN_005fce30(plVar8[0x13],*(undefined4 *)(lVar6 + 0x90));
      FUN_005fce30(plVar8[0x14],*(undefined4 *)(lVar6 + 0x90));
      plVar8[0xc] = param_1;
      plVar8[0xd] = lVar6;
      plVar8[0x19] = plVar8[0x17];
      plVar8[0x1a] = plVar8[0x18];
      uVar4 = FUN_01ccddc0(plVar8);
      uVar5 = FUN_01ccddd0(plVar8);
      FUN_01cd43b0(plVar8,uVar4,uVar5);
      plVar8[0x19] = plVar8[0x17];
      plVar8[0x1a] = plVar8[0x18];
      if ((param_3 == '\0') || (cVar3 = FUN_01ce33d0(lVar6), cVar3 == '\0')) {
        (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x80))
                  (*(longlong **)(lVar6 + 0x78),&DAT_01ad78ac,plVar8);
      }
      else {
        lVar7 = FUN_004aeac0(local_40[0],0);
        *(longlong **)(*(longlong *)(lVar7 + 0x100) + 0x118) = plVar8;
        *(undefined1 *)(plVar8 + 0x24) = 0;
      }
      (**(code **)(*plVar8 + 0x130))(plVar8);
      iVar10 = *(int *)(local_40[0] + 0x10);
      local_54 = 0;
      if (-1 < iVar10 + -1) {
        do {
          lVar7 = FUN_004aeac0(local_40[0],local_54);
          uVar11 = FUN_004aeac0(local_40[0],local_54);
          FUN_004aee30(*(undefined8 *)(*(longlong *)(lVar7 + 0x100) + 0xf8),uVar11);
          FUN_004aee80(*(undefined8 *)(*(longlong *)(lVar7 + 0x100) + 0xf8));
          *(longlong **)(lVar7 + 0x100) = plVar8;
          uVar11 = FUN_004aeac0(local_40[0],local_54);
          FUN_004ae7e0(plVar8[0x1f],uVar11);
          local_54 = local_54 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      FUN_00410f20(local_40[0]);
      if (param_2 != '\0') {
        FUN_01ce4cd0(lVar6,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78));
        FUN_01a8dee0(*(undefined8 *)(param_1 + 0xe8),lVar6);
        FUN_01ae5650(param_1);
      }
    }
    else {
      FUN_00410f20(local_40[0]);
    }
  }
  else {
    FUN_00410f20(local_40[0]);
    local_56 = 0;
  }
  FUN_00414560(&local_50,2);
  return local_56;
}

