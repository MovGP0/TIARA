/* Ghidra address: 016a3c50 */
/* Ghidra symbol: FUN_016a3c50 */


void FUN_016a3c50(undefined8 param_1,undefined8 param_2,byte *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 local_res10 [3];
  byte local_118 [256];
  
  lVar2 = (ulonglong)*param_3 + 1;
  pbVar3 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_3;
    param_3 = param_3 + 1;
    pbVar3 = pbVar3 + 1;
  }
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_016a36e0(param_1,local_res10,local_118,param_4);
  uVar1 = FUN_0044d490(&PTR_FUN_0169f798,1,local_res10[0]);
  FUN_004134c0(uVar1);
  FUN_00414480(local_res10);
  return;
}

