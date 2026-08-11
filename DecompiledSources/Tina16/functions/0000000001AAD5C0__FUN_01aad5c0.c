/* Ghidra address: 01aad5c0 */
/* Ghidra symbol: FUN_01aad5c0 */


void FUN_01aad5c0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  short sVar3;
  
  sVar3 = *(short *)(param_1 + 2);
  uVar1 = 1;
  if (sVar3 != 0) {
    puVar2 = (undefined1 *)(param_1 + 0x14ad9);
    do {
      *(undefined1 *)(param_2 + (ulonglong)uVar1) = *puVar2;
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
      sVar3 = sVar3 + -1;
    } while (sVar3 != 0);
  }
  return;
}

