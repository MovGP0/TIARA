/* Ghidra address: 00bc2280 */
/* Ghidra symbol: FUN_00bc2280 */


void FUN_00bc2280(longlong *param_1)

{
  char cVar1;
  
  while( true ) {
    cVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (cVar1 != '\0') break;
    (**(code **)(*param_1 + 0x148))(param_1);
  }
  return;
}

