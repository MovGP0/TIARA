/* Ghidra address: 0150fe40 */
/* Ghidra symbol: FUN_0150fe40 */


void FUN_0150fe40(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  double local_30;
  
  plVar1 = *(longlong **)(param_1 + 0xee0);
  local_30 = (double)(**(code **)(*plVar1 + 0xc0))(plVar1);
  if (param_2 == '\0') {
    (**(code **)(*plVar1 + 0xd8))(plVar1);
  }
  else if (param_2 == '\x01') {
    (**(code **)(*plVar1 + 0xd0))(plVar1);
  }
  else if (param_2 == '\x06') {
    local_30 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0xcd8));
    (**(code **)(*plVar1 + 0xb8))(plVar1,&local_30);
    (**(code **)(*plVar1 + 200))(plVar1,local_30);
  }
  uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  FUN_00b90440(*(undefined8 *)(param_1 + 0xcd8),uVar3);
  dVar4 = (double)(**(code **)(*plVar1 + 0xc0))(plVar1);
  local_30 = dVar4 / local_30;
  FUN_010bfdb0(&local_30,2);
  lVar2 = *(longlong *)(param_1 + 0x9b0);
  uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  *(undefined8 *)(lVar2 + 0x108) = uVar3;
  FUN_015130b0(param_1,local_30);
  if (*(char *)(param_1 + 0xec2) != '\0') {
    FUN_01513140(param_1);
    FUN_010eb080(*(undefined8 *)(param_1 + 0x9b0),local_30,1,0);
    *(double *)(param_1 + 0xc58) = *(double *)(param_1 + 0xc58) * local_30;
    *(double *)(param_1 + 0xc50) = *(double *)(param_1 + 0xc50) * local_30;
    if (*(char *)(*(longlong *)(param_1 + 0xba8) + 0x328) == '\0') {
      FUN_00b90440(*(undefined8 *)(param_1 + 0xb90),*(undefined8 *)(param_1 + 0xc50));
    }
    else {
      FUN_00b90440(*(undefined8 *)(param_1 + 0xb90),*(undefined8 *)(param_1 + 0xc58));
    }
    FUN_01506c70(param_1);
    FUN_010f6920(param_1,1);
  }
  return;
}

