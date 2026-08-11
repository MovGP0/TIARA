/* Ghidra address: 019a44e0 */
/* Ghidra symbol: FUN_019a44e0 */


undefined8 FUN_019a44e0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00414480(param_2);
  if (param_3 != 0) {
    iVar2 = 1;
    do {
      FUN_0043f750(local_30,iVar2);
      FUN_00416ba0(local_20,param_3,local_30[0]);
      iVar2 = iVar2 + 1;
      lVar1 = FUN_019a43f0(param_1,local_20[0],param_4);
      if (lVar1 == 0) break;
    } while (iVar2 != 0x7fffffff);
    if (iVar2 < 0x7fffffff) {
      FUN_00414ad0(param_2,local_20[0]);
    }
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return param_2;
}

