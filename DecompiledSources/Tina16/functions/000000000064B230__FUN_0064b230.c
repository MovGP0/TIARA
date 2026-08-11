/* Ghidra address: 0064b230 */
/* Ghidra symbol: FUN_0064b230 */


void FUN_0064b230(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    cVar1 = FUN_0064e930(*(longlong *)(param_1 + 0x98));
    if (cVar1 == '\0') {
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffff7f;
    }
    else {
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
    }
  }
  return;
}

