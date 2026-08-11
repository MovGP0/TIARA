/* Ghidra address: 01d3f250 */
/* Ghidra symbol: FUN_01d3f250 */


undefined1 FUN_01d3f250(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if (((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x1a8), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x70) == '\x03')) {
    uVar2 = *(undefined1 *)(lVar1 + 0x180);
  }
  return uVar2;
}

