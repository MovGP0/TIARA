/* Ghidra address: 01bd52e0 */
/* Ghidra symbol: FUN_01bd52e0 */


void FUN_01bd52e0(longlong param_1)

{
  char cVar1;
  
  FUN_01c05af0(param_1);
  if (*(longlong *)(param_1 + 0x360) != 0) {
    cVar1 = FUN_0065be20(*(longlong *)(param_1 + 0x360));
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x360) + 0x180))(*(longlong **)(param_1 + 0x360));
    }
  }
  return;
}

