/* Ghidra address: 017c5380 */
/* Ghidra symbol: FUN_017c5380 */


void FUN_017c5380(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  char cVar1;
  
  cVar1 = '\b';
  do {
    FUN_017c52d0(param_2);
    *param_1 = 0;
    param_1 = param_1 + 1;
    param_2 = param_2 + 8;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  FUN_017c52d0(param_4);
  *param_3 = 0;
  FUN_017c52d0(param_6);
  *param_5 = 0;
  return;
}

