/* Ghidra address: 00d3c580 */
/* Ghidra symbol: FUN_00d3c580 */


int * FUN_00d3c580(undefined8 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int extraout_var;
  int extraout_var_00;
  int extraout_var_01;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [2];
  int local_30;
  int local_2c;
  
  FUN_004238d0(param_2,0,0,0,0);
  FUN_00787fc0(param_1[3],local_38);
  (**(code **)*param_1)(param_1,&local_48);
  *param_2 = local_38[0];
  param_2[2] = local_30;
  FUN_00d3c3b0(param_1);
  param_2[1] = local_2c - extraout_var;
  FUN_00d3c3b0(param_1);
  param_2[3] = param_2[1] + extraout_var_00;
  if ((((0 < local_48) || (0 < local_44)) || (0 < local_40)) || (0 < local_3c)) {
    *param_2 = *param_2 + local_48;
    param_2[2] = param_2[2] - local_40;
    param_2[3] = param_2[3] - local_3c;
    FUN_00d3c3b0(param_1);
    param_2[1] = param_2[3] - extraout_var_01;
  }
  if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
    cVar1 = FUN_00d3cfa0(param_1);
    if (cVar1 == '\0') {
      iVar2 = FUN_00d3c3b0(param_1);
      param_2[2] = param_2[2] - iVar2;
    }
    else {
      iVar2 = FUN_00d3c3b0(param_1);
      *param_2 = *param_2 + iVar2;
    }
  }
  return param_2;
}

