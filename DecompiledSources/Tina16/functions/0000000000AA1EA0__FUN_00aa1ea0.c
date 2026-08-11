/* Ghidra address: 00aa1ea0 */
/* Ghidra symbol: FUN_00aa1ea0 */


void FUN_00aa1ea0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x570) = param_2;
  *(undefined1 *)(*(longlong *)(param_1 + 0x568) + 0x580) = 1;
  return;
}

