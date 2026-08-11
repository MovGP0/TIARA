/* Ghidra address: 015226a0 */
/* Ghidra symbol: FUN_015226a0 */


undefined8 FUN_015226a0(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  
  if (*(longlong *)(param_1 + 0x1a5d0) == 0) {
    uVar2 = FUN_004095c0();
    *(undefined8 *)(param_1 + 0x1a5d0) = uVar2;
    bVar1 = 0;
    do {
      bVar3 = 0;
      do {
        *(undefined8 *)
         (*(longlong *)(param_1 + 0x1a5d0) + (ulonglong)bVar1 * 0x20 + (ulonglong)bVar3 * 8) =
             0x3e45798ee2308c3a;
        bVar3 = bVar3 + 1;
      } while (bVar3 != 4);
      bVar1 = bVar1 + 1;
    } while (bVar1 != 4);
  }
  return *(undefined8 *)(param_1 + 0x1a5d0);
}

