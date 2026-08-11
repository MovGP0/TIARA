/* Ghidra address: 01b803e0 */
/* Ghidra symbol: FUN_01b803e0 */


undefined8 * FUN_01b803e0(undefined8 *param_1,char *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  char *pcVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_10b8 [4088];
  undefined8 auStack_c0 [5];
  undefined8 auStack_98 [2];
  char acStack_88 [8];
  undefined8 *local_80;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  char *local_30;
  
  uVar6 = (longlong)param_3 + 0x10U & 0xfffffffffffffff0;
  uVar11 = -uVar6;
  uVar4 = uVar11 & 0xfff;
  local_80 = param_1;
  while ((longlong)uVar11 < (longlong)uVar4) {
    auStack_10b8[uVar4] = (char)(uVar4 - 0x1000);
    uVar4 = uVar4 - 0x1000;
  }
  lVar3 = -uVar6;
  pcVar8 = acStack_88 + lVar3;
  for (lVar7 = (longlong)param_3 + 1; lVar7 != 0; lVar7 = lVar7 + -1) {
    *pcVar8 = *param_2;
    param_2 = param_2 + 1;
    pcVar8 = pcVar8 + 1;
  }
  local_30 = acStack_88 + lVar3;
  *(undefined8 *)((longlong)auStack_c0 + lVar3) = 0x1b80460;
  FUN_00417600(&local_70,&DAT_00401390,8);
  *(undefined8 *)((longlong)auStack_c0 + lVar3) = 0x1b80471;
  FUN_00414b50(&local_70,&DAT_01b80590);
  *(undefined8 *)((longlong)auStack_c0 + lVar3) = 0x1b80481;
  FUN_00414b50(local_68,&DAT_01b805a0);
  *(undefined8 *)((longlong)auStack_c0 + lVar3) = 0x1b80491;
  FUN_00414b50(local_60,&DAT_01b805b0);
  *(undefined8 *)((longlong)auStack_c0 + lVar3) = 0x1b804a1;
  FUN_00414b50(local_58,&DAT_01b805c0);
  *(undefined8 *)((longlong)auStack_c0 + lVar3) = 0x1b804b1;
  FUN_00414b50(local_50,&DAT_01b805d0);
  *(undefined8 *)((longlong)auStack_c0 + lVar3) = 0x1b804c1;
  FUN_00414b50(local_48,&DAT_01b805e0);
  *(undefined8 *)((longlong)auStack_c0 + lVar3) = 0x1b804d1;
  FUN_00414b50(local_40,&DAT_01b805f4);
  *(undefined8 *)((longlong)auStack_c0 + lVar3) = 0x1b804e4;
  FUN_00414b50(local_38,&PTR_DAT_01b80604);
  puVar9 = local_80;
  *(undefined8 *)((longlong)auStack_c0 + lVar3) = 0x1b804ed;
  FUN_00414480(puVar9);
  iVar10 = 5;
  puVar9 = &local_70;
  pcVar8 = local_30;
  do {
    puVar5 = local_80;
    if (*pcVar8 != '\0') {
      uVar1 = *local_80;
      uVar2 = *puVar9;
      *(undefined1 **)((longlong)auStack_98 + lVar3) = &LAB_01b80618;
      *(undefined8 *)((longlong)auStack_c0 + lVar3) = 0x1b80526;
      FUN_00416cd0(puVar5,3,uVar1,uVar2);
    }
    puVar9 = puVar9 + 1;
    pcVar8 = pcVar8 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  *(undefined8 *)((longlong)auStack_c0 + lVar3) = 0x1b8054d;
  FUN_00417840(&local_70,&DAT_00401390,8);
  return local_80;
}

