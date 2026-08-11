/* Ghidra address: 017aff80 */
/* Ghidra symbol: FUN_017aff80 */


void FUN_017aff80(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  param_1[2] = param_1[3];
  param_1[1] = param_1[2];
  *(undefined4 *)((longlong)param_1 + 0x24) = param_3;
  (**(code **)(*param_1 + 0x70))(param_1,param_2,1);
  *(undefined1 *)(param_1 + 4) = 1;
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0xf);
  return;
}

