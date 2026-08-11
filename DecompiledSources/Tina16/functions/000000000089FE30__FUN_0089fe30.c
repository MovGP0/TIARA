/* Ghidra address: 0089fe30 */
/* Ghidra symbol: FUN_0089fe30 */


int FUN_0089fe30(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_28;
  int local_24;
  undefined8 local_20;
  
  local_20 = 0;
  local_24 = 0;
  iVar3 = 0;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + -4);
  }
  local_28 = param_3;
  if ((param_3 < 0) && (local_28 = 0, param_2 != 0)) {
    local_28 = *(int *)(param_2 + -4);
  }
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  if ((iVar2 - iVar3) + 1 <= local_28) {
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = *(int *)(param_2 + -4);
    }
    local_28 = (iVar2 - iVar3) + 1;
  }
  iVar2 = local_24;
  if (0 < local_28) {
    do {
      FUN_00416dc0(&local_20,param_2,local_28,iVar3);
      cVar1 = FUN_00879070(local_20,param_1);
      iVar2 = local_28;
      if (cVar1 != '\0') break;
      local_28 = local_28 + -1;
      iVar2 = local_24;
    } while (local_28 != 0);
  }
  local_24 = iVar2;
  FUN_00414480(&local_20);
  return local_24;
}

