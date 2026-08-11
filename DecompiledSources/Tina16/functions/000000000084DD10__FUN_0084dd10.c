/* Ghidra address: 0084dd10 */
/* Ghidra symbol: FUN_0084dd10 */


void FUN_0084dd10(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 *local_10;
  
  local_10 = auStack_38;
  local_18 = 0;
  FUN_0084e0d0(param_1);
  FUN_0084e320(param_1,&local_18,param_2,param_3);
  iVar1 = FUN_00416db0(param_4,local_18);
  if (iVar1 != 0) {
    FUN_0084e3e0(param_1,param_2,param_3,param_4);
  }
  FUN_0084e0e0(param_1);
  FUN_0084a070(param_1,param_2,param_3,param_4);
  FUN_00414480(&local_18);
  return;
}

