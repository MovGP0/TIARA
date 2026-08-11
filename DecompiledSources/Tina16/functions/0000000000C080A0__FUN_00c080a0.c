/* Ghidra address: 00c080a0 */
/* Ghidra symbol: FUN_00c080a0 */


void FUN_00c080a0(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x90))(*(longlong **)(param_1 + 0x4e8));
  (**(code **)(**(longlong **)(param_1 + 0x5e8) + 0x10))(*(longlong **)(param_1 + 0x5e8));
  FUN_0040d200(param_1 + 0x560,0x50,0);
  FUN_00bd0fa0(*(undefined8 *)(param_1 + 0x550));
  FUN_00bd0fa0(*(undefined8 *)(param_1 + 0x558));
  FUN_00c0dad0(param_1,0);
  return;
}

