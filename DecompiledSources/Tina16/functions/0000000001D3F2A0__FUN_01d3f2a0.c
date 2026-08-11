/* Ghidra address: 01d3f2a0 */
/* Ghidra symbol: FUN_01d3f2a0 */


undefined8 FUN_01d3f2a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x70) != '\x01')) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}

