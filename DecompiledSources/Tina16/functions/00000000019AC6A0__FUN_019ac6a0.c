/* Ghidra address: 019ac6a0 */
/* Ghidra symbol: FUN_019ac6a0 */


undefined8 FUN_019ac6a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined8 local_30;
  undefined8 local_20;
  
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_30 = 0;
  iVar4 = *(int *)(param_1 + 0x10) + -1;
  uVar3 = local_30;
  if (-1 < iVar4) {
    do {
      uVar3 = FUN_00b94e60(param_1,iVar4);
      cVar1 = FUN_0198a580(uVar3);
      if (cVar1 == '\a') {
        FUN_010b96c0(uVar3,&local_20);
        iVar2 = FUN_00416db0(local_20,local_res10[0]);
        if (iVar2 == 0) break;
      }
      iVar4 = iVar4 + -1;
      uVar3 = local_30;
    } while (iVar4 != -1);
  }
  local_30 = uVar3;
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return local_30;
}

