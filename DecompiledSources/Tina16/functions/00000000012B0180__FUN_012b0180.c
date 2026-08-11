/* Ghidra address: 012b0180 */
/* Ghidra symbol: FUN_012b0180 */


void FUN_012b0180(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xd90) = 1;
  (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0xe8))(*(longlong **)(param_1 + 0xdb8),1);
  FUN_012ae910(param_1,6,0,0);
  FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),0);
  return;
}

