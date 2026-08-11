/* Ghidra address: 00688d10 */
/* Ghidra symbol: FUN_00688d10 */


void FUN_00688d10(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x278))(param_1);
  }
  return;
}

