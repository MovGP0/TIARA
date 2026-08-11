/* Ghidra address: 0064d980 */
/* Ghidra symbol: FUN_0064d980 */


void FUN_0064d980(longlong param_1,char param_2)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + 0xae) != param_2) &&
     (*(char *)(param_1 + 0xae) = param_2, param_2 != '\0')) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffee);
    (*pcVar1)(param_1);
  }
  return;
}

