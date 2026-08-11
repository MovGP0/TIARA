/* Ghidra address: 00534cd0 */
/* Ghidra symbol: FUN_00534cd0 */


char * FUN_00534cd0(char *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((param_1 == (char *)0x0) || (*param_1 != '\x03')) {
    param_1 = (char *)0x0;
  }
  else {
    while( true ) {
      lVar2 = FUN_00589390(param_1);
      plVar1 = *(longlong **)(lVar2 + 9);
      if (((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) || ((char *)*plVar1 == param_1)) break;
      param_1 = (char *)*plVar1;
    }
  }
  return param_1;
}

