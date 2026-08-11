/* Ghidra address: 016d4cb0 */
/* Ghidra symbol: FUN_016d4cb0 */


void FUN_016d4cb0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  if (cVar1 != '\0') {
    FUN_016d4c20(param_1);
  }
  return;
}

