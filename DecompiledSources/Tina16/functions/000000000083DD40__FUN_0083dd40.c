/* Ghidra address: 0083dd40 */
/* Ghidra symbol: FUN_0083dd40 */


void FUN_0083dd40(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2a8))(param_1);
  if (cVar1 != '\0') {
    FUN_00835440(param_1,param_2);
  }
  return;
}

