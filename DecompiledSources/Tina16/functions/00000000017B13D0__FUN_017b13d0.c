/* Ghidra address: 017b13d0 */
/* Ghidra symbol: FUN_017b13d0 */


void FUN_017b13d0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0xf);
  *(undefined1 *)(param_1 + 4) = 0;
  (**(code **)*param_1)(param_1,param_1 + 1);
  *(undefined1 *)((longlong)param_1 + 0x147) = *(undefined1 *)((longlong)param_1 + 0x146);
  *(undefined8 *)((longlong)param_1 + 0x154) = *(undefined8 *)((longlong)param_1 + 0x14c);
  (**(code **)(*param_1 + 0x70))(param_1,param_2,4);
  return;
}

