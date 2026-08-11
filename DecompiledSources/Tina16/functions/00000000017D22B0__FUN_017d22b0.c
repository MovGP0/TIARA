/* Ghidra address: 017d22b0 */
/* Ghidra symbol: FUN_017d22b0 */


void FUN_017d22b0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  char *pcVar8;
  undefined8 uVar9;
  int iVar10;
  double dVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int local_84;
  undefined1 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60 [2];
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  local_68 = 0;
  local_70 = 0;
  local_78 = (undefined1 *)0x0;
  local_60[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  bVar2 = false;
  plVar7 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar10 = *(int *)(param_1 + 0x2d8);
  local_84 = 1;
  bVar3 = false;
  if (0 < iVar10) {
    do {
      bVar2 = bVar3;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)local_84 * 8);
      if ((DAT_01fa4c9c == '\0') &&
         (sVar4 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                            (*(longlong **)(lVar1 + 0x128)), sVar4 == 0x32)) {
        pcVar8 = (char *)FUN_01b05ad0(lVar1,3,0,&local_29,&local_2a,&local_2b);
        if (*pcVar8 == '\x02') {
          uVar9 = FUN_0044d490(&PTR_FUN_01af3280,1);
          FUN_004134c0(uVar9);
        }
      }
      if ((DAT_01fa4c9c != '\0') &&
         (sVar4 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                            (*(longlong **)(lVar1 + 0x128)), sVar4 == 1)) {
        iVar5 = FUN_01b05600(lVar1,1);
        iVar6 = FUN_01b05600(lVar1,2);
        dVar11 = (double)FUN_0040c850((*(double *)
                                        (*(longlong *)(param_1 + 0x118) + (longlong)iVar5 * 8) -
                                      *(double *)
                                       (*(longlong *)(param_1 + 0x118) + (longlong)iVar6 * 8)) /
                                      0.001);
        if (50.0 < dVar11) {
          FUN_017c2600(*(undefined8 *)(lVar1 + 0x128),1);
          FUN_013a4720(*(undefined8 *)PTR_DAT_020032b8,
                       (longlong)*(short *)(*(longlong *)(lVar1 + 0x128) + 0x24));
          bVar2 = true;
          FUN_017ff4f0(*(undefined8 *)(lVar1 + 0x128),&local_38);
          FUN_00416cd0(&local_40,3,L"SetWireState(",local_38,&DAT_017d26d8);
          puVar12 = &local_48;
          puVar14 = &local_4c;
          FUN_0135ad60(*(undefined8 *)PTR_DAT_02001f10,local_60,local_38,L"SetWireState",puVar12,
                       puVar14,&local_50);
          uVar15 = (undefined4)((ulonglong)puVar14 >> 0x20);
          uVar13 = (undefined4)((ulonglong)puVar12 >> 0x20);
          iVar5 = FUN_00416db0(local_40,local_60[0]);
          if (iVar5 != 0) {
            FUN_00415dd0(&local_68,local_38,0);
            FUN_00415dd0(&local_70,local_48,0);
            FUN_00415dd0(&local_78,local_40,0);
            FUN_0135af50(*(undefined8 *)PTR_DAT_02001f10,local_68,local_70,local_78,
                         CONCAT44(uVar13,local_4c),CONCAT44(uVar15,local_50));
            (**(code **)(*plVar7 + 0x78))(plVar7,local_40);
          }
        }
      }
      local_84 = local_84 + 1;
      iVar10 = iVar10 + -1;
      bVar3 = bVar2;
    } while (iVar10 != 0);
  }
  if (bVar2) {
    uVar9 = FUN_019a45d0();
    FUN_019a5460(uVar9);
  }
  iVar10 = (**(code **)(*plVar7 + 0x28))(plVar7);
  if (0 < iVar10) {
    FUN_017fe590(*(undefined8 *)PTR_DAT_02001d08,plVar7,0,1);
  }
  FUN_00410f20(plVar7);
  FUN_00414590(&local_78,3);
  FUN_00414480(local_60);
  FUN_00414560(&local_48,3);
  return;
}

