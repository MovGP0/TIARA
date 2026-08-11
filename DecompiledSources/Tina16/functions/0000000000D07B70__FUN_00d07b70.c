/* Ghidra address: 00d07b70 */
/* Ghidra symbol: FUN_00d07b70 */


void FUN_00d07b70(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined2 *param_4,
                 int param_5)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined8 local_res10 [3];
  undefined1 auStack_1088 [4088];
  undefined8 auStack_90 [5];
  longlong alStack_68 [2];
  int aiStack_58 [4];
  longlong *local_48;
  undefined8 local_40;
  undefined2 *local_30;
  
  uVar5 = ((longlong)param_5 + 1) * 2 + 0xfU & 0xfffffffffffffff0;
  uVar8 = -uVar5;
  uVar3 = uVar8 & 0xfff;
  local_48 = param_1;
  local_40 = param_3;
  while ((longlong)uVar8 < (longlong)uVar3) {
    auStack_1088[uVar3] = (char)(uVar3 - 0x1000);
    uVar3 = uVar3 - 0x1000;
  }
  lVar2 = -uVar5;
  puVar7 = (undefined2 *)((longlong)&local_48 + lVar2);
  for (lVar6 = (longlong)param_5 + 1; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_4;
    param_4 = param_4 + 1;
    puVar7 = puVar7 + 1;
  }
  local_30 = (undefined2 *)((longlong)&local_48 + lVar2);
  *(undefined8 *)((longlong)auStack_90 + lVar2) = 0xd07c02;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar4 = local_48;
  *(undefined8 *)((longlong)alStack_68 + lVar2) = local_40;
  *(undefined2 **)((longlong)alStack_68 + lVar2 + 8) = local_30;
  *(int *)((longlong)aiStack_58 + lVar2) = param_5;
  pcVar1 = *(code **)(*local_48 + 0x170);
  *(undefined8 *)((longlong)auStack_90 + lVar2) = 0xd07c41;
  (*pcVar1)(plVar4,&DAT_00d07c88,local_res10[0],0);
  *(undefined8 *)((longlong)auStack_90 + lVar2) = 0xd07c4e;
  FUN_00414480(local_res10);
  return;
}

