/* Ghidra address: 016989b0 */
/* Ghidra symbol: FUN_016989b0 */


void FUN_016989b0(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  
  if (param_3 == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28));
  }
  else {
    uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    FUN_00611620(*(undefined8 *)(param_1 + 0x28),uVar1);
  }
  FUN_004ae7e0(uVar1,param_2);
  return;
}

