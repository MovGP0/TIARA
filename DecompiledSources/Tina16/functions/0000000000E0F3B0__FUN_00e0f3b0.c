/* Ghidra address: 00e0f3b0 */
/* Ghidra symbol: FUN_00e0f3b0 */


undefined1 FUN_00e0f3b0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined1 local_29;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_29 = 0;
  *param_3 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(param_1,iVar3);
      iVar1 = FUN_00416db0(*(undefined8 *)(*(longlong *)(lVar2 + 0x828) + 0x18),local_res10[0]);
      if (iVar1 == 0) {
        local_29 = 1;
        *param_3 = lVar2;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(local_res10);
  return local_29;
}

