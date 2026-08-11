/* Ghidra address: 017b0090 */
/* Ghidra symbol: FUN_017b0090 */


void FUN_017b0090(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0xf);
  *(undefined1 *)(param_1 + 4) = 0;
  (**(code **)*param_1)(param_1,param_1 + 1);
  (**(code **)(*param_1 + 0x70))(param_1,param_2,4);
  return;
}

