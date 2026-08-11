/* Ghidra address: 0068c230 */
/* Ghidra symbol: FUN_0068c230 */


int FUN_0068c230(longlong *param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined8 local_30;
  
  local_30 = *param_2;
  (**(code **)(*param_1 + 0xe0))(param_1,local_50);
  cVar1 = FUN_00423210(local_50,&local_30);
  if (cVar1 != '\0') {
    iVar2 = FUN_0068bee0(param_1);
    iVar3 = (**(code **)(*(longlong *)param_1[0x94] + 0x28))((longlong *)param_1[0x94]);
    for (; iVar2 < iVar3; iVar2 = iVar2 + 1) {
      FUN_0068bc00(param_1,local_40,iVar2);
      cVar1 = FUN_00423210(local_40,&local_30);
      if (cVar1 != '\0') {
        return iVar2;
      }
    }
    if (param_3 == '\0') {
      return iVar2;
    }
  }
  return -1;
}

