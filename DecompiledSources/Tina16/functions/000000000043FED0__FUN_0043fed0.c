/* Ghidra address: 0043fed0 */
/* Ghidra symbol: FUN_0043fed0 */


undefined1 FUN_0043fed0(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  undefined1 local_19 [9];
  
  cVar1 = FUN_0043ff60(param_1,local_19);
  if (cVar1 == '\0') {
    local_19[0] = param_2;
  }
  return local_19[0];
}

