/* Ghidra address: 00711850 */
/* Ghidra symbol: FUN_00711850 */


longlong * FUN_00711850(longlong *param_1,longlong param_2,undefined2 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  iVar5 = 0;
  uVar2 = FUN_00415f70(param_2);
  for (lVar3 = FUN_00711390(uVar2,param_3); lVar3 != 0; lVar3 = FUN_00711390(lVar3 + 2,param_3)) {
    iVar5 = iVar5 + 1;
  }
  if (iVar5 == 0) {
    FUN_00416780(&local_38,param_3);
    FUN_004168b0(&local_40,param_2);
    FUN_00416780(&local_48,param_3);
    FUN_00416cd0(&local_30,3,local_38,local_40,local_48);
    FUN_004168e0(param_1,local_30);
  }
  else {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = *(uint *)(param_2 + -4) >> 1;
    }
    FUN_00416660(param_1,uVar1 + iVar5 + 2);
    puVar6 = (undefined2 *)*param_1;
    *puVar6 = param_3;
    puVar6 = puVar6 + 1;
    lVar3 = FUN_00711390(param_2,param_3);
    do {
      lVar4 = lVar3 + 2;
      FUN_00409a70(param_2,puVar6,((lVar4 - param_2) / 2) * 2);
      puVar6[(lVar4 - param_2) / 2] = param_3;
      puVar6 = puVar6 + (lVar4 - param_2) / 2 + 1;
      lVar3 = FUN_00711390(lVar4,param_3);
      param_2 = lVar4;
    } while (lVar3 != 0);
    lVar3 = FUN_007112c0(lVar4);
    FUN_00409a70(lVar4,puVar6,((lVar3 - lVar4) / 2) * 2);
    puVar6[(lVar3 - lVar4) / 2] = param_3;
  }
  FUN_00414560(&local_48,4);
  return param_1;
}

