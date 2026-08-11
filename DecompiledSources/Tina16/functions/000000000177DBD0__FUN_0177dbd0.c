/* Ghidra address: 0177dbd0 */
/* Ghidra symbol: FUN_0177dbd0 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0177dbd0(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined1 auStack_1068 [4088];
  undefined8 auStack_70 [5];
  longlong local_48 [3];
  undefined8 *local_30;
  
  local_48[1] = 0;
  uVar7 = ((longlong)param_3 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar12 = -uVar7;
  uVar4 = uVar12 & 0xfff;
  local_48[0] = param_1;
  while ((longlong)uVar12 < (longlong)uVar4) {
    auStack_1068[uVar4] = (char)(uVar4 - 0x1000);
    uVar4 = uVar4 - 0x1000;
  }
  lVar3 = -uVar7;
  puVar9 = (undefined8 *)((longlong)local_48 + lVar3);
  puVar11 = puVar9;
  for (lVar8 = (longlong)param_3 + 1; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *param_2;
    param_2 = param_2 + 1;
    puVar11 = puVar11 + 1;
  }
  local_30 = puVar9;
  *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177dc60;
  FUN_00417a80(puVar9,&DAT_00401390,(longlong)param_3 + 1);
  *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177dc6f;
  plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (-1 < param_3) {
    iVar10 = param_3 + 1;
    puVar9 = local_30;
    do {
      uVar1 = *puVar9;
      pcVar2 = *(code **)(*plVar6 + 0x78);
      *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177dc95;
      (*pcVar2)(plVar6,uVar1);
      puVar9 = puVar9 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  lVar8 = local_48[0];
  *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177dcae;
  FUN_0177ddc0(lVar8,local_48 + 1);
  lVar5 = local_48[1];
  lVar8 = local_48[0];
  uVar1 = *(undefined8 *)(local_48[0] + 0x428);
  *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177dcc9;
  FUN_0177ddf0(lVar8,plVar6,uVar1,lVar5);
  *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177dcd1;
  FUN_00410f20(plVar6);
  *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177dcdb;
  FUN_00414480(local_48 + 1);
  puVar9 = local_30;
  *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177dcf6;
  FUN_00417840(puVar9,&DAT_00401390,(longlong)param_3 + 1);
  return;
}

