/* Ghidra address: 017b4be0 */
/* Ghidra symbol: FUN_017b4be0 */


void FUN_017b4be0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0xf);
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = param_1[1];
  FUN_00409a70(param_1[10],param_1[0xb],(longlong)((int)param_1[0xc] * 8));
  FUN_017b51d0(param_1);
  (**(code **)(*param_1 + 0x70))(param_1,param_2,4);
  FUN_017b4ef0(param_1);
  return;
}

