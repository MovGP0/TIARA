/* Ghidra address: 013c5cf0 */
/* Ghidra symbol: FUN_013c5cf0 */


longlong FUN_013c5cf0(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  longlong local_20;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_20 = 0;
  *param_3 = -1;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar1 = FUN_004aeac0(param_1,iVar3);
      lVar2 = FUN_013c5bc0(uVar1,local_res10[0]);
      if (lVar2 != 0) {
        *param_3 = iVar3;
        local_20 = lVar2;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(local_res10);
  return local_20;
}

