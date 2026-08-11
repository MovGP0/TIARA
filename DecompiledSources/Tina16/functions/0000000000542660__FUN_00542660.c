/* Ghidra address: 00542660 */
/* Ghidra symbol: FUN_00542660 */


undefined8 FUN_00542660(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + -0xa8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00542630(param_1,*(undefined8 *)(param_2 + -0xa8));
  }
  return uVar1;
}

