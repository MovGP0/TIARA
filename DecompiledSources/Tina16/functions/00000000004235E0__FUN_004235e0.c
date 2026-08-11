/* Ghidra address: 004235e0 */
/* Ghidra symbol: FUN_004235e0 */


int * FUN_004235e0(int *param_1,int *param_2,char param_3,double param_4)

{
  int iVar1;
  
  *(undefined8 *)param_2 = *(undefined8 *)param_1;
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 2);
  if (param_3 == '\0') {
    iVar1 = FUN_004230a0(param_1);
    iVar1 = FUN_0040c840(param_4 * (double)iVar1);
    param_2[2] = *param_1 + iVar1;
  }
  else if (param_3 == '\x01') {
    iVar1 = FUN_004230a0(param_1);
    iVar1 = FUN_0040c840(param_4 * (double)iVar1);
    *param_2 = param_1[2] - iVar1;
  }
  else if (param_3 == '\x02') {
    iVar1 = FUN_004230c0(param_1);
    iVar1 = FUN_0040c840(param_4 * (double)iVar1);
    param_2[3] = param_1[1] + iVar1;
  }
  else if (param_3 == '\x03') {
    iVar1 = FUN_004230c0(param_1);
    iVar1 = FUN_0040c840(param_4 * (double)iVar1);
    param_2[1] = param_1[3] - iVar1;
  }
  return param_2;
}

