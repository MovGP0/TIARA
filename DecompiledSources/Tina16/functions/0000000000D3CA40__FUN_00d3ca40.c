/* Ghidra address: 00d3ca40 */
/* Ghidra symbol: FUN_00d3ca40 */


int * FUN_00d3ca40(undefined8 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int extraout_var;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  FUN_004238d0(param_2,0,0,0,0);
  FUN_00787fc0(param_1[3],&local_38);
  (**(code **)*param_1)(param_1,&local_48);
  cVar1 = FUN_00d3cfa0(param_1);
  if (cVar1 == '\0') {
    iVar2 = FUN_00d3c3b0(param_1);
    *param_2 = local_30 - iVar2;
    iVar2 = FUN_00d3c3b0(param_1);
    param_2[2] = *param_2 + iVar2;
    param_2[1] = local_34;
    param_2[3] = local_2c;
  }
  else {
    *param_2 = local_38;
    iVar2 = FUN_00d3c3b0(param_1);
    param_2[2] = local_38 + iVar2;
    param_2[1] = local_34;
    param_2[3] = local_2c;
  }
  if ((((-1 < local_48) || (-1 < local_44)) || (-1 < local_40)) || (-1 < local_3c)) {
    cVar1 = FUN_00d3cfa0(param_1);
    if (cVar1 == '\0') {
      *param_2 = *param_2 - local_40;
      iVar2 = FUN_00d3c3b0(param_1);
      param_2[2] = *param_2 + iVar2;
      param_2[1] = param_2[1] + local_44;
      param_2[3] = param_2[3] - local_3c;
    }
    else {
      *param_2 = *param_2 + local_48;
      iVar2 = FUN_00d3c3b0(param_1);
      param_2[2] = *param_2 + iVar2;
      param_2[1] = param_2[1] + local_44;
      param_2[3] = param_2[3] - local_3c;
    }
  }
  if (*(char *)((longlong)param_1 + 0x7d) != '\0') {
    FUN_00d3c3b0(param_1);
    param_2[3] = param_2[3] - extraout_var;
  }
  return param_2;
}

