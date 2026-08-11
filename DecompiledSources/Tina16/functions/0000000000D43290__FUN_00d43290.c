/* Ghidra address: 00d43290 */
/* Ghidra symbol: FUN_00d43290 */


void FUN_00d43290(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00d41b20(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0xb8))(param_1,param_2);
  }
  return;
}

