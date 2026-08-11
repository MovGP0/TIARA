/* Ghidra address: 019a74e0 */
/* Ghidra symbol: FUN_019a74e0 */


undefined8 FUN_019a74e0(undefined8 param_1,undefined1 param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_1058 [4088];
  undefined8 auStack_60 [5];
  undefined8 *apuStack_38 [2];
  
  uVar5 = ((longlong)param_4 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar8 = -uVar5;
  uVar3 = uVar8 & 0xfff;
  while ((longlong)uVar8 < (longlong)uVar3) {
    auStack_1058[uVar3] = (char)(uVar3 - 0x1000);
    uVar3 = uVar3 - 0x1000;
  }
  lVar2 = -uVar5;
  puVar7 = (undefined8 *)((longlong)apuStack_38 + lVar2);
  for (lVar6 = (longlong)param_4 + 1; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_3;
    param_3 = param_3 + 1;
    puVar7 = puVar7 + 1;
  }
  apuStack_38[1] = (undefined8 *)((longlong)apuStack_38 + lVar2);
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x19a7557;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,CONCAT71((int7)(uVar3 >> 8),1));
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x19a7566;
  FUN_004ae7e0(uVar4,param_2);
  if (-1 < param_4) {
    param_4 = param_4 + 1;
    puVar7 = apuStack_38[1];
    do {
      uVar1 = *puVar7;
      *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x19a7585;
      FUN_004ae7e0(uVar4,uVar1);
      puVar7 = puVar7 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return uVar4;
}

