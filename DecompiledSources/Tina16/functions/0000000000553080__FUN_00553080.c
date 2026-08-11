/* Ghidra address: 00553080 */
/* Ghidra symbol: FUN_00553080 */


undefined8
FUN_00553080(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  int iVar13;
  undefined1 local_80 [36];
  int local_5c;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_50 = 0;
  local_58 = 0;
  local_48 = *param_3;
  uStack_40 = param_3[1];
  uStack_38 = param_3[2];
  uStack_30 = param_3[3];
  FUN_004179d0(&local_48,&DAT_00527bf8);
  FUN_00417580(local_80,&DAT_00527bf8);
  cVar2 = FUN_00557bb0(param_1);
  if (((cVar2 != '\0') &&
      (bVar3 = FUN_00536190(&local_48), bVar3 < 0x20 && (1 << (bVar3 & 0x1f) & 0x100001U) != 0)) &&
     (cVar2 = FUN_005360d0(&local_48), cVar2 != '\0')) {
    uVar6 = FUN_005586e0(param_1);
    uVar6 = FUN_005466a0(uVar6);
    uVar7 = FUN_00417740(&local_48,&DAT_00527bf8);
    FUN_00538080(0,uVar6,uVar7);
  }
  cVar2 = (**(code **)(*param_1 + 0x60))(param_1);
  if ((cVar2 != '\0') && (cVar2 = FUN_00557bb0(param_1), bVar1 = false, cVar2 == '\0'))
  goto LAB_00553278;
  cVar2 = FUN_00536190(&local_48);
  if (cVar2 == '\x14') {
    plVar8 = (longlong *)FUN_005361b0(&local_48);
    if (*plVar8 == 0) {
LAB_005531db:
      plVar8 = (longlong *)FUN_005361b0(&local_48);
      if ((*plVar8 != 0) &&
         (puVar9 = (undefined8 *)FUN_005361b0(&local_48), *(longlong *)*puVar9 != 0))
      goto LAB_0055321b;
    }
    else {
      puVar9 = (undefined8 *)FUN_005361b0(&local_48);
      uVar6 = FUN_005586e0(param_1);
      lVar10 = FUN_005466a0(uVar6);
      if (*(longlong *)*puVar9 != lVar10) goto LAB_005531db;
    }
    FUN_00417c40(local_80,&local_48,&DAT_00527bf8);
    bVar1 = false;
  }
  else {
LAB_0055321b:
    lVar10 = FUN_00536180(&local_48);
    uVar6 = FUN_005586e0(param_1);
    lVar11 = FUN_005466a0(uVar6);
    if (lVar10 != lVar11) {
      uVar6 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02005920);
      FUN_004134c0(uVar6);
    }
    uVar6 = FUN_00538390(&local_48);
    FUN_00560000(local_80,uVar6);
    bVar1 = true;
  }
LAB_00553278:
  (**(code **)(*param_1 + 0x70))(param_1,&local_58);
  lVar10 = 0;
  if (local_58 != 0) {
    lVar10 = *(longlong *)(local_58 + -8);
  }
  if (param_5 + 1 != lVar10) {
    uVar6 = FUN_0044d710(&PTR_FUN_005277c0,1,PTR_PTR_02001778);
    FUN_004134c0(uVar6);
  }
  cVar2 = (**(code **)(*param_1 + 0x60))(param_1);
  if ((cVar2 == '\0') || (cVar2 = FUN_00557bb0(param_1), cVar2 != '\0')) {
    FUN_00419260(&local_50,&DAT_00492e48,1,(longlong)(param_5 + 2));
  }
  else {
    FUN_00419260(&local_50,&DAT_00492e48,1,(longlong)(param_5 + 1));
  }
  local_5c = 0;
  cVar2 = (**(code **)(*param_1 + 0x60))(param_1);
  if ((cVar2 == '\0') || (cVar2 = FUN_00557bb0(param_1), cVar2 != '\0')) {
    (**(code **)(*param_1 + 0x28))(param_1);
    FUN_00417c40(local_50 + (longlong)local_5c * 0x20,local_80,&DAT_00527bf8);
    local_5c = local_5c + 1;
  }
  iVar13 = 0;
  if (-1 < param_5) {
    param_5 = param_5 + 1;
    do {
      uVar5 = (**(code **)(*param_1 + 0x28))(param_1);
      FUN_00535440(*(undefined8 *)(local_58 + (longlong)iVar13 * 8),param_4,
                   local_50 + (longlong)local_5c * 0x20,uVar5);
      local_5c = local_5c + 1;
      iVar13 = iVar13 + 1;
      param_4 = param_4 + 0x20;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  cVar2 = (**(code **)(*param_1 + 0x60))(param_1);
  if ((cVar2 == '\0') || (cVar2 = FUN_00557bb0(param_1), cVar2 != '\0')) {
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  lVar10 = (**(code **)(*param_1 + 0x30))(param_1);
  if (lVar10 == 0) {
    cVar2 = FUN_00557bb0(param_1);
    if (cVar2 == '\0') {
      uVar6 = (**(code **)(*param_1 + 0x50))(param_1);
      uVar5 = (**(code **)(*param_1 + 0x28))(param_1);
      FUN_00557210(param_2,uVar6,local_50,uVar5,0,0,0);
    }
    else {
      uVar6 = (**(code **)(*param_1 + 0x50))(param_1);
      uVar5 = (**(code **)(*param_1 + 0x28))(param_1);
      uVar7 = FUN_00536180(local_80);
      uVar4 = (**(code **)(*param_1 + 0x60))(param_1);
      FUN_00557210(param_2,uVar6,local_50,uVar5,uVar7,uVar4,1);
      if (bVar1) {
        uVar6 = FUN_005604f0(local_80,1);
        uVar7 = FUN_00536180(&local_48);
        uVar12 = FUN_00417740(param_2,&DAT_00527bf8);
        FUN_00538080(uVar6,uVar7,uVar12);
      }
    }
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0x50))(param_1);
    uVar5 = (**(code **)(*param_1 + 0x28))(param_1);
    uVar7 = (**(code **)(*param_1 + 0x30))(param_1);
    uVar7 = FUN_005466a0(uVar7);
    uVar4 = (**(code **)(*param_1 + 0x60))(param_1);
    FUN_00557210(param_2,uVar6,local_50,uVar5,uVar7,uVar4,0);
  }
  FUN_00417740(local_80,&DAT_00527bf8);
  FUN_00419430(&local_58,&DAT_00531510);
  FUN_00419430(&local_50,&DAT_00492e48);
  FUN_00417740(&local_48,&DAT_00527bf8);
  return param_2;
}

