/* Ghidra address: 01be2c10 */
/* Ghidra symbol: FUN_01be2c10 */


void FUN_01be2c10(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_01c027f0(param_1);
  if (((cVar1 == '\0') && (*(longlong *)(param_1 + 0x5a8) != 0)) &&
     (*(longlong *)(param_1 + 0x5a8) != param_1)) {
    (**(code **)(**(longlong **)(param_1 + 0x5a8) + 0x2c8))(*(longlong **)(param_1 + 0x5a8));
  }
  return;
}

