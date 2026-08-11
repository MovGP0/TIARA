/* Ghidra address: 01a9d5b0 */
/* Ghidra symbol: FUN_01a9d5b0 */


void FUN_01a9d5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 int param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_1058 [4088];
  undefined8 auStack_60 [5];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  undefined4 *local_20;
  
  uVar6 = ((longlong)param_5 + 1) * 4 + 0xfU & 0xfffffffffffffff0;
  uVar7 = -uVar6;
  uVar3 = uVar7 & 0xfff;
  while ((longlong)uVar7 < (longlong)uVar3) {
    auStack_1058[uVar3] = (char)(uVar3 - 0x1000);
    uVar3 = uVar3 - 0x1000;
  }
  lVar2 = -uVar6;
  puVar1 = (undefined4 *)((longlong)auStack_28 + lVar2);
  puVar5 = puVar1;
  for (lVar4 = (longlong)param_5 + 1; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_4;
    param_4 = param_4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_20 = puVar1;
  *(int *)((longlong)aiStack_38 + lVar2) = param_5 + 1;
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x1a9d635;
  FUN_01a9d640(param_1,param_2,param_3,puVar1);
  return;
}

