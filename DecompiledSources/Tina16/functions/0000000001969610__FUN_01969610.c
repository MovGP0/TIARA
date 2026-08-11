/* Ghidra address: 01969610 */
/* Ghidra symbol: FUN_01969610 */


void FUN_01969610(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x278) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x1b8) = param_2;
  return;
}

