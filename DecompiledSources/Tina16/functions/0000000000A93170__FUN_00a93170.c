/* Ghidra address: 00a93170 */
/* Ghidra symbol: FUN_00a93170 */


void FUN_00a93170(longlong *param_1,byte param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong local_20 [2];
  
  local_20[0] = 0;
  FUN_00411a80(param_1,param_2);
  FUN_00a78010(param_1,local_20);
  iVar3 = 0;
  if (local_20[0] != 0) {
    iVar3 = *(int *)(local_20[0] + -4);
  }
  if (((0 < iVar3) && (param_1[3] != 0)) && (*(longlong *)(param_1[3] + 0x298) != 0)) {
    plVar1 = *(longlong **)(param_1[3] + 0x298);
    iVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1,param_1);
    if (-1 < iVar3) {
      (**(code **)(*plVar1 + 0x98))(plVar1,iVar3);
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  if (cVar2 == '\0') {
    FUN_00410f20(param_1[6]);
    FUN_00410f20(param_1[7]);
  }
  FUN_00410ef0(param_1,param_2 & 0xfc);
  FUN_00414480(local_20);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

