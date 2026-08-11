/* Ghidra address: 017ae9f0 */
/* Ghidra symbol: FUN_017ae9f0 */


void FUN_017ae9f0(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int *piVar12;
  short sVar13;
  int *piVar14;
  ulonglong uVar15;
  undefined1 auStack_1058 [4088];
  undefined8 auStack_60 [5];
  int aiStack_38 [2];
  int *local_30;
  
  uVar10 = ((longlong)param_3 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar15 = -uVar10;
  uVar8 = uVar15 & 0xfff;
  while ((longlong)uVar15 < (longlong)uVar8) {
    auStack_1058[uVar8] = (char)(uVar8 - 0x1000);
    uVar8 = uVar8 - 0x1000;
  }
  lVar7 = -uVar10;
  piVar12 = (int *)((longlong)aiStack_38 + lVar7);
  piVar14 = piVar12;
  for (lVar11 = (longlong)param_3 + 1; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined8 *)piVar14 = *param_2;
    param_2 = param_2 + 1;
    piVar14 = piVar14 + 2;
  }
  sVar13 = (short)param_3 + 1;
  local_30 = piVar12;
  do {
    *(undefined8 *)((longlong)auStack_60 + lVar7) = 0x17aea7c;
    uVar9 = FUN_017ae4e0(param_1,piVar12);
    *(undefined8 *)piVar12 = uVar9;
    iVar1 = *(int *)(param_1 + 0x14);
    iVar2 = *piVar12;
    iVar3 = *(int *)(param_1 + 0x18);
    iVar4 = piVar12[1];
    *(undefined8 *)((longlong)auStack_60 + lVar7) = 0x17aeaa1;
    uVar9 = FUN_00498310(DAT_01fa23a8 * (iVar1 + iVar2),DAT_01fa23ac * (iVar3 + iVar4));
    piVar14 = local_30;
    *(undefined8 *)piVar12 = uVar9;
    piVar12 = piVar12 + 2;
    sVar13 = sVar13 + -1;
  } while (sVar13 != 0);
  plVar5 = *(longlong **)(param_1 + 8);
  pcVar6 = *(code **)(*plVar5 + 0xd8);
  *(undefined8 *)((longlong)auStack_60 + lVar7) = 0x17aeac9;
  (*pcVar6)(plVar5,piVar14,param_3);
  return;
}

