/* Ghidra address: 00542630 */
/* Ghidra symbol: FUN_00542630 */


undefined8 FUN_00542630(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00542610(param_1,&PTR_FUN_00528c20,0,param_2);
  }
  return uVar1;
}

