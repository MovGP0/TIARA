/* Ghidra address: 017c7d80 */
/* Ghidra symbol: FUN_017c7d80 */


void FUN_017c7d80(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4,
                 int param_5)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined1 auStack_1098 [4088];
  undefined8 auStack_a0 [5];
  undefined8 auStack_78 [4];
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined4 *local_30;
  
  local_40[0] = 0;
  local_48 = 0;
  uVar9 = ((longlong)param_5 + 1) * 4 + 0xfU & 0xfffffffffffffff0;
  uVar13 = -uVar9;
  uVar3 = uVar13 & 0xfff;
  local_50 = param_1;
  local_58 = param_2;
  while ((longlong)uVar13 < (longlong)uVar3) {
    auStack_1098[uVar3] = (char)(uVar3 - 0x1000);
    uVar3 = uVar3 - 0x1000;
  }
  lVar2 = -uVar9;
  puVar12 = (undefined4 *)((longlong)&local_58 + lVar2);
  for (lVar10 = (longlong)param_5 + 1; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *param_4;
    param_4 = param_4 + 1;
    puVar12 = puVar12 + 1;
  }
  local_30 = (undefined4 *)((longlong)&local_58 + lVar2);
  *(undefined8 *)((longlong)auStack_a0 + lVar2) = 0x17c7e1e;
  plVar8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,CONCAT71((int7)(uVar3 >> 8),1));
  puVar12 = local_30;
  uVar5 = local_50;
  *(undefined8 *)((longlong)auStack_a0 + lVar2) = 0x17c7e38;
  FUN_017c7cd0(uVar5,plVar8,puVar12,param_5);
  plVar4 = local_58;
  *(undefined8 *)((longlong)auStack_a0 + lVar2) = 0x17c7e41;
  FUN_00414480(plVar4);
  pcVar1 = *(code **)(*plVar8 + 0x28);
  *(undefined8 *)((longlong)auStack_a0 + lVar2) = 0x17c7e4a;
  iVar6 = (*pcVar1)();
  iVar11 = 0;
  if (-1 < iVar6 + -1) {
    do {
      pcVar1 = *(code **)(*plVar8 + 0x18);
      *(undefined8 *)((longlong)auStack_a0 + lVar2) = 0x17c7e6d;
      (*pcVar1)(plVar8,local_40,iVar11);
      *(undefined8 *)((longlong)auStack_a0 + lVar2) = 0x17c7e78;
      FUN_0043f750(&local_48,iVar11);
      uVar5 = local_40[0];
      plVar4 = local_58;
      lVar10 = *local_58;
      *(undefined **)((longlong)auStack_78 + lVar2) = &DAT_017c7f38;
      *(undefined8 *)((longlong)auStack_78 + lVar2 + 8) = local_48;
      *(undefined **)((longlong)auStack_78 + lVar2 + 0x10) = &DAT_017c7f48;
      *(undefined8 *)((longlong)auStack_a0 + lVar2) = 0x17c7eb2;
      FUN_00416cd0(plVar4,5,lVar10,uVar5);
      iVar11 = iVar11 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  plVar4 = local_58;
  uVar7 = 0;
  if (*local_58 != 0) {
    uVar7 = *(undefined4 *)(*local_58 + -4);
  }
  *(undefined8 *)((longlong)auStack_a0 + lVar2) = 0x17c7edf;
  FUN_00416e20(plVar4,uVar7,1);
  *(undefined8 *)((longlong)auStack_a0 + lVar2) = 0x17c7ee7;
  FUN_00410f20(plVar8);
  *(undefined8 *)((longlong)auStack_a0 + lVar2) = 0x17c7ef6;
  FUN_00414560(&local_48,2);
  return;
}

