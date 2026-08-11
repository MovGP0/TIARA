/* Ghidra address: 00cd9800 */
/* Ghidra symbol: FUN_00cd9800 */


int FUN_00cd9800(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int local_24;
  undefined8 local_20;
  
  local_20 = 0;
  local_24 = -1;
  iVar3 = (**(code **)(*param_1 + 0x28))();
  iVar4 = 0;
  iVar1 = local_24;
  if (-1 < iVar3 + -1) {
    do {
      FUN_00cd91c0(param_1,&local_20,iVar4);
      cVar2 = FUN_00879070(local_20,param_2);
      iVar1 = iVar4;
      if (cVar2 != '\0') break;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
      iVar1 = local_24;
    } while (iVar3 != 0);
  }
  local_24 = iVar1;
  FUN_00414480(&local_20);
  return local_24;
}

