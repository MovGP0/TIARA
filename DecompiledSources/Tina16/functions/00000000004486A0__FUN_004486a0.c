/* Ghidra address: 004486a0 */
/* Ghidra symbol: FUN_004486a0 */


undefined8 FUN_004486a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_20 [3];
  
  cVar1 = FUN_004483d0(param_1,local_20);
  if (cVar1 == '\0') {
    local_20[0] = param_2;
  }
  return local_20[0];
}

