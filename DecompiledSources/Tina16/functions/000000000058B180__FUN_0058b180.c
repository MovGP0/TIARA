/* Ghidra address: 0058b180 */
/* Ghidra symbol: FUN_0058b180 */


int FUN_0058b180(char *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_44;
  undefined8 local_40 [2];
  byte *local_30;
  byte *local_28;
  char *local_20;
  
  local_40[0] = 0;
  local_30 = (byte *)(param_1 + 1);
  iVar2 = *(int *)(param_1 + (ulonglong)*local_30 + 3);
  cVar1 = *param_1;
  local_28 = local_30;
  local_20 = param_1;
  if (cVar1 == '\x01') {
    local_44 = FUN_0043fc00(param_2);
    local_44 = local_44 - iVar2;
  }
  else if ((cVar1 == '\x02') || (cVar1 == '\t')) {
    iVar3 = 0;
    if (param_2 != 0) {
      iVar3 = *(int *)(param_2 + -4);
    }
    FUN_00416dc0(local_40,param_2,2,iVar3 + -1);
    local_44 = FUN_0043fc00(local_40[0]);
    local_44 = local_44 - iVar2;
  }
  else {
    local_44 = FUN_00589bc0(param_1,param_2);
  }
  FUN_00414480(local_40);
  return local_44;
}

