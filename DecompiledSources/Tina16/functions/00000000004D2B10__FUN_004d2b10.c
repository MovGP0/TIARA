/* Ghidra address: 004d2b10 */
/* Ghidra symbol: FUN_004d2b10 */


void FUN_004d2b10(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + 0x60))(param_1,param_2,*(undefined8 *)(param_2 + 0x10),0);
  (**(code **)(*param_1 + 0x28))(param_1,param_2,1);
  FUN_004d43a0(param_2,0);
  FUN_004d28e0(param_1,param_2);
  return;
}

