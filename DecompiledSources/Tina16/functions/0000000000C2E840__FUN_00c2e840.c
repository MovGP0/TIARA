/* Ghidra address: 00c2e840 */
/* Ghidra symbol: FUN_00c2e840 */


void FUN_00c2e840(longlong param_1,longlong *param_2)

{
  FUN_00c2e030(param_1,param_2);
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x20,0xd);
  FUN_00c1a470(param_2,*(undefined8 *)(param_1 + 0x18));
  return;
}

