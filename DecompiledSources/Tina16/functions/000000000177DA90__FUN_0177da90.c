/* Ghidra address: 0177da90 */
/* Ghidra symbol: FUN_0177da90 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0177da90(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_1058 [4088];
  undefined8 auStack_60 [5];
  longlong local_38 [3];
  undefined8 *local_20;
  
  local_38[1] = 0;
  uVar7 = ((longlong)param_3 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar10 = -uVar7;
  uVar5 = uVar10 & 0xfff;
  local_38[0] = param_1;
  while ((longlong)uVar10 < (longlong)uVar5) {
    auStack_1058[uVar5] = (char)(uVar5 - 0x1000);
    uVar5 = uVar5 - 0x1000;
  }
  lVar4 = -uVar7;
  puVar1 = (undefined8 *)((longlong)local_38 + lVar4);
  puVar9 = puVar1;
  for (lVar8 = (longlong)param_3 + 1; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *param_2;
    param_2 = param_2 + 1;
    puVar9 = puVar9 + 1;
  }
  local_20 = puVar1;
  *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x177db19;
  FUN_00417a80(puVar1,&DAT_00401390,(longlong)param_3 + 1);
  puVar1 = local_20;
  lVar8 = local_38[0];
  *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x177db2b;
  FUN_0177d090(lVar8,puVar1,param_3);
  lVar8 = local_38[0];
  *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x177db38;
  FUN_0177ddc0(lVar8,local_38 + 1);
  lVar6 = local_38[1];
  lVar8 = local_38[0];
  uVar2 = *(undefined8 *)(local_38[0] + 0x400);
  uVar3 = *(undefined8 *)(local_38[0] + 0x428);
  *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x177db5a;
  FUN_0177ddf0(lVar8,uVar2,uVar3,lVar6);
  *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x177db64;
  FUN_00414480(local_38 + 1);
  puVar1 = local_20;
  *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x177db7c;
  FUN_00417840(puVar1,&DAT_00401390,(longlong)param_3 + 1);
  return;
}

