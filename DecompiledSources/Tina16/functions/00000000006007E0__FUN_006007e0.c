/* Ghidra address: 006007e0 */
/* Ghidra symbol: FUN_006007e0 */


void FUN_006007e0(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 0xff;
  do {
    puVar1 = (undefined1 *)(param_1 + (longlong)iVar3 * 4);
    puVar2 = (undefined1 *)(param_1 + (longlong)iVar3 * 3);
    puVar1[2] = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[3] = 0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}

