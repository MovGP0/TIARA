/* Ghidra address: 01d316c0 */
/* Ghidra symbol: FUN_01d316c0 */


void FUN_01d316c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int local_1c;
  
  FUN_01d30f00(param_1,&local_1c,4);
  FUN_004169f0(param_2,local_1c);
  if (0 < local_1c) {
    uVar1 = FUN_00414de0(param_2);
    FUN_01d30f00(param_1,uVar1,local_1c * 2);
  }
  return;
}

