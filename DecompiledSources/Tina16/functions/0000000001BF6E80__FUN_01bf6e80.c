/* Ghidra address: 01bf6e80 */
/* Ghidra symbol: FUN_01bf6e80 */


void FUN_01bf6e80(undefined8 param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_1058 [4088];
  undefined8 auStack_60 [5];
  undefined8 *apuStack_38 [3];
  
  uVar4 = ((longlong)param_3 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar8 = -uVar4;
  uVar3 = uVar8 & 0xfff;
  while ((longlong)uVar8 < (longlong)uVar3) {
    auStack_1058[uVar3] = (char)(uVar3 - 0x1000);
    uVar3 = uVar3 - 0x1000;
  }
  lVar2 = -uVar4;
  puVar6 = (undefined8 *)((longlong)apuStack_38 + lVar2);
  puVar7 = puVar6;
  for (lVar5 = (longlong)param_3 + 1; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    apuStack_38[1] = puVar6;
    do {
      uVar1 = *puVar6;
      *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x1bf6f04;
      lVar5 = FUN_01bf7130(param_1,uVar1);
      if (lVar5 != 0) {
        *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x1bf6f11;
        FUN_00410f20(lVar5);
      }
      puVar6 = puVar6 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

