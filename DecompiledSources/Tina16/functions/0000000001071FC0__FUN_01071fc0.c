/* Ghidra address: 01071fc0 */
/* Ghidra symbol: FUN_01071fc0 */


void FUN_01071fc0(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x764) != '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))(*(longlong **)(param_1 + 0x710))
    ;
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x760) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x760) = 1;
    }
  }
  return;
}

