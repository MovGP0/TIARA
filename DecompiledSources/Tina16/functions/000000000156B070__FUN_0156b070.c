/* Ghidra address: 0156b070 */
/* Ghidra symbol: FUN_0156b070 */


undefined1 FUN_0156b070(longlong param_1,undefined8 param_2,longlong *param_3)

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
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x8e0) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x8e0),iVar3);
      iVar1 = FUN_00416db0(*(undefined8 *)(*(longlong *)(lVar2 + 0x828) + 8),local_res10[0]);
      if (iVar1 == 0) {
        *param_3 = lVar2;
        local_29 = 1;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(local_res10);
  return local_29;
}

