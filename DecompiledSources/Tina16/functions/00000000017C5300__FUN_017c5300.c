/* Ghidra address: 017c5300 */
/* Ghidra symbol: FUN_017c5300 */


void FUN_017c5300(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,int param_7)

{
  char cVar1;
  
  if (param_7 != 0) {
    cVar1 = '\b';
    do {
      FUN_017c5250(param_1,param_2,param_7);
      param_2 = param_2 + 8;
      param_1 = param_1 + 8;
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
    FUN_017c5250(param_3,param_4,param_7);
    FUN_017c5250(param_5,param_6,param_7);
  }
  return;
}

