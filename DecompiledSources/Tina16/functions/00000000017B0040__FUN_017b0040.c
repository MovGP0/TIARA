/* Ghidra address: 017b0040 */
/* Ghidra symbol: FUN_017b0040 */


void FUN_017b0040(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0xf);
  *(undefined1 *)(param_1 + 4) = 0;
  (**(code **)*param_1)(param_1,param_1 + 3);
  (**(code **)(*param_1 + 0x70))(param_1,param_2,4);
  return;
}

