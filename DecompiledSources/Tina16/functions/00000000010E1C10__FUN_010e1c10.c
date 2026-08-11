/* Ghidra address: 010e1c10 */
/* Ghidra symbol: FUN_010e1c10 */


void FUN_010e1c10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x8c0);
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x408) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x408) + 0x488), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 0xb8) = param_2;
  }
  return;
}

