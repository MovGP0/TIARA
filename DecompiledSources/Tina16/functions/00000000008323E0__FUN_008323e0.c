/* Ghidra address: 008323e0 */
/* Ghidra symbol: FUN_008323e0 */


undefined4 FUN_008323e0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong local_10;
  
  local_10 = 0;
  FUN_00832310(&local_10,param_1,param_2);
  uVar1 = 0;
  if (local_10 != 0) {
    uVar1 = *(undefined4 *)(local_10 + -4);
  }
  FUN_00414480(&local_10);
  return uVar1;
}

