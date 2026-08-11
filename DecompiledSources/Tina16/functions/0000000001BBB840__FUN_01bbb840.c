/* Ghidra address: 01bbb840 */
/* Ghidra symbol: FUN_01bbb840 */


void FUN_01bbb840(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_res10 [3];
  undefined8 local_a8 [18];
  
  puVar4 = local_a8;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_00416db0(local_res10[0],L"dV/dt_r");
  lVar2 = *(longlong *)(param_1 + 0x38 + (longlong)(int)(uint)(iVar1 != 0) * 8);
  *(undefined4 *)(lVar2 + 0x10) = param_3;
  puVar4 = local_a8;
  puVar5 = (undefined8 *)(lVar2 + 0x20);
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00414480(local_res10);
  return;
}

