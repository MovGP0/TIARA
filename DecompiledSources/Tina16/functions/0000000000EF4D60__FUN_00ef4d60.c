/* Ghidra address: 00ef4d60 */
/* Ghidra symbol: FUN_00ef4d60 */


void FUN_00ef4d60(undefined8 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = '\x04';
  do {
    *param_2 = *param_2 + -1;
    param_2 = param_2 + 1;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}

