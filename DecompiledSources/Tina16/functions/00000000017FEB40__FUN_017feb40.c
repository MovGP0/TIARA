/* Ghidra address: 017feb40 */
/* Ghidra symbol: FUN_017feb40 */


void FUN_017feb40(longlong param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  *(undefined2 *)(param_1 + 0x24) = 0xffff;
  iVar2 = 0x15;
  puVar1 = (undefined2 *)(param_1 + 0x26);
  do {
    *puVar1 = 0xffff;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined2 *)(param_1 + 0x50) = 0;
  return;
}

