/* Ghidra address: 014f3e40 */
/* Ghidra symbol: FUN_014f3e40 */


void FUN_014f3e40(undefined8 param_1,undefined8 param_2,int param_3,int param_4,char *param_5)

{
  char cVar1;
  
  if ((((*param_5 == '\0') || (param_4 < 1)) || (param_3 < 1)) || (param_4 < param_3)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  *param_5 = cVar1;
  return;
}

