/* Ghidra address: 013655b0 */
/* Ghidra symbol: FUN_013655b0 */


undefined8 FUN_013655b0(undefined8 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_1058 [4088];
  undefined8 auStack_60 [5];
  undefined4 auStack_38 [2];
  undefined4 *local_30;
  
  uVar6 = ((longlong)param_3 + 1) * 4 + 0xfU & 0xfffffffffffffff0;
  uVar9 = -uVar6;
  uVar3 = uVar9 & 0xfff;
  while ((longlong)uVar9 < (longlong)uVar3) {
    auStack_1058[uVar3] = (char)(uVar3 - 0x1000);
    uVar3 = uVar3 - 0x1000;
  }
  lVar2 = -uVar6;
  puVar8 = (undefined4 *)((longlong)auStack_38 + lVar2);
  for (lVar7 = (longlong)param_3 + 1; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *param_2;
    param_2 = param_2 + 1;
    puVar8 = puVar8 + 1;
  }
  local_30 = (undefined4 *)((longlong)auStack_38 + lVar2);
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x1365622;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,CONCAT71((int7)(uVar3 >> 8),1));
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    puVar8 = local_30;
    do {
      uVar1 = *puVar8;
      *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x136563f;
      uVar5 = FUN_00b95a80(uVar1);
      *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x136564a;
      FUN_004ae7e0(uVar4,uVar5);
      puVar8 = puVar8 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return uVar4;
}

