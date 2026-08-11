/* Ghidra address: 017b4c50 */
/* Ghidra symbol: FUN_017b4c50 */


void FUN_017b4c50(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0xf);
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_017b51d0(param_1);
  (**(code **)*param_1)(param_1,param_1 + 3);
  (**(code **)(*param_1 + 0x70))(param_1,param_2,4);
  FUN_017b4ef0(param_1);
  return;
}

