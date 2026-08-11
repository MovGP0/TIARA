/* Ghidra address: 018ba6c0 */
/* Ghidra symbol: FUN_018ba6c0 */


void FUN_018ba6c0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong local_10;
  
  local_10 = 0;
  uVar2 = FUN_018b8410(param_1);
  FUN_01803cc0(uVar2,&local_10,&DAT_018ba784);
  if (local_10 != 0) {
    uVar1 = FUN_0043fc00(local_10);
    *param_2 = uVar1;
  }
  uVar2 = FUN_018b8410(param_1);
  FUN_01803cc0(uVar2,&local_10,&DAT_018ba794);
  if (local_10 != 0) {
    uVar2 = FUN_0180d800(local_10);
    *param_3 = uVar2;
  }
  FUN_00414480(&local_10);
  return;
}

