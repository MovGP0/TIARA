/* Ghidra address: 0179cea0 */
/* Ghidra symbol: FUN_0179cea0 */


void FUN_0179cea0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_0179d460(param_1);
  if (cVar1 != '\0') {
    FUN_01797060(param_1,*(undefined4 *)(param_1 + 0xca0));
    FUN_01795670(param_1,0);
    *(undefined4 *)(param_1 + 0x508) = 1;
  }
  return;
}

