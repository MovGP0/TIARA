/* Ghidra address: 017f2050 */
/* Ghidra symbol: FUN_017f2050 */


void FUN_017f2050(longlong param_1)

{
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x7c8),*(undefined4 *)(param_1 + 0xaf8));
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x7d8),*(undefined4 *)(param_1 + 0xafc));
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x7e0),
               *(int *)(param_1 + 0x98) -
               (*(int *)(*(longlong *)(param_1 + 0x7c8) + 0x98) +
               *(int *)(*(longlong *)(param_1 + 0x7d8) + 0x98)));
  return;
}

