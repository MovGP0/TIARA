/* Ghidra address: 01582590 */
/* Ghidra symbol: FUN_01582590 */


void FUN_01582590(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_0157d5e0(param_2);
  if (cVar1 == '\0') {
    (**(code **)*param_1)(param_1);
  }
  else {
    FUN_0045ae90();
  }
  return;
}

