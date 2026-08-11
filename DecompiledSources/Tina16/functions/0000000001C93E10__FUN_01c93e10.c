/* Ghidra address: 01c93e10 */
/* Ghidra symbol: FUN_01c93e10 */


void FUN_01c93e10(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  code *local_28;
  undefined8 local_20;
  
  cVar1 = FUN_01c87d20(param_1);
  if (cVar1 == '\0') {
    local_28 = FUN_01c93e10;
    local_20 = param_1;
    FUN_00f836b0(&local_28);
  }
  else {
    FUN_01c93e60(param_1,param_2);
  }
  return;
}

