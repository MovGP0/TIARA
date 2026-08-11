/* Ghidra address: 00bcf900 */
/* Ghidra symbol: FUN_00bcf900 */


undefined8 FUN_00bcf900(longlong *param_1,undefined8 param_2,int param_3)

{
  if ((param_3 < 0) || ((int)param_1[8] <= param_3)) {
    FUN_00414480(param_2);
  }
  else if ((*(byte *)(param_1[7] + 0x20 + (longlong)param_3 * 0x28) & 2) == 0) {
    FUN_00bcf6d0(param_1,param_2);
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
  }
  return param_2;
}

