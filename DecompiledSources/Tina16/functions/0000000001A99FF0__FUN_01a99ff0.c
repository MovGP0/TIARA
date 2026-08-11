/* Ghidra address: 01a99ff0 */
/* Ghidra symbol: FUN_01a99ff0 */


void FUN_01a99ff0(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  ulonglong uVar10;
  int *piVar11;
  undefined1 auStack_1078 [4088];
  undefined8 auStack_80 [5];
  longlong alStack_58 [2];
  int aiStack_48 [2];
  longlong local_40;
  int *local_30;
  
  uVar6 = ((longlong)param_3 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar10 = -uVar6;
  uVar5 = uVar10 & 0xfff;
  local_40 = param_1;
  while ((longlong)uVar10 < (longlong)uVar5) {
    auStack_1078[uVar5] = (char)(uVar5 - 0x1000);
    uVar5 = uVar5 - 0x1000;
  }
  lVar4 = -uVar6;
  piVar11 = (int *)((longlong)aiStack_48 + lVar4);
  piVar9 = piVar11;
  for (lVar7 = (longlong)param_3 + 1; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined8 *)piVar9 = *param_2;
    param_2 = param_2 + 1;
    piVar9 = piVar9 + 2;
  }
  local_30 = piVar11;
  if (-1 < param_3) {
    iVar8 = param_3 + 1;
    do {
      lVar7 = local_40;
      iVar1 = *piVar11;
      iVar2 = piVar11[1];
      *(int **)((longlong)alStack_58 + lVar4) = piVar11 + 1;
      *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x1a9a08c;
      FUN_01a98380(lVar7,iVar1,iVar2,piVar11);
      *piVar11 = *piVar11 - *(int *)(local_40 + 0x188);
      piVar11[1] = piVar11[1] - *(int *)(local_40 + 0x18c);
      piVar11 = piVar11 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  piVar11 = local_30;
  if (*(char *)(local_40 + 0x12d) == '\0') {
    uVar3 = *(undefined8 *)(local_40 + 0x148);
    *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x1a9a0dc;
    thunk_FUN_04159037(uVar3,piVar11,param_3 + 1);
  }
  return;
}

