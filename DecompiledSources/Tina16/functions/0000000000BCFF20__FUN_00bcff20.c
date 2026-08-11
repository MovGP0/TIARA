/* Ghidra address: 00bcff20 */
/* Ghidra symbol: FUN_00bcff20 */


void FUN_00bcff20(longlong param_1,int param_2,undefined8 param_3)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x40) < param_2)) {
    FUN_00bceea0(param_2);
  }
  FUN_004b3260(param_1);
  FUN_00bcff90(param_1,param_2,param_3);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    (**(code **)(param_1 + 0xb8))(*(undefined8 *)(param_1 + 0xc0),param_1,param_2,1);
  }
  FUN_004b3390(param_1);
  return;
}

