/* Ghidra address: 006a0050 */
/* Ghidra symbol: FUN_006a0050 */


void FUN_006a0050(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xf8))(*(longlong **)(param_1 + 0x50));
  if (cVar1 == '\0') {
    FUN_00649770(param_1);
  }
  return;
}

