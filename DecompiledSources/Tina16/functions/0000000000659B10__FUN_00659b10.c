/* Ghidra address: 00659b10 */
/* Ghidra symbol: FUN_00659b10 */


void FUN_00659b10(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00659a70(param_1,param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  return;
}

