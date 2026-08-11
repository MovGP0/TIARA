/* Ghidra address: 004b6880 */
/* Ghidra symbol: FUN_004b6880 */


void FUN_004b6880(longlong *param_1,undefined8 param_2)

{
  if (((char)param_1[9] == '\0') && (1 < (int)param_1[8])) {
    (**(code **)(*param_1 + 0x130))(param_1);
    FUN_004b6610(param_1,0,(int)param_1[8] + -1,param_2);
    (**(code **)(*param_1 + 0x128))(param_1);
  }
  return;
}

