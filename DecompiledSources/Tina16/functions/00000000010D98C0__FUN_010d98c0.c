/* Ghidra address: 010d98c0 */
/* Ghidra symbol: FUN_010d98c0 */


void FUN_010d98c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  while( true ) {
    cVar1 = FUN_010e2d90(param_1);
    if (cVar1 != '\0') break;
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  }
  FUN_010e2340(param_1,param_2);
  return;
}

