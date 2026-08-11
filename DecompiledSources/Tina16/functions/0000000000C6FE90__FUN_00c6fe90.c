/* Ghidra address: 00c6fe90 */
/* Ghidra symbol: FUN_00c6fe90 */


undefined8 FUN_00c6fe90(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_28 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_00c6fe60(param_1,iVar4);
      FUN_00c6fa30(uVar2,&local_20);
      iVar1 = FUN_00416db0(local_20,local_res10[0]);
      if (((iVar1 == 0) && (param_3 == '\0')) &&
         (lVar3 = FUN_00c6fe60(param_1,iVar4), *(char *)(lVar3 + 0x40) == '\0')) {
        local_28 = FUN_00c6fe60(param_1,iVar4);
        break;
      }
      lVar3 = FUN_00c6fe60(param_1,iVar4);
      if ((*(char *)(lVar3 + 0x40) == param_3) && (param_3 != '\0')) {
        local_28 = FUN_00c6fe60(param_1,iVar4);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return local_28;
}

