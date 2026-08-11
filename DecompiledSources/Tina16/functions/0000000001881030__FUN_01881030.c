/* Ghidra address: 01881030 */
/* Ghidra symbol: FUN_01881030 */


undefined8 FUN_01881030(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  
  dVar1 = (double)FUN_0187fdb0();
  if (dVar1 == 0.0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_0044a330(param_2,dVar1);
  }
  return param_2;
}

