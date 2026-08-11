/* Ghidra address: 0064bab0 */
/* Ghidra symbol: FUN_0064bab0 */


void FUN_0064bab0(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x70))(param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1[4] + 0x298) = param_2;
  }
  return;
}

