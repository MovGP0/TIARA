/* Ghidra address: 00c88110 */
/* Ghidra symbol: FUN_00c88110 */


void FUN_00c88110(longlong param_1)

{
  FUN_007fdf10(param_1,*(int *)(*(longlong *)(param_1 + 0x6d8) + 0x94) +
                       *(int *)(*(longlong *)(param_1 + 0x6d8) + 0x9c) + 5);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6c8),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d0),1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d8),1);
  FUN_0064c1a0(*(longlong *)(param_1 + 0x6d8),*(byte *)(*(longlong *)(param_1 + 0x6d8) + 0xb3) | 8);
  FUN_007ff680(param_1,2);
  return;
}

