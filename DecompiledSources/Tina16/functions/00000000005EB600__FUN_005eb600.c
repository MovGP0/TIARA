/* Ghidra address: 005eb600 */
/* Ghidra symbol: FUN_005eb600 */


undefined1 FUN_005eb600(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 local_10 [8];
  
  cVar1 = FUN_005eb550(param_1,param_2,local_10);
  if (cVar1 == '\0') {
    local_10[0] = 0;
  }
  return local_10[0];
}

