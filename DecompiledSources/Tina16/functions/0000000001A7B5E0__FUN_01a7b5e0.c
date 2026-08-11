/* Ghidra address: 01a7b5e0 */
/* Ghidra symbol: FUN_01a7b5e0 */


void FUN_01a7b5e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_0064d120(param_1);
  FUN_0064cb90(*(undefined8 *)(param_1 + 0xbd8),
               iVar1 - *(int *)(*(longlong *)(param_1 + 0xbd8) + 0x9c));
  FUN_0064cb90(*(longlong *)(param_1 + 0xa68),
               *(int *)(*(longlong *)(param_1 + 0xbd8) + 0x94) -
               *(int *)(*(longlong *)(param_1 + 0xa68) + 0x9c));
  FUN_0064cb90(*(longlong *)(param_1 + 0xc08),
               *(int *)(*(longlong *)(param_1 + 0xa68) + 0x94) -
               *(int *)(*(longlong *)(param_1 + 0xc08) + 0x9c));
  return;
}

