/* Ghidra address: 00d3f400 */
/* Ghidra symbol: FUN_00d3f400 */


undefined8 FUN_00d3f400(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00d3f270(param_1);
  if ((cVar1 != '\x04') && (cVar1 = FUN_00d3f270(param_1), cVar1 != '\x05')) {
    return 0;
  }
  return 1;
}

