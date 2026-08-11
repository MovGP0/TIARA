/* Ghidra address: 017b85e0 */
/* Ghidra symbol: FUN_017b85e0 */


void FUN_017b85e0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0xf);
  *(undefined1 *)(param_1 + 4) = 0;
  (**(code **)*param_1)(param_1,param_1 + 3);
  (**(code **)(*param_1 + 0x70))(param_1,param_2,4);
  return;
}

