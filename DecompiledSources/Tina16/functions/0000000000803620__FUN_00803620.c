/* Ghidra address: 00803620 */
/* Ghidra symbol: FUN_00803620 */


void FUN_00803620(longlong *param_1,longlong param_2)

{
  if (param_1[0xa0] == 0) {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  else {
    FUN_007e6d00(param_1[0xa0],param_2);
    if (*(longlong *)(param_2 + 0x18) == 0) {
      (**(code **)(*param_1 + -0x38))(param_1,param_2);
    }
  }
  return;
}

