/* Ghidra address: 01bf6f30 */
/* Ghidra symbol: FUN_01bf6f30 */


undefined8 FUN_01bf6f30(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40);
  if (lVar1 == 0) {
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x70) >> 8),
                     *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x1b8) != 0);
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),
                     *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x1b8) !=
                     *(longlong *)(lVar1 + 0x1b8));
  }
  return uVar2;
}

