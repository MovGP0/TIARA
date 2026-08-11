/* Ghidra address: 013f4d20 */
/* Ghidra symbol: FUN_013f4d20 */


void FUN_013f4d20(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [256];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  longlong local_30;
  
  local_170 = 0;
  local_168 = 0;
  local_158 = 0;
  local_160 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  if (*PTR_DAT_020039a8 != '\0') {
    FUN_00b0a960(*(undefined8 *)(param_1 + 0x728),param_2);
    if (*(int *)(*(longlong *)(param_1 + 0x728) + 0x638) == 1) {
      *(undefined4 *)(param_1 + 0x508) = 1;
    }
    goto code_r0x013f5143;
  }
  cVar4 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x728));
  *(char *)(param_1 + 0x8e0) = cVar4;
  if (cVar4 != '\0') goto code_r0x013f5143;
  uVar7 = FUN_01cfd6a0(*(undefined8 *)(param_1 + 0x758));
  FUN_01cfd560(*(undefined8 *)(param_1 + 0x750),uVar7,*(undefined4 *)(param_1 + 0x760),
               *(undefined4 *)(param_1 + 0x760));
  (**(code **)(**(longlong **)(param_1 + 0x750) + 0x2d0))
            (*(longlong **)(param_1 + 0x750),*(undefined4 *)(param_1 + 0x760),&local_30);
  lVar3 = local_30;
  *(undefined1 *)(local_30 + 0x2f) = *(undefined1 *)(param_1 + 0x8e2);
  FUN_004169a0(&local_40,local_30);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4a0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_48,*(undefined2 *)(param_1 + 0x77e));
  iVar5 = FUN_00416db0(local_40,local_48);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4a0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_50,*(undefined2 *)(param_1 + 0x77e));
  FUN_00416910(local_150,local_50,0xff);
  FUN_00415020(lVar3,local_150,0x14);
  if (iVar5 == 0) {
    FUN_004169a0(&local_158,lVar3 + 0x15);
    (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x18))
              (*(longlong **)(param_1 + 0x7a0),&local_160,*(undefined1 *)(param_1 + 0x77c));
    iVar5 = FUN_00416db0(local_158,local_160);
    if (iVar5 != 0) goto LAB_013f4f57;
    bVar2 = false;
  }
  else {
LAB_013f4f57:
    bVar2 = true;
  }
  (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x18))
            (*(longlong **)(param_1 + 0x7a0),&local_168,*(undefined1 *)(param_1 + 0x77c));
  FUN_00416910(local_150,local_168,0xff);
  FUN_00415020(lVar3 + 0x15,local_150,0x10);
  *(undefined1 *)(lVar3 + 0x2e) = *(undefined1 *)(*(longlong *)(param_1 + 0x728) + 0x66a);
  if (*(char *)(lVar3 + 0x2f) == '\0') {
    local_38 = (undefined8 *)(lVar3 + 0x30);
    uVar7 = *local_38;
    *local_38 = 0;
    FUN_00410f20(uVar7);
  }
  else {
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8))
    ;
    if (iVar5 < 2) {
      *(undefined4 *)(lVar3 + 0x38) = 0x6c415b05;
      *(undefined2 *)(lVar3 + 0x3c) = 0x5d6c;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x6c8);
      uVar6 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_170,uVar6);
      FUN_00416910(lVar3 + 0x38,local_170,0xff);
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4a0);
    puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1,*(undefined2 *)(param_1 + 0x77e));
    uVar7 = FUN_00416740(*puVar8);
    uVar7 = FUN_00442bd0(uVar7);
    *(undefined8 *)(lVar3 + 0x138) = uVar7;
    if (*(longlong *)(lVar3 + 0x30) == 0) {
      uVar7 = FUN_004b6930(&PTR_FUN_00478280,1);
      *(undefined8 *)(lVar3 + 0x30) = uVar7;
    }
    (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x90))(*(longlong **)(lVar3 + 0x30));
    (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x10))
              (*(longlong **)(lVar3 + 0x30),*(undefined8 *)(*(longlong *)(param_1 + 0x738) + 0x4d8))
    ;
  }
  *(undefined1 *)(local_30 + 0x148) = *(undefined1 *)(*(longlong *)(param_1 + 0x728) + 0x66b);
  if (bVar2) {
    FUN_01d07850(*(undefined8 *)(param_1 + 0x750));
    uVar7 = FUN_019a4600();
    FUN_01d08870(*(undefined8 *)(param_1 + 0x750),uVar7,*(int *)(param_1 + 0x760) + 1);
  }
code_r0x013f5143:
  FUN_00414560(&local_170,4);
  FUN_00414560(&local_50,3);
  return;
}

