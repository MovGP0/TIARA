/* Ghidra address: 004591d0 */
/* Ghidra symbol: FUN_004591d0 */


undefined4 FUN_004591d0(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined2 local_30 [4];
  longlong local_28;
  longlong local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  uVar1 = 0;
  FUN_00416780(local_20,param_2);
  if (local_20[0] != 0) {
    FUN_00416780(&local_28,param_2);
    uVar1 = *(undefined4 *)(local_28 + -4);
  }
  local_30[0] = param_2;
  uVar1 = FUN_004592c0(param_1,local_30,0,0,uVar1);
  FUN_00414560(&local_28,2);
  return uVar1;
}

