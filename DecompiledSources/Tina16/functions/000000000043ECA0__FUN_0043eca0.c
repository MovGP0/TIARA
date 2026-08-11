/* Ghidra address: 0043eca0 */
/* Ghidra symbol: FUN_0043eca0 */


undefined8 * FUN_0043eca0(undefined8 *param_1,longlong param_2,undefined2 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  iVar7 = 0;
  uVar2 = FUN_00416740(param_2);
  for (lVar3 = FUN_0044fe60(uVar2,param_3); lVar3 != 0; lVar3 = FUN_0044fe60(lVar3 + 2,param_3)) {
    iVar7 = iVar7 + 1;
  }
  if (iVar7 == 0) {
    FUN_00416780(&local_30,param_3);
    FUN_00416780(&local_38,param_3);
    FUN_00416cd0(param_1,3,local_30,param_2,local_38);
  }
  else {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + -4);
    }
    FUN_004169f0(param_1,iVar1 + iVar7 + 2);
    puVar4 = (undefined2 *)FUN_00416740(*param_1);
    *puVar4 = param_3;
    puVar4 = puVar4 + 1;
    lVar3 = FUN_00416740(param_2);
    lVar5 = FUN_0044fe60(lVar3,param_3);
    do {
      lVar6 = lVar5 + 2;
      FUN_00409a70(lVar3,puVar4,((lVar6 - lVar3) / 2) * 2);
      puVar4[(lVar6 - lVar3) / 2] = param_3;
      puVar4 = puVar4 + (lVar6 - lVar3) / 2 + 1;
      lVar5 = FUN_0044fe60(lVar6,param_3);
      lVar3 = lVar6;
    } while (lVar5 != 0);
    lVar3 = FUN_00442440(lVar6);
    FUN_00409a70(lVar6,puVar4,((lVar3 - lVar6) / 2) * 2);
    puVar4[(lVar3 - lVar6) / 2] = param_3;
  }
  FUN_00414560(&local_38,2);
  return param_1;
}

