/* Ghidra address: 00d07320 */
/* Ghidra symbol: FUN_00d07320 */


undefined1 FUN_00d07320(longlong param_1,undefined2 *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_1078 [4088];
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  undefined2 auStack_58 [7];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 *local_34;
  int local_2c;
  
  local_40 = 0;
  local_48 = 0;
  uVar11 = ((longlong)param_3 + 1) * 2 + 0xfU & 0xfffffffffffffff0;
  uVar14 = -uVar11;
  uVar12 = uVar14 & 0xfff;
  while ((longlong)uVar14 < (longlong)uVar12) {
    auStack_1078[uVar12] = (char)(uVar12 - 0x1000);
    uVar12 = uVar12 - 0x1000;
  }
  lVar8 = -uVar11;
  puVar13 = (undefined2 *)((longlong)auStack_58 + lVar8);
  for (lVar10 = (longlong)param_3 + 1; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *param_2;
    param_2 = param_2 + 1;
    puVar13 = puVar13 + 1;
  }
  local_34 = (undefined2 *)((longlong)auStack_58 + lVar8);
  *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd073ad;
  cVar9 = FUN_00d072c0(auStack_78);
  if (cVar9 == '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x110) = 0;
    local_49 = 1;
    goto LAB_00d077c6;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd073dd;
  local_2c = FUN_00d065e0(uVar3);
  uVar12 = (longlong)local_2c % 100 & 0xffffffff;
  bVar15 = false;
  if ((local_2c / 100 == 3) && (local_2c != 0x130)) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd0) == 0) {
      *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd07420;
      FUN_00d06e90(auStack_78,uVar12);
      local_49 = 1;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x1fc);
      *piVar1 = *piVar1 + 1;
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xd0);
      *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd0745a;
      FUN_00414b50(&local_40,uVar3);
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x150);
      *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd07475;
      FUN_00414b50(&local_48,uVar3);
      plVar4 = *(longlong **)(param_1 + 8);
      uVar2 = *(undefined4 *)((longlong)plVar4 + 0x1fc);
      pcVar5 = *(code **)(*plVar4 + 400);
      *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd0749b;
      cVar9 = (*pcVar5)(plVar4,&local_40,&local_48,uVar2);
      uVar3 = local_40;
      if (cVar9 == '\0') {
        *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd074a7;
        FUN_00d06e90(auStack_78);
        local_49 = 1;
      }
      else {
        lVar10 = *(longlong *)(param_1 + 8);
        if ((*(char *)(lVar10 + 0x204) == '\0') ||
           (*(int *)(lVar10 + 0x200) <= *(int *)(lVar10 + 0x1fc))) {
          local_49 = 1;
          lVar10 = *(longlong *)(param_1 + 0x18);
          *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd075a6;
          FUN_00414ad0(lVar10 + 0xd0,uVar3);
        }
        else {
          local_49 = 0;
          lVar10 = *(longlong *)(param_1 + 0x10);
          *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd074fb;
          FUN_00414ad0(lVar10 + 0x148,uVar3);
          uVar3 = local_48;
          if (((local_2c == 0x12e) &&
              ((*(ushort *)(*(longlong *)(param_1 + 8) + 0x205) & 0x40) != 0)) ||
             (local_2c == 0x12f)) {
            lVar10 = *(longlong *)(param_1 + 0x10);
            *(undefined8 *)(lVar10 + 0x158) = 0;
            *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd07550;
            FUN_00414ad0(lVar10 + 0x150,&DAT_00d07818);
          }
          else {
            lVar10 = *(longlong *)(param_1 + 0x10);
            *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd0756d;
            FUN_00414ad0(lVar10 + 0x150,uVar3);
          }
          lVar10 = *(longlong *)(param_1 + 0x10);
          *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd07584;
          FUN_00414480(lVar10 + 0x138);
        }
        plVar4 = *(longlong **)(param_1 + 8);
        pcVar5 = *(code **)(*plVar4 + 0xf0);
        *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd075bd;
        cVar9 = (*pcVar5)(plVar4);
        if (cVar9 != '\0') {
          *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd075cd;
          FUN_00d071c0(auStack_78);
        }
      }
    }
    goto LAB_00d077c6;
  }
  if (local_2c / 100 != 2) {
    if (local_2c != 0x191) {
      if (local_2c != 0x197) {
        *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd07723;
        FUN_00d06e90(auStack_78,uVar12);
        local_49 = 1;
        goto LAB_00d077c6;
      }
      plVar4 = *(longlong **)(param_1 + 8);
      if (*(int *)((longlong)plVar4 + 0x1cc) < *(int *)((longlong)plVar4 + 0x1e4)) {
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        pcVar5 = *(code **)(*plVar4 + 0x188);
        *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd076c4;
        cVar9 = (*pcVar5)(plVar4,uVar3,uVar6);
        if (cVar9 != '\0') {
          bVar15 = (*(ushort *)(*(longlong *)(param_1 + 8) + 0x205) & 1) != 0;
          goto LAB_00d0772d;
        }
      }
      plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x218) + 8);
      if (plVar4 != (longlong *)0x0) {
        pcVar5 = *(code **)(*plVar4 + 0x40);
        *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd076ec;
        (*pcVar5)(plVar4);
      }
      *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd076f4;
      FUN_00d06e90(auStack_78);
      local_49 = 1;
      goto LAB_00d077c6;
    }
    plVar4 = *(longlong **)(param_1 + 8);
    if ((int)plVar4[0x39] < *(int *)((longlong)plVar4 + 0x1e4)) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      pcVar5 = *(code **)(*plVar4 + 0x180);
      *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd07633;
      cVar9 = (*pcVar5)(plVar4,uVar3,uVar6);
      if (cVar9 != '\0') {
        bVar15 = (*(ushort *)(*(longlong *)(param_1 + 8) + 0x205) & 1) != 0;
        goto LAB_00d0772d;
      }
    }
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x130);
    if (plVar4 != (longlong *)0x0) {
      pcVar5 = *(code **)(*plVar4 + 0x40);
      *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd07657;
      (*pcVar5)(plVar4);
    }
    *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd0765f;
    FUN_00d06e90(auStack_78);
    local_49 = 1;
    goto LAB_00d077c6;
  }
LAB_00d0772d:
  if (bVar15) {
    *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd07739;
    FUN_00d071c0(auStack_78);
    local_49 = 4;
    goto LAB_00d077c6;
  }
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x150);
  *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd07761;
  cVar9 = FUN_00879070(uVar3,L"HEAD");
  if (cVar9 == '\0') {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x138);
    *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd07783;
    cVar9 = FUN_00879070(uVar3,L"HEAD");
    if ((cVar9 != '\0') || (local_2c == 0xcc)) goto LAB_00d07790;
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd077c0;
    FUN_00d03810(uVar3,uVar6,uVar7);
  }
  else {
LAB_00d07790:
    *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd07798;
    FUN_00d071c0(auStack_78);
  }
  local_49 = 1;
LAB_00d077c6:
  *(undefined8 *)((longlong)&uStack_80 + lVar8) = 0xd077d4;
  FUN_00414560(&local_48,2);
  return local_49;
}

