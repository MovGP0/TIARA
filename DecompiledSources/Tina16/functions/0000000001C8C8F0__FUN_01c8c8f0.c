/* Ghidra address: 01c8c8f0 */
/* Ghidra symbol: FUN_01c8c8f0 */


void FUN_01c8c8f0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 != 0) {
    cVar1 = FUN_01d04d40(param_2);
    if (cVar1 != '\0') {
      FUN_01c8ab30(param_1,param_2,0);
    }
  }
  FUN_00414480(&local_10);
  return;
}

