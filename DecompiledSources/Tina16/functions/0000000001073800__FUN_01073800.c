/* Ghidra address: 01073800 */
/* Ghidra symbol: FUN_01073800 */


void FUN_01073800(longlong param_1)

{
  char cVar1;
  
  *(undefined4 *)(param_1 + 0x6d8) = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8));
  if (cVar1 != '\0') {
    *(uint *)(param_1 + 0x6d8) = *(uint *)(param_1 + 0x6d8) | 1;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0));
  if (cVar1 != '\0') {
    *(uint *)(param_1 + 0x6d8) = *(uint *)(param_1 + 0x6d8) | 2;
  }
  return;
}

