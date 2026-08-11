/* Ghidra address: 01cfa490 */
/* Ghidra symbol: FUN_01cfa490 */


void FUN_01cfa490(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  FUN_017be010(param_1,param_2);
  *(undefined1 *)(param_2 + 0xd1) = *(undefined1 *)((longlong)param_1 + 0xd1);
  *(undefined1 *)(param_2 + 0xd3) = *(undefined1 *)((longlong)param_1 + 0xd3);
  if (DAT_01ff0570 == '\0') {
    uVar3 = FUN_01cfd4d0(param_1,param_1[0x18]);
    *(undefined8 *)(param_2 + 0xc0) = uVar3;
  }
  else {
    *(undefined1 *)(param_2 + 0xd4) = 1;
    *(longlong *)(param_2 + 0xc0) = param_1[0x18];
  }
  lVar6 = param_1[0x19];
  if (lVar6 == 0) {
    *(undefined8 *)(param_2 + 200) = 0;
  }
  else {
    iVar9 = FUN_01cfd2d0(param_1);
    FUN_00409a70(lVar6,*(undefined8 *)(param_2 + 200),(longlong)iVar9);
  }
  FUN_00414ad0(param_2 + 0x180,param_1[0x30]);
  FUN_00414ad0(param_2 + 400,param_1[0x32]);
  *(char *)(param_2 + 0x188) = (char)param_1[0x31];
  FUN_00414ff0(param_2 + 0x1b0,param_1 + 0x36);
  FUN_00414ad0(param_2 + 0x3b0,param_1[0x76]);
  FUN_017feb40(param_2);
  *(undefined1 *)(param_2 + 0x3b9) = *(undefined1 *)((longlong)param_1 + 0x3b9);
  puVar4 = (undefined8 *)((longlong)param_1 + 0x26);
  puVar5 = (undefined8 *)(param_2 + 0x26);
  for (lVar6 = 5; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
  *(undefined2 *)(param_2 + 0x24) = *(undefined2 *)((longlong)param_1 + 0x24);
  *(short *)(param_2 + 0x50) = (short)param_1[10];
  *(undefined4 *)(param_2 + 0x18c) = *(undefined4 *)((longlong)param_1 + 0x18c);
  *(undefined8 *)(param_2 + 0x3bc) = *(undefined8 *)((longlong)param_1 + 0x3bc);
  *(undefined2 *)(param_2 + 0x3c4) = *(undefined2 *)((longlong)param_1 + 0x3c4);
  *(longlong *)(param_2 + 0x3c8) = param_1[0x79];
  *(char *)(param_2 + 0x3d0) = (char)param_1[0x7a];
  *(undefined1 *)(param_2 + 0x3d1) = *(undefined1 *)((longlong)param_1 + 0x3d1);
  *(undefined1 *)(param_2 + 0x3d3) = *(undefined1 *)((longlong)param_1 + 0x3d3);
  *(undefined1 *)(param_2 + 0x3d2) = *(undefined1 *)((longlong)param_1 + 0x3d2);
  *(undefined4 *)(param_2 + 0x154) = *(undefined4 *)((longlong)param_1 + 0x154);
  FUN_01d01990(param_2,*(undefined2 *)((longlong)param_1 + 0xee));
  FUN_01d01aa0(param_2,(short)param_1[0x1e]);
  lVar6 = param_1[0x1b];
  if (lVar6 == 0) {
    *(undefined8 *)(param_2 + 0xd8) = 0;
  }
  else {
    iVar9 = (**(code **)(*param_1 + 0x1c8))(param_1);
    FUN_00409a70(lVar6,*(undefined8 *)(param_2 + 0xd8),(longlong)(iVar9 * 0x10c));
  }
  if (param_1[0x1c] == 0) {
    *(undefined8 *)(param_2 + 0xe0) = 0;
  }
  else {
    iVar9 = (**(code **)(*param_1 + 0x1d0))();
    iVar2 = 0;
    if (-1 < iVar9 + -1) {
      do {
        iVar7 = 0;
        iVar8 = *(int *)(*(longlong *)(param_1[0x1c] + (longlong)iVar2 * 8) + 0x10);
        if (-1 < iVar8 + -1) {
          do {
            uVar3 = FUN_004aeac0(*(undefined8 *)(param_1[0x1c] + (longlong)iVar2 * 8),iVar7);
            FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_2 + 0xe0) + (longlong)iVar2 * 8),uVar3)
            ;
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        iVar2 = iVar2 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  *(undefined4 *)(param_2 + 0x3ec) = *(undefined4 *)((longlong)param_1 + 0x3ec);
  iVar2 = 0;
  iVar9 = *(int *)(param_1[0x7e] + 0x10);
  if (-1 < iVar9 + -1) {
    do {
      puVar4 = (undefined8 *)FUN_004095c0(0x18);
      puVar5 = (undefined8 *)FUN_004aeac0(param_1[0x7e],iVar2);
      *puVar4 = *puVar5;
      puVar4[1] = puVar5[1];
      puVar4[2] = puVar5[2];
      FUN_004ae7e0(*(undefined8 *)(param_2 + 0x3f0),puVar4);
      iVar2 = iVar2 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  cVar1 = (**(code **)(*param_1 + 0x2d8))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)param_1[0x33] + 0xa0))
              ((longlong *)param_1[0x33],*(undefined8 *)(param_2 + 0x198));
  }
  (**(code **)(**(longlong **)(param_2 + 0x4f8) + 0x10))
            (*(longlong **)(param_2 + 0x4f8),param_1[0x9f]);
  *(char *)(param_2 + 0x3b8) = (char)param_1[0x77];
  (**(code **)(**(longlong **)(param_2 + 0x3e0) + 0x10))
            (*(longlong **)(param_2 + 0x3e0),param_1[0x7c]);
  *(char *)(param_2 + 1000) = (char)param_1[0x7d];
  (**(code **)(**(longlong **)(param_2 + 0x500) + 0x10))
            (*(longlong **)(param_2 + 0x500),param_1[0xa0]);
  (**(code **)(**(longlong **)(param_2 + 0x508) + 0x10))
            (*(longlong **)(param_2 + 0x508),param_1[0xa1]);
  if (param_1[0xa2] != 0) {
    uVar3 = FUN_00c3f320(param_1[0xa2]);
    *(undefined8 *)(param_2 + 0x510) = uVar3;
  }
  *(longlong *)(param_2 + 0x518) = param_1[0xa3];
  *(longlong *)(param_2 + 0x520) = param_1[0xa4];
  *(char *)(param_2 + 0x540) = (char)param_1[0xa8];
  *(longlong *)(param_2 + 0x518) = param_1[0xa3];
  *(longlong *)(param_2 + 0x520) = param_1[0xa4];
  return;
}

