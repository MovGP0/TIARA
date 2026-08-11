/* Ghidra address: 019bc130 */
/* Ghidra symbol: FUN_019bc130 */


undefined8 FUN_019bc130(undefined8 *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_1028 [4096];
  int aiStack_28 [4];
  
  uVar5 = ((longlong)param_2 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar8 = -uVar5;
  uVar3 = uVar8 & 0xfff;
  while ((longlong)uVar8 < (longlong)uVar3) {
    auStack_1028[uVar3] = (char)(uVar3 - 0x1000);
    uVar3 = uVar3 - 0x1000;
  }
  lVar2 = -uVar5;
  puVar7 = (undefined8 *)((longlong)aiStack_28 + lVar2);
  for (lVar6 = (longlong)param_2 + 1; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_1;
    param_1 = param_1 + 1;
    puVar7 = puVar7 + 1;
  }
  if ((*(int *)((longlong)aiStack_28 + lVar2) == *(int *)((longlong)aiStack_28 + lVar2 + 8)) &&
     (iVar1 = *(int *)((longlong)aiStack_28 + lVar2 + 4),
     iVar1 == *(int *)((longlong)aiStack_28 + lVar2 + 0xc))) {
    uVar4 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

