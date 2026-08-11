/* Ghidra address: 012dcf40 */
/* Ghidra symbol: FUN_012dcf40 */


void FUN_012dcf40(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_1068 [4088];
  undefined8 auStack_70 [5];
  longlong alStack_48 [3];
  undefined8 *local_30;
  
  uVar4 = ((longlong)param_3 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar10 = -uVar4;
  uVar3 = uVar10 & 0xfff;
  alStack_48[1] = param_1;
  while ((longlong)uVar10 < (longlong)uVar3) {
    auStack_1068[uVar3] = (char)(uVar3 - 0x1000);
    uVar3 = uVar3 - 0x1000;
  }
  lVar2 = -uVar4;
  puVar7 = (undefined8 *)((longlong)alStack_48 + lVar2);
  puVar9 = puVar7;
  for (lVar5 = (longlong)param_3 + 1; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar9 = *param_2;
    param_2 = param_2 + 1;
    puVar9 = puVar9 + 1;
  }
  local_30 = puVar7;
  *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x12dcfc8;
  FUN_00417a80(puVar7,&DAT_00401390,(longlong)param_3 + 1);
  lVar5 = alStack_48[1] + 0x40;
  *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x12dcfef;
  FUN_00419260(lVar5,&DAT_012db718,1,(longlong)(param_3 + 1));
  iVar6 = 0;
  if (-1 < param_3) {
    iVar8 = param_3 + 1;
    puVar7 = local_30;
    do {
      lVar5 = *(longlong *)(alStack_48[1] + 0x40);
      uVar1 = *puVar7;
      *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x12dd01c;
      FUN_00414ad0(lVar5 + (longlong)iVar6 * 8,uVar1);
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  puVar7 = local_30;
  *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x12dd047;
  FUN_00417840(puVar7,&DAT_00401390,(longlong)param_3 + 1);
  return;
}

