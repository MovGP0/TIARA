/* Ghidra address: 010e1bd0 */
/* Ghidra symbol: FUN_010e1bd0 */


void FUN_010e1bd0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x8c0);
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x408) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x408) + 0x488), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 0xb0) = param_2;
  }
  return;
}

