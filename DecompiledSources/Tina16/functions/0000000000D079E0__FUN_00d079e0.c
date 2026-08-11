/* Ghidra address: 00d079e0 */
/* Ghidra symbol: FUN_00d079e0 */


undefined8
FUN_00d079e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined2 *param_4,
            int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 local_res18 [2];
  undefined1 auStack_1078 [4088];
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  int aiStack_58 [4];
  undefined2 auStack_48 [4];
  undefined1 *local_40;
  undefined2 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_78;
  uVar7 = ((longlong)param_5 + 1) * 2 + 0xfU & 0xfffffffffffffff0;
  uVar8 = -uVar7;
  uVar2 = uVar8 & 0xfff;
  while ((longlong)uVar8 < (longlong)uVar2) {
    auStack_1078[uVar2] = (char)(uVar2 - 0x1000);
    uVar2 = uVar2 - 0x1000;
  }
  lVar1 = -uVar7;
  puVar6 = (undefined2 *)((longlong)auStack_48 + lVar1);
  for (lVar5 = (longlong)param_5 + 1; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  local_30 = (undefined2 *)((longlong)auStack_48 + lVar1);
  *(undefined8 *)((longlong)&uStack_80 + lVar1) = 0xd07a7e;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  *(undefined8 *)((longlong)&uStack_80 + lVar1) = 0xd07a8d;
  uVar4 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  puVar6 = local_30;
  local_28 = uVar4;
  *(int *)((longlong)aiStack_58 + lVar1) = param_5;
  *(undefined8 *)((longlong)&uStack_80 + lVar1) = 0xd07ab7;
  FUN_00d07b70(param_1,local_res18[0],uVar4,puVar6);
  uVar4 = local_28;
  *(undefined8 *)((longlong)&uStack_80 + lVar1) = 0xd07ac2;
  FUN_004b6dc0(uVar4,0);
  *(undefined8 *)((longlong)&uStack_80 + lVar1) = 0xd07ace;
  lVar5 = FUN_00d05df0(param_1);
  uVar3 = local_28;
  uVar4 = *(undefined8 *)(lVar5 + 0x20);
  *(undefined8 *)((longlong)&uStack_80 + lVar1) = 0xd07ae2;
  FUN_008b0660(param_2,uVar3,uVar4);
  uVar4 = local_28;
  local_20 = local_28;
  local_28 = 0;
  *(undefined8 *)((longlong)&uStack_80 + lVar1) = 0xd07afc;
  FUN_00410f20(uVar4);
  *(undefined8 *)((longlong)&uStack_80 + lVar1) = 0xd07b09;
  FUN_00414480(local_res18);
  return param_2;
}

