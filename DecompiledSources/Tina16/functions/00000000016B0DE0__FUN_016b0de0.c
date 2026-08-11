/* Ghidra address: 016b0de0 */
/* Ghidra symbol: FUN_016b0de0 */


void FUN_016b0de0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_00416880(local_20,local_res10[0]);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xb0))
                    (*(longlong **)(param_1 + 0x50),local_20[0]);
  FUN_00416880(&local_28,local_res10[0]);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xb0))
                    (*(longlong **)(param_1 + 0x58),local_28);
  if (iVar1 < 0) {
    *param_3 = 0;
    param_3[1] = uVar2;
  }
  else {
    *param_3 = 1;
    param_3[1] = *(int *)(param_1 + 0x20) + iVar1;
  }
  FUN_00414560(&local_28,2);
  FUN_004144d0(local_res10);
  return;
}

