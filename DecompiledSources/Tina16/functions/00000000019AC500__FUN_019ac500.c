/* Ghidra address: 019ac500 */
/* Ghidra symbol: FUN_019ac500 */


undefined8 FUN_019ac500(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  
  local_res10[0] = param_2;
  local_38 = param_1;
  FUN_00414610(param_2);
  local_30 = 0;
  iVar4 = *(int *)(local_38 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_00b94e60(local_38,iVar3);
      cVar1 = FUN_019ac320(auStack_58,uVar2);
      if (cVar1 != '\0') {
        local_30 = FUN_00b94e60(local_38,iVar3);
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(local_res10);
  return local_30;
}

