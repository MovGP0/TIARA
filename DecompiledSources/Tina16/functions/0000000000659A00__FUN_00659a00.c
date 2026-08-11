/* Ghidra address: 00659a00 */
/* Ghidra symbol: FUN_00659a00 */


void FUN_00659a00(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_006598f0(param_1,param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  return;
}

