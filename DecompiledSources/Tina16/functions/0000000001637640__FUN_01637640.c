/* Ghidra address: 01637640 */
/* Ghidra symbol: FUN_01637640 */


undefined8 FUN_01637640(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_1058 [4088];
  undefined8 uStack_60;
  undefined1 auStack_58 [32];
  undefined8 *apuStack_38 [3];
  
  uVar4 = ((longlong)param_2 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar8 = -uVar4;
  uVar2 = uVar8 & 0xfff;
  while ((longlong)uVar8 < (longlong)uVar2) {
    auStack_1058[uVar2] = (char)(uVar2 - 0x1000);
    uVar2 = uVar2 - 0x1000;
  }
  lVar1 = -uVar4;
  puVar7 = (undefined8 *)((longlong)apuStack_38 + lVar1);
  for (lVar5 = (longlong)param_2 + 1; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *param_1;
    param_1 = param_1 + 1;
    puVar7 = puVar7 + 1;
  }
  apuStack_38[1] = (undefined8 *)((longlong)apuStack_38 + lVar1);
  *(undefined8 *)((longlong)&uStack_60 + lVar1) = 0x16376b2;
  uVar3 = FUN_01637590(auStack_58,0);
  iVar6 = 1;
  if (0 < param_2) {
    do {
      *(undefined8 *)((longlong)&uStack_60 + lVar1) = 0x16376d4;
      lVar5 = FUN_01637590(auStack_58,iVar6);
      if (lVar5 != 0) {
        *(undefined8 *)((longlong)&uStack_60 + lVar1) = 0x16376ea;
        uVar3 = FUN_01698500(uVar3,lVar5,0x10e);
      }
      iVar6 = iVar6 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar3;
}

