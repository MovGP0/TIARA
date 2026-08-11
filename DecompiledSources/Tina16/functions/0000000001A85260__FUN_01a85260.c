/* Ghidra address: 01a85260 */
/* Ghidra symbol: FUN_01a85260 */


void FUN_01a85260(longlong param_1)

{
  int in_stack_00000028;
  int in_stack_00000030;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01aee850(&local_10,0x41a,*(undefined4 *)(param_1 + 0x6b8),
               *(int *)(*(longlong *)(param_1 + 0xa70) + 0x90) +
               *(int *)(*(longlong *)(param_1 + 0xae8) + 0x90) + in_stack_00000028,
               *(int *)(*(longlong *)(param_1 + 0xae8) + 0x94) + in_stack_00000030);
  FUN_01aed640(*(undefined8 *)PTR_DAT_020041a8,local_10);
  FUN_00414480(&local_10);
  return;
}

