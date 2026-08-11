/* Ghidra address: 005eaff0 */
/* Ghidra symbol: FUN_005eaff0 */


void FUN_005eaff0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00416740(param_2);
  uVar2 = thunk_FUN_041ae74b(*(undefined8 *)(param_1 + 8),uVar1);
  FUN_005ea620(param_1,uVar2);
  return;
}

