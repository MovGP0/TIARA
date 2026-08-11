/* Ghidra address: 017c7cd0 */
/* Ghidra symbol: FUN_017c7cd0 */


void FUN_017c7cd0(longlong param_1,undefined8 param_2,undefined4 *param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_1058 [4088];
  undefined8 uStack_60;
  undefined1 auStack_58 [32];
  undefined4 auStack_38 [2];
  undefined4 *local_30;
  
  uVar8 = ((longlong)param_4 + 1) * 4 + 0xfU & 0xfffffffffffffff0;
  uVar9 = -uVar8;
  uVar2 = uVar9 & 0xfff;
  while ((longlong)uVar9 < (longlong)uVar2) {
    auStack_1058[uVar2] = (char)(uVar2 - 0x1000);
    uVar2 = uVar2 - 0x1000;
  }
  lVar1 = -uVar8;
  puVar7 = (undefined4 *)((longlong)auStack_38 + lVar1);
  for (lVar4 = (longlong)param_4 + 1; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *param_3;
    param_3 = param_3 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar6 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  local_30 = (undefined4 *)((longlong)auStack_38 + lVar1);
  if (-1 < iVar6 + -1) {
    do {
      *(undefined8 *)((longlong)&uStack_60 + lVar1) = 0x17c7d5d;
      uVar3 = FUN_00b94e60(param_1,iVar5);
      *(undefined8 *)((longlong)&uStack_60 + lVar1) = 0x17c7d68;
      FUN_017c7750(auStack_58,uVar3);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

