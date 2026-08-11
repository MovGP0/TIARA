/* Ghidra address: 017b7060 */
/* Ghidra symbol: FUN_017b7060 */


void FUN_017b7060(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0xf);
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = param_1[1];
  param_1[9] = param_1[8];
  (**(code **)(*param_1 + 0x70))(param_1,param_2,4);
  return;
}

