/* Ghidra address: 00f03d00 */
/* Ghidra symbol: FUN_00f03d00 */


void FUN_00f03d00(undefined8 param_1,char param_2)

{
  char cVar1;
  
  cVar1 = FUN_00f03890(param_1);
  if (param_2 != cVar1) {
    if (param_2 == '\0') {
      FUN_004b1e70(param_1);
    }
    else {
      FUN_00f03be0(param_1);
    }
  }
  return;
}

