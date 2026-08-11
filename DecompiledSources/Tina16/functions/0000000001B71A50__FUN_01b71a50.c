/* Ghidra address: 01b71a50 */
/* Ghidra symbol: FUN_01b71a50 */


uint FUN_01b71a50(longlong param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  FUN_00b0a890(*(undefined8 *)(param_1 + 0x6c8));
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 0x6cf + (longlong)(iVar1 + 1)) == '\0') {
      uVar2 = uVar2 | 1 << ((byte)iVar1 & 0x1f);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  return uVar2;
}

