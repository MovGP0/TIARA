/* Ghidra address: 016fcbd0 */
/* Ghidra symbol: FUN_016fcbd0 */


void FUN_016fcbd0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x9c);
  FUN_0064dbe0(*(longlong *)(param_1 + 0x700),0);
  FUN_0064cc50(*(longlong *)(param_1 + 0x6b8),
               *(int *)(*(longlong *)(param_1 + 0x6b8) + 0x9c) - iVar1);
  FUN_0064c650(*(undefined8 *)(param_1 + 0x6c0),5);
  FUN_0064cb90(*(longlong *)(param_1 + 0x6b0),
               *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x94) - iVar1);
  FUN_0064cc50(param_1,*(int *)(param_1 + 0x9c) - iVar1);
  FUN_0067fec0(*(undefined8 *)(param_1 + 0x6d8),1);
  return;
}

