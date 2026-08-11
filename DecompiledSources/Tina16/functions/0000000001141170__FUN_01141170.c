/* Ghidra address: 01141170 */
/* Ghidra symbol: FUN_01141170 */


void FUN_01141170(longlong param_1,undefined8 param_2,double param_3)

{
  *(double *)(param_1 + 0x781) = param_3;
  if ((*(char *)(param_1 + 0x1007b1) != '\0') && (0.0 <= param_3)) {
    DAT_020301d8 = 2.0 / *(double *)(param_1 + 0x789) + param_3;
    DAT_020301d0 = param_3;
  }
  FUN_0113f080(DAT_020301d0,DAT_020301d8,param_1 + 0x780,1);
  return;
}

