/* Ghidra address: 01cbfce0 */
/* Ghidra symbol: FUN_01cbfce0 */


void FUN_01cbfce0(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (param_2 & 0xff) * 4) = param_3;
  return;
}

