/* Ghidra address: 015bf640 */
/* Ghidra symbol: FUN_015bf640 */


int FUN_015bf640(undefined8 param_1)

{
  char cVar1;
  undefined4 local_10;
  
  local_10 = FUN_00440f60(param_1,1);
  if (local_10 == -1) {
    cVar1 = FUN_015bf1b0(param_1);
    if (cVar1 != '\0') {
      local_10 = 4;
    }
  }
  return local_10;
}

