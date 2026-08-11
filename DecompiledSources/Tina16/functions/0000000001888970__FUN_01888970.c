/* Ghidra address: 01888970 */
/* Ghidra symbol: FUN_01888970 */


void FUN_01888970(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x48) + 0x20);
  if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x18) != cVar1) {
    FUN_01876e00(*(longlong *)(param_1 + 0x50),cVar1);
  }
  return;
}

