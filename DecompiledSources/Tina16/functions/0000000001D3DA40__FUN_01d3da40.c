/* Ghidra address: 01d3da40 */
/* Ghidra symbol: FUN_01d3da40 */


undefined8 * FUN_01d3da40(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_7f8 [32];
  undefined *local_7d8;
  undefined8 *local_7c8;
  undefined8 local_7c0;
  int local_7b8;
  int local_7b4;
  undefined *local_7b0;
  undefined8 local_7a8;
  undefined8 local_7a0;
  undefined8 local_798;
  undefined8 local_790;
  undefined8 local_788;
  undefined8 local_780;
  undefined8 local_778;
  undefined8 local_770;
  undefined1 local_768 [137];
  undefined4 local_6df;
  byte local_69c [95];
  undefined8 local_63d [96];
  undefined1 local_33d [256];
  undefined1 local_23d [256];
  undefined1 local_13d [256];
  undefined8 local_3d;
  undefined8 uStack_35;
  undefined4 uStack_2d;
  undefined1 uStack_29;
  
  local_7a0 = 0;
  local_7a8 = 0;
  local_7b0 = (undefined *)0x0;
  local_788 = 0;
  local_790 = 0;
  local_798 = 0;
  local_770 = 0;
  local_778 = 0;
  local_780 = 0;
  local_7c8 = param_1;
  local_7c0 = param_2;
  uVar3 = FUN_01d03160(param_2);
  uVar9 = (uint)uVar3;
  cVar2 = FUN_01d3e460(uVar3);
  if (cVar2 != '\0') {
    local_13d[0] = 0;
    local_23d[0] = 0;
    local_33d[0] = 0;
    FUN_0040d200(local_63d,0x300,0);
    uVar4 = FUN_01d39f20(uVar3);
    lVar6 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,uVar4);
    local_7b8 = *(int *)(lVar6 + 0xaf);
    lVar6 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,uVar4);
    bVar1 = *(byte *)(lVar6 + 0xb3);
    uVar9 = (uint)bVar1;
    cVar2 = FUN_01d03590(local_7c0);
    if (cVar2 == '\0') {
      iVar5 = 1000000;
      uVar10 = (uint)bVar1;
      local_7b4 = 0;
      if (-1 < (int)(uVar9 - 1)) {
        do {
          puVar11 = (undefined8 *)
                    (*(longlong *)PTR_DAT_02001338 + -0x15 +
                    (longlong)(local_7b8 + local_7b4) * 0x15);
          uStack_35 = puVar11[1];
          uStack_2d = *(undefined4 *)(puVar11 + 2);
          uStack_29 = *(undefined1 *)((longlong)puVar11 + 0x14);
          local_3d._1_2_ = (short)((ulonglong)*puVar11 >> 8);
          if (local_3d._1_2_ < iVar5) {
            iVar5 = (int)local_3d._1_2_;
          }
          local_7b4 = local_7b4 + 1;
          uVar9 = uVar9 - 1;
          local_3d = *puVar11;
        } while (uVar9 != 0);
      }
      local_7b4 = 0;
      if (-1 < (int)(uVar10 - 1)) {
        do {
          puVar11 = (undefined8 *)
                    (*(longlong *)PTR_DAT_02001338 + -0x15 +
                    (longlong)(local_7b8 + local_7b4) * 0x15);
          uVar7 = *puVar11;
          uStack_35 = puVar11[1];
          uStack_2d = *(undefined4 *)(puVar11 + 2);
          uStack_29 = *(undefined1 *)((longlong)puVar11 + 0x14);
          local_3d._1_2_ = (short)((ulonglong)uVar7 >> 8);
          local_3d = uVar7;
          if (local_3d._1_2_ == iVar5) {
            FUN_004154b0(&local_778,local_23d,0);
            FUN_004154b0(&local_780,(longlong)&local_3d + 5,0);
            local_7d8 = &DAT_01d3de98;
            FUN_00415980(&local_770,3,local_778,local_780);
            FUN_00415560(local_23d,local_770);
          }
          else {
            FUN_004154b0(&local_790,local_33d,0);
            FUN_004154b0(&local_798,(longlong)&local_3d + 5,0);
            local_7d8 = &DAT_01d3de98;
            FUN_00415980(&local_788,3,local_790,local_798);
            FUN_00415560(local_33d,local_788);
          }
          local_7b4 = local_7b4 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      FUN_00415260(local_23d,0xff,local_23d[0],1);
      FUN_00415260(local_33d,0xff,local_33d[0],1);
      FUN_004154b0(&local_7a8,local_23d,0);
      FUN_004154b0(&local_7b0,local_33d,0);
      local_7d8 = local_7b0;
      FUN_00415980(&local_7a0,3,local_7a8,&LAB_01d3dea8);
      FUN_00415560(local_13d,local_7a0,0xff);
      FUN_00414ff0(local_63d,local_13d);
      puVar11 = local_63d;
      puVar12 = local_7c8;
      for (lVar6 = 0x60; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      goto LAB_01d3de4a;
    }
    uVar7 = FUN_0172a2b0(&DAT_01728b68,1,*(undefined8 *)PTR_DAT_02001f18);
    FUN_01cfac60(local_7c0,local_768);
    FUN_0172a910(uVar7,local_6df);
    FUN_0172a920(uVar7,local_69c,0x5f);
    FUN_00410f20(uVar7);
    uVar9 = FUN_01d3d9b0(auStack_7f8,*(undefined2 *)(&DAT_01ff5734 + (ulonglong)local_69c[0] * 2),
                         local_69c);
  }
  iVar5 = 0;
  puVar8 = &DAT_01ff57c0;
  puVar11 = &DAT_01ff6240;
  do {
    if (*puVar8 == uVar9) {
      puVar12 = local_7c8;
      for (lVar6 = 0x60; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      break;
    }
    iVar5 = iVar5 + 1;
    puVar11 = puVar11 + 0x60;
    puVar8 = puVar8 + 1;
  } while (iVar5 != 0x1a);
LAB_01d3de4a:
  FUN_00414590(&local_7b0,9);
  return local_7c8;
}

