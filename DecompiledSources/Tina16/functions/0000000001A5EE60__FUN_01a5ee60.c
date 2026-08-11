/* Ghidra address: 01a5ee60 */
/* Ghidra symbol: FUN_01a5ee60 */


int FUN_01a5ee60(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01d1b660(*(undefined8 *)(param_1 + 0x90));
  iVar2 = FUN_005fce00(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x80));
  iVar1 = iVar1 + (iVar2 / 2) * 2;
  if ((*(char *)(param_1 + 0x99) == '\x01') || (*(char *)(param_1 + 0xa0) != '\0')) {
    iVar2 = FUN_005fce00(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x80),
                         (longlong)iVar2 % 2 & 0xffffffff);
    iVar1 = iVar1 + (iVar2 / 2) * 2;
  }
  return iVar1;
}

