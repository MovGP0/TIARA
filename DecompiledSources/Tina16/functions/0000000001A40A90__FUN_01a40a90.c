/* Ghidra address: 01a40a90 */
/* Ghidra symbol: FUN_01a40a90 */


void FUN_01a40a90(longlong param_1)

{
  uint *puVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x812) != '\0') {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x790) + 0x260))(*(longlong **)(param_1 + 0x790))
    ;
    if (cVar2 == '\0') {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x2968) + 0x50);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    else {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x2968) + 0x50);
      *puVar1 = *puVar1 | 1;
    }
  }
  return;
}

