/* Ghidra address: 01c2d830 */
/* Ghidra symbol: FUN_01c2d830 */


void FUN_01c2d830(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
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
  undefined8 local_40;
  undefined1 local_31 [9];
  
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_40 = 0;
  local_48 = 0;
  (**(code **)(*param_1 + 0x10))(param_1);
  iVar4 = 0;
  iVar5 = 1;
  do {
    do {
      lVar8 = (longlong)iVar4;
      FUN_004169a0(&local_40,&DAT_03155c90 + (longlong)iVar5 * 0x41 + lVar8 * 0x4100);
      FUN_004169a0(&local_48,&DAT_03155c90 + lVar8 * 0x4100);
      FUN_01c2d220(auStack_108,local_40,local_48,local_31);
      iVar5 = iVar5 + 1;
    } while ((&DAT_03155c90)[(longlong)iVar5 * 0x41 + lVar8 * 0x4100] != '\0');
    iVar5 = 1;
    iVar4 = iVar4 + 1;
  } while ((&DAT_03155cd1)[(longlong)iVar4 * 0x4100] != '\0');
  FUN_004af4a0(param_1,FUN_01c29c70);
  if (DAT_03566762 != '\0') {
    iVar5 = 0;
    iVar4 = (int)param_1[2];
    if (-1 < iVar4 + -1) {
      do {
        FUN_0043f750(&local_58,iVar5);
        lVar7 = (longlong)iVar5;
        FUN_0043f750(&local_60,*(undefined2 *)(*(longlong *)(param_1[1] + lVar7 * 8) + 0x4a));
        lVar8 = *(longlong *)(param_1[1] + lVar7 * 8);
        FUN_004169a0(&local_68,lVar8 + 8);
        FUN_0043f750(&local_70,*(undefined1 *)(lVar8 + 0x4c));
        FUN_0043f750(&local_78,*(undefined1 *)(*(longlong *)(param_1[1] + lVar7 * 8) + 0x4d));
        local_e8 = local_60;
        local_e0 = &DAT_01c2de64;
        local_d8 = local_68;
        local_d0 = &DAT_01c2de74;
        local_c8 = local_70;
        local_c0 = &LAB_01c2de88;
        local_b8 = local_78;
        FUN_00416cd0(&local_50,9,local_58,L"  Line:");
        uVar3 = FUN_0040f200(&DAT_03565e80,local_50);
        FUN_0040f590(uVar3);
        FUN_00409900();
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  iVar4 = (int)param_1[2];
  iVar5 = 0;
  if (iVar4 - 1U < 0x80000000) {
    do {
      iVar6 = 0;
      iVar9 = (int)param_1[2];
      if (-1 < iVar9 + -1) {
        do {
          if ((iVar5 != iVar6) &&
             (*(short *)(*(longlong *)(param_1[1] + (longlong)iVar5 * 8) + 0x4a) ==
              *(short *)(*(longlong *)(param_1[1] + (longlong)iVar6 * 8) + 0x4a))) {
            bVar1 = *(byte *)(*(longlong *)(param_1[1] + (longlong)iVar6 * 8) + 0x4c);
            lVar8 = *(longlong *)(param_1[1] + (longlong)iVar5 * 8);
            bVar2 = *(byte *)(lVar8 + 0x4c);
            if ((bVar1 <= bVar2) || ((uint)bVar2 + (uint)*(byte *)(lVar8 + 0x4d) <= (uint)bVar1)) {
              lVar8 = *(longlong *)(param_1[1] + (longlong)iVar6 * 8);
              bVar1 = *(byte *)(lVar8 + 0x4c);
              lVar7 = *(longlong *)(param_1[1] + (longlong)iVar5 * 8);
              bVar2 = *(byte *)(lVar7 + 0x4c);
              if ((bVar1 != bVar2) ||
                 ((uint)bVar2 + (uint)*(byte *)(lVar7 + 0x4d) <=
                  (uint)bVar1 + (uint)*(byte *)(lVar8 + 0x4d))) goto LAB_01c2dc53;
            }
            *(undefined1 *)(*(longlong *)(param_1[1] + (longlong)iVar6 * 8) + 0x4e) = 0;
          }
LAB_01c2dc53:
          iVar6 = iVar6 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = 0;
  while (iVar4 < (int)param_1[2]) {
    if (*(char *)(*(longlong *)(param_1[1] + (longlong)iVar4 * 8) + 0x4e) == '\0') {
      FUN_004ae870(param_1,iVar4);
    }
    else {
      iVar4 = iVar4 + 1;
    }
  }
  if (DAT_03566762 != '\0') {
    iVar4 = (int)param_1[2];
    iVar5 = 0;
    if (-1 < iVar4 + -1) {
      do {
        FUN_0043f750(&local_88,iVar5);
        lVar7 = (longlong)iVar5;
        FUN_0043f750(&local_90,*(undefined2 *)(*(longlong *)(param_1[1] + lVar7 * 8) + 0x4a));
        lVar8 = *(longlong *)(param_1[1] + lVar7 * 8);
        FUN_004169a0(&local_98,lVar8 + 8);
        FUN_0043f750(&local_a0,*(undefined1 *)(lVar8 + 0x4c));
        FUN_0043f750(&local_a8,*(undefined1 *)(*(longlong *)(param_1[1] + lVar7 * 8) + 0x4d));
        local_e8 = local_90;
        local_e0 = &DAT_01c2de64;
        local_d8 = local_98;
        local_d0 = &DAT_01c2de74;
        local_c8 = local_a0;
        local_c0 = &LAB_01c2de88;
        local_b8 = local_a8;
        FUN_00416cd0(&local_80,9,local_88,L"  Line:");
        uVar3 = FUN_0040f200(&DAT_03565e80,local_80);
        FUN_0040f590(uVar3);
        FUN_00409900();
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_004aee80(param_1);
  FUN_00414560(&local_a8,0xe);
  return;
}

