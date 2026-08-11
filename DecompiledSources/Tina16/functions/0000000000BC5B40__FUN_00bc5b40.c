/* Ghidra address: 00bc5b40 */
/* Ghidra symbol: FUN_00bc5b40 */


void FUN_00bc5b40(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00bc5890(*param_1,param_2,(longlong)param_1 + 0x19c);
  if (cVar1 == '\0') {
    (**(code **)*param_1)(param_1,0x3f5);
  }
  return;
}

