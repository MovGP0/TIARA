/* Ghidra address: 01d829c0 */
/* Ghidra symbol: FUN_01d829c0 */


void FUN_01d829c0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xa60) = 1;
  (**(code **)(**(longlong **)(param_1 + 0xa88) + 0xe8))(*(longlong **)(param_1 + 0xa88),1);
  FUN_01d80da0(param_1,6,0,0);
  return;
}

