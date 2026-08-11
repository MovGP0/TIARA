/* Ghidra address: 00423730 */
/* Ghidra symbol: FUN_00423730 */


int * FUN_00423730(int *param_1,int *param_2,char param_3,double param_4)

{
  int iVar1;
  int iVar2;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  if (param_3 == '\0') {
    iVar1 = *param_2;
    iVar2 = FUN_0040c840(param_4 * (double)(param_2[2] - iVar1));
    param_1[2] = iVar1 + iVar2;
  }
  else if (param_3 == '\x01') {
    iVar1 = param_2[2];
    iVar2 = FUN_0040c840(param_4 * (double)(iVar1 - *param_2));
    *param_1 = iVar1 - iVar2;
  }
  else if (param_3 == '\x02') {
    iVar1 = param_2[1];
    iVar2 = FUN_0040c840(param_4 * (double)(param_2[3] - iVar1));
    param_1[3] = iVar1 + iVar2;
  }
  else if (param_3 == '\x03') {
    iVar1 = param_2[3];
    iVar2 = FUN_0040c840(param_4 * (double)(iVar1 - param_2[1]));
    param_1[1] = iVar1 - iVar2;
  }
  return param_1;
}

