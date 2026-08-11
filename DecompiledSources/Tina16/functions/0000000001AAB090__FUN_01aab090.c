/* Ghidra address: 01aab090 */
/* Ghidra symbol: FUN_01aab090 */


void FUN_01aab090(longlong param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  
  uVar2 = (ushort)*(byte *)(param_1 + 0x13898);
  if (uVar2 != 0) {
    puVar1 = (undefined1 *)(param_1 + 0x13a68);
    do {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

