/* Ghidra address: 00874420 */
/* Ghidra symbol: FUN_00874420 */


undefined8 FUN_00874420(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = DAT_01e1df88;
  if (DAT_01e1df88 == '\0') {
    cVar1 = '\x03';
  }
  FUN_008742b0(param_1,cVar1);
  return param_1;
}

