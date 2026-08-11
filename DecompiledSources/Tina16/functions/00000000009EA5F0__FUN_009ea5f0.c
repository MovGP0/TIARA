/* Ghidra address: 009ea5f0 */
/* Ghidra symbol: FUN_009ea5f0 */


void FUN_009ea5f0(longlong *param_1,undefined8 param_2)

{
  if (((char)param_1[8] == '\0') && (1 < (int)param_1[7])) {
    (**(code **)(*param_1 + 0x130))(param_1);
    FUN_009ea420(param_1,0,(int)param_1[7] + -1,param_2);
    (**(code **)(*param_1 + 0x128))(param_1);
  }
  return;
}

