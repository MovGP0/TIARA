/* Ghidra address: 0150fa70 */
/* Ghidra symbol: FUN_0150fa70 */


void FUN_0150fa70(longlong param_1,int param_2,undefined8 param_3,char param_4,char param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  int local_res10 [2];
  undefined8 local_res18 [2];
  double local_30;
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xe0))
            (*(longlong **)(param_1 + 0xee0),local_res10);
  (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xf0))
            (*(longlong **)(param_1 + 0xee0),local_res10[0]);
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0xdf8),local_res10[0]);
  local_30 = (double)(**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))
                               (*(longlong **)(param_1 + 0xee0));
  (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xb8))
            (*(longlong **)(param_1 + 0xee0),local_res18);
  (**(code **)(**(longlong **)(param_1 + 0xee0) + 200))
            (*(longlong **)(param_1 + 0xee0),local_res18[0]);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))(*(longlong **)(param_1 + 0xee0));
  FUN_00b90440(*(undefined8 *)(param_1 + 0xcd8),uVar2);
  lVar1 = *(longlong *)(param_1 + 0x9b0);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))(*(longlong **)(param_1 + 0xee0));
  *(undefined8 *)(lVar1 + 0x108) = uVar2;
  if (*(char *)(param_1 + 0xec2) == '\0') {
    *(double *)(param_1 + 0xc58) = (double)local_res10[0];
  }
  else {
    dVar3 = (double)(**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))
                              (*(longlong **)(param_1 + 0xee0));
    *(double *)(param_1 + 0xc58) = (double)local_res10[0] * dVar3;
  }
  *(undefined8 *)(param_1 + 0xc50) = 0;
  if (param_4 != '\0') {
    dVar3 = (double)(**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))
                              (*(longlong **)(param_1 + 0xee0));
    local_30 = dVar3 / local_30;
    FUN_010bfdb0(&local_30,2);
    FUN_015130b0(param_1,local_30);
    if (*(char *)(param_1 + 0xec2) != '\0') {
      FUN_01513140(param_1);
      FUN_010eb080(*(undefined8 *)(param_1 + 0x9b0),local_30,1,0);
    }
  }
  FUN_010eae00(*(undefined8 *)(param_1 + 0x9b0),*(undefined8 *)(param_1 + 0xc50),0,0,0);
  FUN_010eae00(*(undefined8 *)(param_1 + 0x9b0),*(undefined8 *)(param_1 + 0xc58),1,1,0);
  if (*(char *)(*(longlong *)(param_1 + 0xba8) + 0x328) == '\0') {
    FUN_00b90440(*(undefined8 *)(param_1 + 0xb90),*(undefined8 *)(param_1 + 0xc50));
  }
  else {
    FUN_00b90440(*(undefined8 *)(param_1 + 0xb90),*(undefined8 *)(param_1 + 0xc58));
  }
  FUN_01506c70(param_1);
  if (param_5 != '\0') {
    FUN_010f6920(param_1,1);
  }
  FUN_01506fd0(param_1);
  return;
}

