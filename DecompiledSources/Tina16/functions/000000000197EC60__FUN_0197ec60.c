/* Ghidra address: 0197ec60 */
/* Ghidra symbol: FUN_0197ec60 */


void FUN_0197ec60(longlong param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                 undefined1 *param_5,int param_6)

{
  undefined1 uVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined1 auStack_1098 [4088];
  undefined8 auStack_a0 [5];
  longlong local_78 [3];
  int local_5c;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 *local_40;
  
  local_58 = 0;
  local_50[0] = 0;
  uVar10 = ((longlong)param_4 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar15 = -uVar10;
  uVar12 = uVar15 & 0xfff;
  local_78[0] = param_1;
  local_78[1] = param_2;
  while ((longlong)uVar15 < (longlong)uVar12) {
    auStack_1098[uVar12] = (char)(uVar12 - 0x1000);
    uVar12 = uVar12 - 0x1000;
  }
  lVar6 = -uVar10;
  puVar14 = (undefined8 *)((longlong)local_78 + lVar6);
  for (lVar11 = (longlong)param_4 + 1; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar14 = *param_3;
    param_3 = param_3 + 1;
    puVar14 = puVar14 + 1;
  }
  uVar10 = (longlong)param_6 + 0x10U & 0xfffffffffffffff0;
  uVar15 = -uVar10;
  uVar12 = uVar15 & 0xfff;
  local_40 = (undefined8 *)((longlong)local_78 + lVar6);
  while ((longlong)uVar15 < (longlong)uVar12) {
    uVar12 = uVar12 - 0x1000;
    auStack_1098[uVar12 + lVar6 + 0x1000] = (char)uVar12;
  }
  lVar7 = -uVar10;
  puVar16 = (undefined1 *)((longlong)local_78 + lVar7 + lVar6);
  puVar13 = puVar16;
  for (lVar11 = (longlong)param_6 + 1; lVar8 = local_78[1], lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *param_5;
    param_5 = param_5 + 1;
    puVar13 = puVar13 + 1;
  }
  if (-1 < param_4) {
    *(undefined8 *)((longlong)auStack_a0 + lVar7 + lVar6) = 0x197ed6d;
    FUN_00410ae0(lVar8,local_50);
    uVar4 = local_50[0];
    plVar2 = *(longlong **)(local_78[0] + 8);
    pcVar3 = *(code **)(*plVar2 + 0xb0);
    *(undefined8 *)((longlong)auStack_a0 + lVar7 + lVar6) = 0x197ed85;
    iVar9 = (*pcVar3)(plVar2,uVar4);
    local_5c = iVar9;
    if (iVar9 == -1) {
      *(undefined8 *)((longlong)auStack_a0 + lVar7 + lVar6) = 0x197ed9e;
      local_78[2] = FUN_0197f1f0(&DAT_0194bf80,1);
      lVar11 = local_78[1];
      *(longlong *)(local_78[2] + 0x18) = local_78[1];
      *(undefined8 *)((longlong)auStack_a0 + lVar7 + lVar6) = 0x197edb3;
      FUN_00410ae0(lVar11,&local_58);
      uVar4 = local_58;
      lVar11 = local_78[2];
      plVar2 = *(longlong **)(local_78[0] + 8);
      pcVar3 = *(code **)(*plVar2 + 0x80);
      *(undefined8 *)((longlong)auStack_a0 + lVar7 + lVar6) = 0x197edcf;
      (*pcVar3)(plVar2,uVar4,lVar11);
    }
    else {
      plVar2 = *(longlong **)(local_78[0] + 8);
      pcVar3 = *(code **)(*plVar2 + 0x30);
      *(undefined8 *)((longlong)auStack_a0 + lVar7 + lVar6) = 0x197ede5;
      local_78[2] = (*pcVar3)(plVar2,iVar9);
    }
    local_5c = 0;
    if (-1 < param_4) {
      param_4 = param_4 + 1;
      puVar14 = local_40;
      do {
        uVar4 = *(undefined8 *)(local_78[2] + 8);
        uVar5 = *puVar14;
        *(undefined8 *)((longlong)auStack_a0 + lVar7 + lVar6) = 0x197ee20;
        FUN_004ae7e0(uVar4,uVar5);
        if (param_6 < local_5c) {
          uVar4 = *(undefined8 *)(local_78[2] + 0x10);
          *(undefined8 *)((longlong)auStack_a0 + lVar7 + lVar6) = 0x197ee4c;
          FUN_004ae7e0(uVar4,3);
        }
        else {
          uVar4 = *(undefined8 *)(local_78[2] + 0x10);
          uVar1 = *puVar16;
          *(undefined8 *)((longlong)auStack_a0 + lVar7 + lVar6) = 0x197ee39;
          FUN_004ae7e0(uVar4,uVar1);
        }
        local_5c = local_5c + 1;
        puVar16 = puVar16 + 1;
        puVar14 = puVar14 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  *(undefined8 *)((longlong)auStack_a0 + lVar7 + lVar6) = 0x197ee76;
  FUN_00414560(&local_58,2);
  return;
}

