/* Ghidra address: 004236d0 */
/* Ghidra symbol: FUN_004236d0 */


int * FUN_004236d0(int *param_1,int *param_2,char param_3,int param_4)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  if (param_3 == '\0') {
    param_1[2] = *param_2 + param_4;
  }
  else if (param_3 == '\x01') {
    *param_1 = param_2[2] - param_4;
  }
  else if (param_3 == '\x02') {
    param_1[3] = param_2[1] + param_4;
  }
  else if (param_3 == '\x03') {
    param_1[1] = param_2[3] - param_4;
  }
  return param_1;
}

