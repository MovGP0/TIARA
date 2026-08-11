/* Ghidra address: 012e23e0 */
/* Ghidra symbol: FUN_012e23e0 */


int FUN_012e23e0(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_1058 [4088];
  undefined8 auStack_60 [5];
  longlong lStack_38;
  int local_2c;
  longlong *local_20;
  
  uVar5 = ((longlong)param_3 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar8 = -uVar5;
  uVar3 = uVar8 & 0xfff;
  while ((longlong)uVar8 < (longlong)uVar3) {
    auStack_1058[uVar3] = (char)(uVar3 - 0x1000);
    uVar3 = uVar3 - 0x1000;
  }
  lVar2 = -uVar5;
  plVar1 = (longlong *)((longlong)&lStack_38 + lVar2);
  plVar4 = plVar1;
  for (lVar6 = (longlong)param_3 + 1; lVar6 != 0; lVar6 = lVar6 + -1) {
    *plVar4 = *param_2;
    param_2 = param_2 + 1;
    plVar4 = plVar4 + 1;
  }
  local_20 = plVar1;
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x12e245d;
  FUN_00417a80(plVar1,&DAT_00401390,(longlong)param_3 + 1);
  plVar1 = local_20;
  local_2c = 0;
  if (-1 < param_3) {
    iVar7 = param_3 + 1;
    plVar4 = local_20;
    do {
      if (*plVar4 != 0) {
        local_2c = local_2c + 1;
      }
      plVar4 = plVar4 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x12e24ab;
  FUN_00417840(plVar1,&DAT_00401390,(longlong)param_3 + 1);
  return local_2c;
}

