/* Ghidra address: 012dae80 */
/* Ghidra symbol: FUN_012dae80 */


void FUN_012dae80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    FUN_012d1e50(*(undefined8 *)(lVar1 + 0xb0),*(undefined8 *)(param_1 + 0x80),
                 *(undefined1 *)(param_1 + 0xb0),*(longlong *)(lVar1 + 0xa0) + 0x492,
                 *(undefined1 *)(*(longlong *)(lVar1 + 0xa0) + 0xe2b),
                 *(undefined1 *)(param_1 + 0xb1));
  }
  return;
}

