/* Ghidra address: 018b1860 */
/* Ghidra symbol: FUN_018b1860 */


void FUN_018b1860(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x848) + 0x2c0))(*(longlong **)(param_1 + 0x848));
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x848) + 0x2b8))(*(longlong **)(param_1 + 0x848));
  }
  return;
}

