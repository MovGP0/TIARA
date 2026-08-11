/* Ghidra address: 004413a0 */
/* Ghidra symbol: FUN_004413a0 */


ushort * FUN_004413a0(longlong param_1)

{
  ushort *puVar1;
  int iVar2;
  
  if (param_1 == 0) {
    puVar1 = (ushort *)0x0;
  }
  else {
    iVar2 = 0;
    if (param_1 != 0) {
      iVar2 = *(int *)(param_1 + -4);
    }
    puVar1 = (ushort *)(param_1 + -2 + (longlong)iVar2 * 2);
    if ((((1 < iVar2) && (0xdbff < *puVar1)) && (*puVar1 < 0xe000)) &&
       ((0xd7ff < puVar1[-1] && (puVar1[-1] < 0xdc00)))) {
      puVar1 = puVar1 + -1;
    }
  }
  return puVar1;
}

