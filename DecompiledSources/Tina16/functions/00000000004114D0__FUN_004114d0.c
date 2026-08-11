/* Ghidra address: 004114d0 */
/* Ghidra symbol: FUN_004114d0 */


undefined8 FUN_004114d0(longlong param_1,ushort param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  
  while( true ) {
    puVar1 = *(ushort **)(param_1 + -0x90);
    if (puVar1 != (ushort *)0x0) {
      uVar3 = (uint)*puVar1;
      uVar2 = 0;
      do {
        if (puVar1[(ulonglong)uVar2 + 1] == param_2) {
          return *(undefined8 *)
                  ((longlong)puVar1 + (ulonglong)(uVar2 * 8) + (ulonglong)((uint)*puVar1 * 2) + 2);
        }
        uVar2 = uVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (*(longlong **)(param_1 + -0x78) == (longlong *)0x0) break;
    param_1 = **(longlong **)(param_1 + -0x78);
  }
  return 0;
}

