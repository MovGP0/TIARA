/* Ghidra address: 01aab190 */
/* Ghidra symbol: FUN_01aab190 */


void FUN_01aab190(longlong param_1)

{
  ushort *puVar1;
  undefined8 *puVar2;
  short sVar3;
  
  sVar3 = *(short *)(*(longlong *)(param_1 + 0x90) + 0x13b30);
  if (sVar3 != 0) {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x13b38);
    do {
      puVar1 = (ushort *)*puVar2;
      *(undefined1 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10 + (ulonglong)*puVar1 * 8) + -0x1e0 +
       (ulonglong)(byte)puVar1[1] * 0x788) = *(undefined1 *)((longlong)puVar1 + 3);
      puVar2 = puVar2 + 1;
      sVar3 = sVar3 + -1;
    } while (sVar3 != 0);
  }
  return;
}

