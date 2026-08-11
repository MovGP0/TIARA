/* Ghidra address: 010dbf10 */
/* Ghidra symbol: FUN_010dbf10 */


void FUN_010dbf10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x408) != 0)) {
    *(undefined8 *)(*(longlong *)(lVar1 + 0x408) + 0xe08) = param_2;
  }
  return;
}

