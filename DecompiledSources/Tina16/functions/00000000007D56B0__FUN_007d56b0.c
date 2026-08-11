/* Ghidra address: 007d56b0 */
/* Ghidra symbol: FUN_007d56b0 */


longlong FUN_007d56b0(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    param_2 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0xe8))(*(longlong **)(param_1 + 0xb8));
  }
  return param_2;
}

