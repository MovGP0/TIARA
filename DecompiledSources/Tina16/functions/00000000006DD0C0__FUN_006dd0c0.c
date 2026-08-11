/* Ghidra address: 006dd0c0 */
/* Ghidra symbol: FUN_006dd0c0 */


void FUN_006dd0c0(undefined8 param_1,char param_2)

{
  char cVar1;
  
  cVar1 = FUN_006dd0b0(param_1);
  if (param_2 != cVar1) {
    if (param_2 == '\0') {
      FUN_006dd090(param_1,0);
    }
    else {
      FUN_006dd070(param_1,0);
    }
  }
  return;
}

