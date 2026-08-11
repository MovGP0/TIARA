/* Ghidra address: 016ba860 */
/* Ghidra symbol: FUN_016ba860 */


undefined1 FUN_016ba860(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 local_res18 [2];
  undefined1 auStack_358 [47];
  undefined1 local_329;
  undefined1 local_328 [271];
  byte local_219 [256];
  byte local_119 [256];
  undefined1 local_19;
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_119;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_016ba750(auStack_358,local_328);
  FUN_00414ff0(local_219,local_328);
  local_329 = 0;
  do {
    if (local_219[0] == 0) {
code_r0x016ba922:
      FUN_00414480(local_res18);
      return local_329;
    }
    iVar1 = FUN_00414f50(local_219,local_119,(ulonglong)local_219[0] + 1);
    if (iVar1 == 0) {
      local_329 = 1;
      goto code_r0x016ba922;
    }
    FUN_00416e20(local_res18,1,local_19);
    FUN_016ba750(auStack_358,local_328);
    FUN_00414ff0(local_219,local_328);
  } while( true );
}

