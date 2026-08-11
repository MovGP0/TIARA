/* Ghidra address: 00ce7f00 */
/* Ghidra symbol: FUN_00ce7f00 */


undefined1 FUN_00ce7f00(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_29 = 0;
  iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      FUN_004b3cf0(param_2,local_20,iVar2);
      cVar1 = FUN_00879070(local_20[0],param_3);
      if (cVar1 != '\0') {
        FUN_00879940(&local_28,param_2,iVar2);
        FUN_00414ad0(param_4,local_28);
        local_29 = 1;
        break;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  FUN_00414560(&local_28,2);
  return local_29;
}

