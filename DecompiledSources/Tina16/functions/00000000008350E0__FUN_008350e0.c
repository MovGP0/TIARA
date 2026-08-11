/* Ghidra address: 008350e0 */
/* Ghidra symbol: FUN_008350e0 */


undefined4 FUN_008350e0(undefined8 param_1)

{
  undefined4 uVar1;
  longlong local_10;
  
  local_10 = 0;
  FUN_00835150(param_1,&local_10);
  uVar1 = 0;
  if (local_10 != 0) {
    uVar1 = *(undefined4 *)(local_10 + -4);
  }
  FUN_00414480(&local_10);
  return uVar1;
}

