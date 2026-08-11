/* Ghidra address: 01aa8160 */
/* Ghidra symbol: FUN_01aa8160 */


undefined8 FUN_01aa8160(longlong param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 1;
  uVar2 = (uint)*(ushort *)(*(longlong *)(param_1 + 0xb0) + 0x10);
  while( true ) {
    if (uVar2 == 0) {
      return 1;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x78) + -1 + (longlong)iVar1) !=
        *(char *)(*(longlong *)(param_1 + 0x70) + -1 + (longlong)iVar1)) break;
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 - 1;
  }
  return 0;
}

