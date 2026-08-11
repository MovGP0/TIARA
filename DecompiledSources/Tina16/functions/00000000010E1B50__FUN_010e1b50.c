/* Ghidra address: 010e1b50 */
/* Ghidra symbol: FUN_010e1b50 */


undefined8 FUN_010e1b50(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x8c0);
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x408) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x408) + 0x488), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 0xb0);
  }
  return uVar2;
}

