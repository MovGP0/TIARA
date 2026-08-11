/* Ghidra address: 019ec2b0 */
/* Ghidra symbol: FUN_019ec2b0 */


void FUN_019ec2b0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0xb0) + -0x20))(*(undefined8 *)(param_2 + 0xb0),1);
  }
  return;
}

