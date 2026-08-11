/* Ghidra address: 01304bb0 */
/* Ghidra symbol: FUN_01304bb0 */


void FUN_01304bb0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40 [2];
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  if (param_2 == 0) goto code_r0x01304e3f;
  FUN_01303ee0(param_1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x810) + 0x260))(*(longlong **)(param_1 + 0x810));
  if (cVar1 == '\0') goto code_r0x01304e3f;
  lVar5 = FUN_012e2590(*(undefined8 *)(param_1 + 0xac8),*(undefined8 *)(param_2 + 0x10));
  if (lVar5 != 0) {
    iVar2 = FUN_006dd6f0(param_2);
    uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
    iVar2 = FUN_012e58a0(uVar6);
    if (iVar2 == 0) {
LAB_01304c92:
      FUN_012dcbe0(lVar5,local_40);
      if (local_40[0] != 0) {
        FUN_012dcbe0(lVar5,&local_48);
        FUN_00416ba0(local_30,L"[FIGURE] ",local_48);
        FUN_01304220(param_1,local_30[0]);
      }
    }
    else {
      iVar2 = FUN_006dd6f0(param_2);
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
      iVar2 = FUN_012e58a0(uVar6);
      if (iVar2 == 3) goto LAB_01304c92;
    }
    iVar2 = FUN_006dd6f0(param_2);
    uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
    iVar2 = FUN_012e58a0(uVar6);
    if (iVar2 != 0) {
      iVar2 = FUN_006dd6f0(param_2);
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
      iVar2 = FUN_012e58a0(uVar6);
      if (iVar2 != 1) goto LAB_01304da0;
    }
    iVar2 = FUN_012dd0b0();
    iVar7 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_00414b50(local_30,L"[DATA] ");
        FUN_012dd160(lVar5,&local_50,L"PARAMETER_SYMBOL",iVar7);
        FUN_00416ad0(local_30,local_50);
        iVar3 = FUN_00416db0(local_30[0],L"[DATA]  | ");
        if (iVar3 != 0) {
          FUN_01304220(param_1,local_30[0]);
        }
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
LAB_01304da0:
  iVar2 = FUN_006dd6f0(param_2);
  uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
  iVar2 = FUN_012e58a0(uVar6);
  if (iVar2 != 0) {
    iVar2 = FUN_006dd6f0(param_2);
    uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
    iVar2 = FUN_012e58a0(uVar6);
    if (iVar2 != 2) goto code_r0x01304e3f;
  }
  uVar4 = FUN_006dd6f0(param_2);
  lVar5 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),uVar4);
  if ((*(uint *)(*(longlong *)(lVar5 + 0x18) + 4) & 0x20) == 0x20) {
    FUN_01301140(param_1,param_2,0,0,0);
  }
code_r0x01304e3f:
  FUN_00414560(&local_50,3);
  FUN_00414480(local_30);
  return;
}

