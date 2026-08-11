/* Ghidra address: 01d32990 */
/* Ghidra symbol: FUN_01d32990 */


void FUN_01d32990(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int local_2c [3];
  
  FUN_01d30f00(param_1,local_2c,4);
  if (local_2c[0] < 1) {
    FUN_00414480(param_2);
  }
  else {
    uVar1 = FUN_00409570((longlong)(local_2c[0] * 2));
    FUN_01d30f00(param_1,uVar1,local_2c[0] * 2);
    FUN_00414740(param_2,uVar1,local_2c[0]);
    FUN_004095f0(uVar1);
  }
  return;
}

