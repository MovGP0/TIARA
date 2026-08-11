/* Ghidra address: 0105ede0 */
/* Ghidra symbol: FUN_0105ede0 */


char FUN_0105ede0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_0105ed80(&local_10,0x1c,0);
  cVar1 = FUN_0105e8e0(local_10,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_0105ed80(&local_10,0x1a,0);
    cVar1 = FUN_0105e8e0(local_10,param_1,param_2);
  }
  FUN_00414560(&local_20,3);
  return cVar1;
}

