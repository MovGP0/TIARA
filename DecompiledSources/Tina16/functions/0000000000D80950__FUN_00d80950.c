/* Ghidra address: 00d80950 */
/* Ghidra symbol: FUN_00d80950 */


int * FUN_00d80950(undefined8 param_1,int *param_2,undefined8 param_3,int *param_4)

{
  *(undefined8 *)param_2 = DAT_01ecf394;
  *(undefined8 *)(param_2 + 2) = DAT_01ecf39c;
  *param_2 = *param_4 + 4;
  param_2[1] = param_4[1] + 0x16;
  param_2[2] = param_4[2] + -4;
  param_2[3] = param_4[3] + -4;
  return param_2;
}

