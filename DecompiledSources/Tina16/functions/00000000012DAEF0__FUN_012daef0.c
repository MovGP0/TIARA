/* Ghidra address: 012daef0 */
/* Ghidra symbol: FUN_012daef0 */


void FUN_012daef0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    FUN_012d2130(*(undefined8 *)(lVar1 + 0xb0),*(undefined8 *)(param_1 + 0x88),
                 *(undefined1 *)(param_1 + 0xb0),*(longlong *)(lVar1 + 0xa0) + 0x492,
                 *(undefined1 *)(*(longlong *)(lVar1 + 0xa0) + 0xe2b),
                 *(undefined1 *)(param_1 + 0xb1));
  }
  return;
}

