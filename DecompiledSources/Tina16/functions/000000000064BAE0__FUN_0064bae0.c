/* Ghidra address: 0064bae0 */
/* Ghidra symbol: FUN_0064bae0 */


void FUN_0064bae0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x118))(param_1);
  if (cVar1 != '\0') {
    FUN_0064dd50(param_1[4],param_2);
  }
  return;
}

